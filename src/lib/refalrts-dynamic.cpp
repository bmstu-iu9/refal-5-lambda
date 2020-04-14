#include <algorithm>
#include <assert.h>
#include <errno.h>
#include <new>
#include <set>
#include <typeinfo>
#include <utility>

#include "refalrts-dynamic.h"
#include "refalrts-commands.h"
#include "refalrts-native-module.h"
#include "refalrts-utils.h"

//FROM refalrts-functions
#include "refalrts-functions.h"
//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


//==============================================================================
// Модуль
//==============================================================================

refalrts::Module::Module(
  refalrts::Domain *domain, const std::string& module_name,
  const refalrts::api::stat *stat, bool& success,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::NativeModule *native
)
  : m_unresolved_func_tables()
  , m_funcs_table()
  , m_tables()
  , m_native(native)
  , m_os_module(0)
  , m_global_variables()
  , m_domain(domain)
  , m_unresolved_native_functions()
  , m_references()
  , m_name(module_name)
  , m_stat(stat)
  , m_indirect_references()
  , m_aliases()
  , m_representant(domain->new_module_representant(module_name, this))
  , m_refcounter(0)
  , m_initialized_scopes()
{
  assert(event);

  ModuleLoadingErrorDetail detail;
  success = false;
  try {
    Loader loader(this, module_name.c_str());
    loader.enumerate_blocks();

    if (! m_unresolved_native_functions.empty() && ! m_native) {
      if (! load_os_module(event, callback_data)) {
        return;
      }
    }

    if (m_native) {
      alloc_global_variables();
      success = resolve_native_functions(event, callback_data);
    } else {
      success = true;
    }
    m_aliases.push_back(module_name);
  } catch (LoadModuleError& e) {
    detail.message = e.message.c_str();
    event(cModuleLoadingError_InvalidRasl, &detail, callback_data);
  } catch (AllocIdentifierError&) {
    event(cModuleLoadingError_CantAllocIdent, &detail, callback_data);
  } catch (RedeclarationError& e) {
    detail.func_name = e.func_name();
    event(cModuleLoadingError_FunctionIsRedeclared, &detail, callback_data);
  } catch (std::bad_alloc& e) {
    detail.message = e.what();
    event(cModuleLoadingError_CantAllocMemory, &detail, callback_data);
  }
}

refalrts::Module::~Module() {
  api::stat_destroy(m_stat);
  assert(m_funcs_table.empty());
}


//------------------------------------------------------------------------------
// Функции
//------------------------------------------------------------------------------

refalrts::RefalFunction *
refalrts::Module::lookup_function(const refalrts::RefalFuncName& name) {
  RefalFunction *result = 0;

  ModuleList::iterator pmod = m_indirect_references.begin();
  while (
    pmod != m_indirect_references.end()
    && (result = (*pmod)->lookup_function_aux(name), result == 0)
  ) {
    ++pmod;
  }

  return result;
}

refalrts::RefalFunction *
refalrts::Module::lookup_function_aux(const refalrts::RefalFuncName& name) {
  FuncsMap::iterator p = m_funcs_table.find(name);

  if (p != m_funcs_table.end()) {
    return p->second;
  } else {
    return 0;
  }
}

void refalrts::Module::register_function(refalrts::RefalFunction *func) {
  assert(func->module == 0);
  func->module = this;

  FuncsMap::value_type new_value(func->name, func);
  std::pair<FuncsMap::iterator, bool> res = m_funcs_table.insert(new_value);
  if (! res.second) {
    throw RedeclarationError(func->name);
  }
}

bool refalrts::Module::find_unresolved_externals(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  collect_indirect_references();
  return find_unresolved_externals_rasl(event, callback_data);
}

void refalrts::Module::collect_indirect_references() {
  m_indirect_references.push_back(this);
  ModuleList::iterator unscanned = m_indirect_references.begin();

  while (unscanned != m_indirect_references.end()) {
    Module *to_scan = *unscanned;

    for (
      ReferenceMap::iterator p = to_scan->m_references.begin();
      p != to_scan->m_references.end();
      ++p
    ) {
      Module *next = p->second;
      assert(next != 0);
      ModuleList::iterator known = std::find(
        m_indirect_references.begin(),
        m_indirect_references.end(),
        next
      );
      if (known == m_indirect_references.end()) {
        m_indirect_references.push_back(next);
      }
    }

    ++unscanned;
  }
}

bool refalrts::Module::find_unresolved_externals_rasl(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;

  while (! m_unresolved_func_tables.empty()) {
    ConstTable *table = m_unresolved_func_tables.front();
    std::vector<std::string>& items_names = table->externals_names;
    std::vector<RefalFunction*>& items_pointers = table->externals_pointers;
    assert(items_names.size() == items_pointers.size());
    for (size_t i = 0; i < items_names.size(); ++i) {
      const char *str_name = items_names[i].c_str();
      char type = *str_name;

      UInt32 cookie1, cookie2;
      if (type == '*') {
        cookie1 = 0;
        cookie2 = 0;
      } else if (type == '#') {
        cookie1 = table->cookie1;
        cookie2 = table->cookie2;
      } else {
        throw LoadModuleError(
          std::string("Bad external function name '")
          + str_name + "', name must start from '*' or '#'"
        );
      }

      RefalFuncName name(str_name + 1, cookie1, cookie2);
      RefalFunction *function = lookup_function(name);
      items_pointers[i] = function;
      if (! function) {
        ModuleLoadingErrorDetail detail;
        detail.func_name = name;
        event(cModuleLoadingError_UnresolvedExternal, &detail, callback_data);
        success = false;
      }
    }

    m_unresolved_func_tables.pop_front();
  }

  return success;
}

bool refalrts::Module::resolve_native_functions(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;

  for (
    NativeList::iterator p = m_unresolved_native_functions.begin();
    p != m_unresolved_native_functions.end();
    ++p
  ) {
    RefalNativeFunction *func = *p;
    assert(func->ptr == 0);

    NativeReference *ref = m_native->native_references;
    while (ref != 0 && ref->refal_func_name() != func->name) {
      ref = ref->next;
    }

    if (ref != 0) {
      func->ptr = ref->code;
    } else {
      ModuleLoadingErrorDetail detail;
      detail.func_name = (*p)->name;
      event(cModuleLoadingError_UnresolvedNative, &detail, callback_data);
      success = false;
    }
  }

  return success;
}

bool refalrts::Module::load_os_module(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  m_os_module = refalrts::api::load_os_module(
    m_name.c_str(), &m_native, event, callback_data
  );

  return m_os_module != 0;
}

bool refalrts::Module::has_alias(const std::string& alias) const {
  return std::find(m_aliases.begin(), m_aliases.end(), alias) != m_aliases.end();
}

bool refalrts::Module::with_stat(const refalrts::api::stat *stat) const {
  return api::stat_compare(m_stat, stat) == 0;
}

inline void refalrts::Module::del_ref() {
  assert(m_refcounter > 0);
  --m_refcounter;
}

void refalrts::Module::initialize(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::FnResult& result
) {
  result = cSuccess;
  for (
    std::list<ConstTable>::iterator p = m_tables.begin();
    p != m_tables.end() && result == cSuccess;
    ++p
  ) {
    UInt32 cookie1 = p->cookie1;
    UInt32 cookie2 = p->cookie2;
    RefalFuncName init_name("INIT", cookie1, cookie2);
    FuncsMap::iterator pfunc = m_funcs_table.find(init_name);
    if (pfunc != m_funcs_table.end()) {
      result = vm->execute_zero_arity_function(pfunc->second, pos);
    }

    if (result == cSuccess) {
      m_initialized_scopes.push_front(std::make_pair(cookie1, cookie2));
    }
  }
}

void refalrts::Module::finalize(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::FnResult& result
) {
  result = cSuccess;
  while (! m_initialized_scopes.empty() && result == cSuccess) {
    UInt32 cookie1 = m_initialized_scopes.front().first;
    UInt32 cookie2 = m_initialized_scopes.front().second;
    RefalFuncName final_name("FINAL", cookie1, cookie2);
    FuncsMap::iterator pfunc = m_funcs_table.find(final_name);
    if (pfunc != m_funcs_table.end()) {
      result = vm->execute_zero_arity_function(pfunc->second, pos);
    }

    if (result == cSuccess) {
      m_initialized_scopes.pop_front();
    }
  }
}

void refalrts::Module::deactivate() {
  while (m_funcs_table.size() > 0) {
    FuncsMap::iterator p = m_funcs_table.begin();
    RefalFunction *function = p->second;
    m_funcs_table.erase(p);
    if (RefalSwap *swap = dynamic_cast<RefalSwap *>(function)) {
      if (swap->left_call != 0) {
        Iter left_call = swap->left_call;
        Iter right_call = left_call->link_info;

        weld(left_call->prev, right_call->next);
        m_domain->free_nodes(left_call, right_call);
      }
    }
    function->deactivate();
  }

  if (m_os_module) {
    refalrts::api::unload_os_module(m_os_module);
    m_os_module = 0;
    m_native = 0;
  }
}

void refalrts::Module::make_dump(refalrts::VM *vm) {
  FILE *dump_stream = vm->dump_stream();

  fprintf(
    dump_stream,
    "      functions: %lu\n"
    "      const tables (scopes): %lu\n"
    "      global variables size: %lu\n"
    "      references: %lu\n"
    "      aliases: %lu\n",
    (unsigned long) m_funcs_table.size(),
    (unsigned long) m_tables.size(),
    (unsigned long) m_global_variables.size(),
    (unsigned long) m_references.size(),
    (unsigned long) m_aliases.size()
  );

  fprintf(dump_stream, "\n      FUNCTIONS:\n");
  int count = 0;
  for (
    FuncsMap::const_iterator p = m_funcs_table.begin();
    p != m_funcs_table.end();
    ++p
  ) {
    const RefalFuncName& name = p->first;
    const RefalFunction* func = p->second;
    fprintf(
      dump_stream,
      "%10d. %s (%u:%u) - %s\n",
      ++count, name.name, name.cookie1, name.cookie2, typeid(*func).name()
    );
  }

  fprintf(dump_stream, "\n      SCOPES:\n");
  count = 0;
  for (
    std::list<ConstTable>::const_iterator p = m_tables.begin();
    p != m_tables.end();
    ++p
  ) {
    fprintf(
      dump_stream, "%10d. %u:%u - %s\n",
      ++count, p->cookie1, p->cookie2, p->unit_name.c_str()
    );
  }

  fprintf(dump_stream, "\n      REFERENCES:\n");
  count = 0;
  for (
    ReferenceMap::const_iterator p = m_references.begin();
    p != m_references.end();
    ++p
  ) {
    fprintf(dump_stream, "%10d. %s\n", ++count, p->first.c_str());
  }

  fprintf(dump_stream, "\n      ALIASES:\n");
  count = 0;
  for (
    std::vector<std::string>::const_iterator p = m_aliases.begin();
    p != m_aliases.end();
    ++p
  ) {
    fprintf(dump_stream, "%10d. %s\n", ++count, p->c_str());
  }
}


//------------------------------------------------------------------------------
// Загружаемый модуль
//------------------------------------------------------------------------------

bool refalrts::Module::Loader::seek_rasl_signature() {
  int seek_res = fseek(m_stream, 0L, SEEK_END);
  if (seek_res != 0) {
    throw LoadModuleError("can't seek in module");
  }

  long int file_size = ftell(m_stream);
  if (file_size == -1L) {
    throw LoadModuleError(
      std::string("filesize obtaining error") + strerror(errno)
    );
  }

  long int next_offset = 0L;
  bool found = false;
  while (next_offset < file_size && ! found) {
    seek_res = fseek(m_stream, next_offset, SEEK_SET);
    if (seek_res != 0) {
      throw LoadModuleError("can't seek in module");
    }

    static char sample_sig[] = {
      '\x00', '\x08', '\0', '\0', '\0', 'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
    };
    sample_sig[0] = cBlockTypeStart;
    char actual_sig[sizeof(sample_sig)];
    size_t read = fread(actual_sig, sizeof(actual_sig), 1);
    if (read != 1) {
      throw LoadModuleError("can't read bytes from module");
    }

    found = memcmp(sample_sig, actual_sig, sizeof(sample_sig)) == 0;
    next_offset += 4096;
  }

  /*
    Позиция в файле после чтения сигнатуры будет в начале следующего блока,
    что вполне нормально для функции enumerate_blocks().
  */
  return found;
}

/*
  Функция также добавляет дополнительный \0 в конец строки.
*/
std::string refalrts::Module::Loader::read_asciiz() {
  std::string result;

  int byte;
  while (byte = fgetc(m_stream), byte != EOF && byte != '\0') {
    result += (char) byte;
  }

  if (byte == EOF) {
    throw LoadModuleError("can't read ASCIIZ string - EOF is reached");
  }

  return result;
}

refalrts::RefalFuncName
refalrts::Module::ConstTable::make_name(const std::string& name) const {
  char type = name[0];
  const char *proper_name = name.c_str() + 1;

  if (type == '#') {
    return RefalFuncName(proper_name, cookie1, cookie2);
  } else if (type == '*') {
    return RefalFuncName(proper_name, 0, 0);
  } else {
    throw LoadModuleError("name must start from '*' or '#', but got " + name);
  }
}

refalrts::Module::Loader::Loader(refalrts::Module *module, const char *filename)
  : m_module(module)
  , m_stream(fopen(filename, "rb"))
{
  if (! m_stream) {
    throw LoadModuleError("can't open main executable for read");
  }
}

refalrts::Module::Loader::~Loader() {
  if (m_stream) {
    fclose(m_stream);
  }
}

#define PARSE_ASSERT(condition, message) \
  if (! (condition)) { \
    throw LoadModuleError( \
      std::string("RASL invariant error: ") + (message) \
      + " (failed " + #condition + ")" \
    ); \
  }

void refalrts::Module::Loader::read_start_block(size_t datalen) {
  static const char sample[8] = {
    'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
  };
  PARSE_ASSERT(sizeof(sample) == datalen, "invalid START block size");

  char signature[sizeof(sample)];
  size_t read = fread(signature, 1, sizeof(signature));
  PARSE_ASSERT(sizeof(signature) == read, "can't read START signature");
  PARSE_ASSERT(
    memcmp(sample, signature, sizeof(signature)) == 0,
    "invalid signature in START, " + std::string(signature, read)
  );
}

refalrts::Module::ConstTable *
refalrts::Module::Loader::read_const_table() {
  struct {
    UInt32 cookie1;
    UInt32 cookie2;
    UInt32 external_count;
    UInt32 ident_count;
    UInt32 number_count;
    UInt32 string_count;
    UInt32 rasl_length;
    UInt32 external_size;
    UInt32 ident_size;
    UInt32 string_size;
  } fixed_part;

  size_t read = fread(&fixed_part, sizeof(fixed_part), 1);
  PARSE_ASSERT(read == 1, "can't read fixed part of CONST_TABLE");

  m_module->m_tables.push_back(ConstTable());
  ConstTable *new_table = &m_module->m_tables.back();

  new_table->cookie1 = fixed_part.cookie1;
  new_table->cookie2 = fixed_part.cookie2;

  new_table->externals_names.resize(fixed_part.external_count);
  new_table->externals_pointers.resize(fixed_part.external_count);
  new_table->external_memory.resize(fixed_part.external_size);
  read = fread(&new_table->external_memory[0], 1, fixed_part.external_size);
  PARSE_ASSERT(
    read == fixed_part.external_size,
    "can't read externals list in CONST_TABLE"
  );
  const char *next_external_name = &new_table->external_memory[0];
  for (size_t i = 0; i < fixed_part.external_count; ++i) {
    new_table->externals_names[i] = next_external_name;
    PARSE_ASSERT(
      next_external_name < &*new_table->external_memory.end(),
      "bad count of external names in CONST_TABLE"
    );
    next_external_name += strlen(next_external_name) + 1;
  }
  m_module->m_unresolved_func_tables.push_front(new_table);

  new_table->idents.resize(fixed_part.ident_count);
  new_table->idents_memory.resize(fixed_part.ident_size);
  read = fread(&new_table->idents_memory[0], 1, fixed_part.ident_size);
  PARSE_ASSERT(
    read == fixed_part.ident_size,
    "can't read idents list in CONST_TABLE"
  );
  const char *next_ident_name = &new_table->idents_memory[0];
  for (size_t i = 0; i < fixed_part.ident_count; ++i) {
    RefalIdentifier ident = ident_implode(m_module->m_domain, next_ident_name);
    if (! ident) {
      throw AllocIdentifierError();
    }
    new_table->idents[i] = ident;
    PARSE_ASSERT(
      next_ident_name < &*new_table->idents_memory.end(),
      "bad count of identifiers in CONST_TABLE"
    );
    next_ident_name += strlen(next_ident_name) + 1;
  }

  new_table->numbers.resize(fixed_part.number_count);
  read = fread(
    &new_table->numbers[0], sizeof(RefalNumber), fixed_part.number_count
  );
  PARSE_ASSERT(
    read == fixed_part.number_count,
    "can't read numbers list in CONST_TABLE"
  );

  new_table->strings.resize(fixed_part.string_count);
  new_table->strings_memory.resize(fixed_part.string_size);
  char *string_target = &new_table->strings_memory[0];
  for (size_t i = 0; i < fixed_part.string_count; ++i) {
    UInt32 length;
    read = fread(&length, sizeof(length), 1);
    PARSE_ASSERT(read == 1, "can't read STRING size in CONST_TABLE");
    read = fread(string_target, 1, length);
    PARSE_ASSERT(read == length, "can't read STRING chars in CONST_TABLE");
    new_table->strings[i].string = string_target;
    new_table->strings[i].string_len = length;
    string_target += length;
  }

  new_table->rasl.resize(fixed_part.rasl_length);
  read = fread(&new_table->rasl[0], sizeof(RASLCommand), fixed_part.rasl_length);
  PARSE_ASSERT(
    read == fixed_part.rasl_length, "can't read rasl in CONST_TABLE"
  );

  return new_table;
}

void refalrts::Module::Loader::enumerate_blocks() {
  ConstTable *table = 0;

  bool succeeded = seek_rasl_signature();
  if (! succeeded) {
    throw LoadModuleError("can't find signature in executable\n");
  }

  unsigned char type;
  while (fread(&type, sizeof(type), 1) == 1) {
    UInt32 datalen;

    size_t read = fread(&datalen, sizeof(datalen), 1);
    PARSE_ASSERT(read == 1, "can't read block size");

    switch (type) {
      case cBlockTypeStart:
        read_start_block(datalen);
        break;

      case cBlockTypeConstTable:
        table = read_const_table();
        break;

      case cBlockTypeRefalFunction:
        {
          PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
          std::string name = read_asciiz();

          UInt32 offset;
          read = fread(&offset, sizeof(offset), 1);
          PARSE_ASSERT(read == 1, "can't read offset in REFAL_FUNCTION");

          register_(
            domain()->new_RASL_function(
              table->make_name(name),
              &table->rasl[offset],
              &table->externals_pointers[0],
              &table->idents[0],
              &table->numbers[0],
              &table->strings[0],
              table->unit_name.c_str()
            )
          );
        }
        break;

      case cBlockTypeNativeFunction:
        {
          PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
          RefalNativeFunction *func =
            domain()->new_native_function(
              &table->externals_pointers[0],
              &table->idents[0],
              table->make_name(read_asciiz())
            );
          register_(func);
          m_module->m_unresolved_native_functions.push_back(func);
        }
        break;

      case cBlockTypeEmptyFunction:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(domain()->new_empty_function(table->make_name(read_asciiz())));
        break;

      case cBlockTypeSwap:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(domain()->new_swap(table->make_name(read_asciiz())));
        break;

      case cBlockTypeReference:
        m_module->m_references.insert(ReferenceMap::value_type(read_asciiz(), 0));
        break;

      case cBlockTypeConditionRasl:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(domain()->new_cond_func_rasl(table->make_name(read_asciiz())));
        break;

      case cBlockTypeConditionNative:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(domain()->new_cond_func_nat(table->make_name(read_asciiz())));
        break;

      case cBlockTypeIncorporated:
        m_module->m_aliases.push_back(read_asciiz());
        break;

      case cBlockTypeUnitName:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede unit name block");
        table->unit_name = read_asciiz();
        break;

      case cBlockTypeMetatable:
        {
          PARSE_ASSERT(
            table != 0, "IDENT_FUNC_MAP_TABLE must precede unit name block"
          );
          std::string name = read_asciiz();

          UInt32 count;
          read = fread(&count, sizeof(count), 1);
          PARSE_ASSERT(read == 1, "can't read IDENT_FUNC_MAP_TABLE size");

          Metatable *metatable =
            domain()->new_metatable(
              table->make_name(name),
              &table->externals_pointers[0],
              &table->idents[0]
            );

          for (UInt32 i = 0; i < count; ++i) {
            Metatable::Pair pair;

            read = fread(&pair, sizeof(pair), 1);
            PARSE_ASSERT(read == 1, "can't read IDENT_FUNC_MAP item");

            metatable->pairs.push_back(pair);
          }

          register_(metatable);
        }
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }
}


//==============================================================================
// Домен
//==============================================================================

refalrts::Domain::ModuleStorage::ModuleStorage(refalrts::Domain *domain)
  : m_domain(domain)
  , m_modules()
{
  /* пусто */
}

refalrts::Domain::ModuleStorage::~ModuleStorage() {
  while (! m_modules.empty()) {
    delete m_modules.front();
    m_modules.pop_front();
  }
}

refalrts::RefalFunction *
refalrts::Domain::ModuleStorage::operator[](
  const refalrts::RefalFuncName& name
) const {
  ModuleList::const_iterator p = m_modules.begin();
  RefalFunction *func = 0;

  while (p != m_modules.end() && ((func = (*p)->lookup_function(name)) == 0)) {
    ++p;
  }

  return func;
}

refalrts::Module *refalrts::Domain::ModuleStorage::load_module(
  const std::string& name, refalrts::Domain::Stack *stack,
  LoadModuleEvent event, void *callback_data,
  refalrts::NativeModule *main_module
) {
  // Без явной подсказки <const std::string&> тип не выводится
  Module *module =
     find_known<const std::string&>(stack, name, &Module::has_alias);
  if (module) {
    return module;
  }

  std::string real_name;
  const refalrts::api::stat *stat =
    m_domain->lookup_module_by_name(name, real_name);

  if (! stat) {
    ModuleLoadingErrorDetail detail;
    detail.message = name.c_str();
    event(cModuleLoadingError_ModuleNotFound, &detail, callback_data);
    return 0;
  }

  module = find_known(stack, stat, &Module::with_stat);
  if (module) {
    api::stat_destroy(stat);
    return module;
  }

  bool load_success = true;
  module = new Module(
    m_domain, real_name, stat, load_success, event, callback_data, main_module
  );

  Stack substack(module, stack);
  bool ref_success = true;
  for (
    Module::ReferenceMap::iterator p = module->references().begin();
    p != module->references().end();
    ++p
  ) {
    if (module->has_alias(p->first)) {
      p->second = module;
    } else {
      Module *ref_module = load_module(p->first, &substack, event, callback_data);
      ref_success = ref_success && ref_module != 0;
      p->second = ref_module;
    }
  }

  m_modules.push_back(module);
  return (load_success && ref_success) ? module : 0;
}

bool refalrts::Domain::ModuleStorage::find_unresolved_externals(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;
  for (ModuleList::iterator p = m_modules.begin(); p != m_modules.end(); ++p) {
    bool module_success = (*p)->find_unresolved_externals(event, callback_data);
    success = success && module_success;
  }
  return success;
}

void refalrts::Domain::ModuleStorage::unload(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::FnResult& result
) {
  result = cSuccess;
  for (
    ModuleList::reverse_iterator p = m_modules.rbegin();
    p != m_modules.rend();
    ++p
  ) {
    (*p)->finalize(vm, pos, result);
  }

  while (! m_modules.empty()) {
    m_modules.front()->deactivate();
    delete m_modules.front();
    m_modules.pop_front();
  }
}

void refalrts::Domain::ModuleStorage::splice_and_init(
  refalrts::VM *vm, refalrts::Iter pos,
  refalrts::Domain::ModuleStorage& other, refalrts::FnResult& result
) {
  Module *first_new = other.m_modules.front();

  m_modules.splice(
    m_modules.end(),
    other.m_modules, other.m_modules.begin(), other.m_modules.end()
  );

  ModuleList::iterator p = m_modules.begin();
  while (p != m_modules.end() && *p != first_new) {
    ++p;
  }

  result = cSuccess;
  while (p != m_modules.end() && result == cSuccess) {
    (*p)->initialize(vm, pos, result);
    ++p;
  }
}

void refalrts::Domain::ModuleStorage::unload_module(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::Module *module,
  refalrts::FnResult& result
) {
  assert(m_domain == module->domain());
  module->del_ref();
  gc(vm, pos, result);
}

void refalrts::Domain::ModuleStorage::make_dump(refalrts::VM *vm) {
  FILE *dump_stream = vm->dump_stream();

  int count = 0;
  for (
    ModuleList::const_iterator p = m_modules.begin(); p != m_modules.end(); ++p
  ) {
    fprintf(dump_stream, "%4d. %s\n", ++count, (*p)->name().c_str());
    (*p)->make_dump(vm);
  }
}

void refalrts::Domain::ModuleStorage::gc(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::FnResult& result
) {
  // Сборщик мусора Бейкера,
  // Ахо, Лам, Сети, Ульман, «Книга дракона», 2-е изд., 2008
  // Страница 582, раздел 7.6.3
  // Множества Free и Scanned оказались не нужны

  std::set<Module*> unscanned, unreached;

  for (ModuleList::iterator p = m_modules.begin(); p != m_modules.end(); ++p) {
    if ((*p)->refcounter() > 0) {
      unscanned.insert(*p);
    } else {
      unreached.insert(*p);
    }
  }

  while (! unscanned.empty()) {
    Module *next = *unscanned.begin();
    unscanned.erase(next);

    for (
      Module::ReferenceMap::iterator p = next->references().begin();
      p != next->references().end();
      ++p
    ) {
      // Open Watcom не знает метода множества std::set<>::count
      if (unreached.find(p->second) != unreached.end()) {
        unreached.erase(p->second);
        unscanned.insert(p->second);
      }
    }
  }

  result = cSuccess;
  for (
    ModuleList::reverse_iterator p = m_modules.rbegin();
    p != m_modules.rend();
    ++p
  ) {
    // Open Watcom не знает метода множества std::set<>::count
    if (unreached.find(*p) != unreached.end()) {
      (*p)->finalize(vm, pos, result);
    }
  }

  for (ModuleList::iterator p = m_modules.begin(); p != m_modules.end(); ++p) {
    // Open Watcom не знает метода множества std::set<>::count
    if (unreached.find(*p) != unreached.end()) {
      (*p)->deactivate();
      delete (*p);
      (*p) = 0;
    }
  }

  ModuleList::iterator end =
    std::remove(m_modules.begin(), m_modules.end(), static_cast<Module*>(0));
  m_modules.erase(end, m_modules.end());
}

refalrts::Domain::Domain(
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  refalrts::DiagnosticConfig *diagnostic_config
#else
  refalrts::DiagnosticConfig * /*diagnostic_config*/
#endif /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */
)
  : m_idents_table()
  , m_storage(this)
  , m_dangerous(false)
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  , m_diagnostic_config(diagnostic_config)
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */
  , m_allocated_functions()
  , m_chunks(0)
  , m_memory_use(0)
  , m_global_free_begin(0, &m_global_free_end)
  , m_global_free_end(&m_global_free_begin, 0)
  , m_swap_begin(0, &m_swap_end)
  , m_swap_end(&m_swap_begin, 0)
{
  /* пусто */
}

bool refalrts::Domain::load_native_module(
  refalrts::VM *vm, refalrts::NativeModule *main_module,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  assert(this == vm->domain());
  DangerousRAII dang(&m_dangerous);

  char module_name[api::cModuleNameBufferLen];
  if (! api::get_main_module_name(module_name)) {
    ModuleLoadingErrorDetail detail;
    event(cModuleLoadingError_CantObtainModuleName, &detail, callback_data);

    return false;
  }

  ModuleStorage new_storage(this);
  Module *new_module = new_storage.load_module(
    module_name, 0, event, callback_data, main_module
  );

  return initialize(
    vm, 0, new_module, new_storage, event, callback_data, result
  );
}

refalrts::Module *
refalrts::Domain::load_module(
  refalrts::VM *vm, refalrts::Iter pos, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  assert(event);
  assert(this == vm->domain());

  DangerousRAII dang(&m_dangerous);

  ModuleStorage new_storage(this);
  Module *new_module = new_storage.load_module(name, 0, event, callback_data);

  if (
    initialize(vm, pos, new_module, new_storage, event, callback_data, result)
  ) {
    return new_module;
  } else {
    return 0;
  }
}

bool refalrts::Domain::alloc_nodes(refalrts::Iter& begin, refalrts::Iter& end) {
  if (m_global_free_begin.next != &m_global_free_end) {
    begin = m_global_free_begin.next;
    end = begin;

    size_t portion = 1;
    while (portion < Chunk::cSize && end->next != &m_global_free_end) {
      ++portion;
      end = end->next;
    }

    weld(&m_global_free_begin, end->next);
    return true;
  }

#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  if (
    m_diagnostic_config->memory_limit
    && m_memory_use + Chunk::cSize >= m_diagnostic_config->memory_limit
  ) {
    return false;
  }
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */

  Chunk *new_chunk = new (std::nothrow) Chunk(m_chunks);
  if (! new_chunk) {
    return false;
  }

  m_memory_use += Chunk::cSize;

  m_chunks = new_chunk;
  new_chunk->elems[0].tag = cDataIllegal;
  for (size_t i = 1; i < Chunk::cSize; ++i) {
    new_chunk->elems[i].tag = cDataIllegal;
    new_chunk->elems[i].prev = &new_chunk->elems[i - 1];
    new_chunk->elems[i - 1].next = &new_chunk->elems[i];
  }

  begin = &new_chunk->elems[0];
  end = &new_chunk->elems[Chunk::cSize - 1];

  return true;
}

void refalrts::Domain::free_nodes(refalrts::Iter begin, refalrts::Iter end) {
  assert(begin != 0);
  assert(end != 0);
  assert(begin->prev != end);
  assert(begin != end->next);

  end->next = 0;
  for (Iter p = begin; p != 0; p = p->next) {
    if (cDataClosure == p->tag) {
      refalrts::Iter head = p->link_info;
      -- head->number_info;

      if (0 == head->number_info) {
        unwrap_closure(p);
        // теперь перед p находится «развёрнутое» замыкание
        p->tag = cDataIllegal;
        p = head;
      }
    }
    p->tag = cDataIllegal;
    p->file_info = 0;
  }

  weld(end, m_global_free_begin.next);
  weld(&m_global_free_begin, begin);
}

void refalrts::Domain::swap_save(refalrts::Iter begin, refalrts::Iter end) {
  list_splice(m_swap_begin.next, begin, end);
}

void refalrts::Domain::make_dump(refalrts::VM *vm) {
  FILE *dump_stream = vm->dump_stream();
  fprintf(dump_stream, "\nDOMAIN CONTENT:\n");

  fprintf(dump_stream, "\nSWAPS:\n");
  vm->print_seq(dump_stream, &m_swap_begin, &m_swap_end);

  fprintf(dump_stream, "\nIDENTIFIERS:\n");
  int count = 0;
  for (
    IdentsMap::const_iterator p = m_idents_table.begin();
    p != m_idents_table.end();
    ++p
  ) {
    fprintf(dump_stream, "%4d. %s\n", ++count, p->second->name());
  }

  fprintf(dump_stream, "\nMODULES:\n");
  m_storage.make_dump(vm);
}

bool refalrts::Domain::initialize(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::Module *new_module,
  refalrts::Domain::ModuleStorage& new_storage,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  result = cSuccess;
  if (new_module) {
    new_module->add_ref();
  } else {
    new_storage.unload(vm, 0, result);
    return false;
  }

  if (! new_storage.find_unresolved_externals(event, callback_data)) {
    new_storage.unload(vm, 0, result);
    return false;
  }

  m_storage.splice_and_init(vm, pos, new_storage, result);
  if (result == cSuccess) {
    return true;
  }

  FnResult unload_result;
  new_storage.unload(vm, 0, unload_result);
  if (unload_result != cSuccess) {
    result = unload_result;
  }

  return false;
}

void refalrts::Domain::unload_module(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::Module *module,
  refalrts::FnResult& result
) {
  assert(this == vm->domain());
  assert(this == module->domain());

  DangerousRAII dang(&m_dangerous);

  m_storage.unload_module(vm, pos, module, result);
}

void refalrts::Domain::unload(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::FnResult& result
) {
  assert(this == vm->domain());

  DangerousRAII dang(&m_dangerous);
  m_storage.unload(vm, pos, result);
}

void refalrts::Domain::free_domain_memory() {
  free_idents_table();

  for (size_t i = 0; i < m_allocated_functions.size(); ++i) {
    delete m_allocated_functions[i];
  }

  free_nodes();
}

//------------------------------------------------------------------------------
// Идентификаторы
//------------------------------------------------------------------------------

refalrts::RefalIdentDescr::RefalIdentDescr(const char *name)
  : m_name(0)
{
  size_t length = strlen(name);
  m_name = static_cast<char*>(memcpy(new char[length + 1], name, length + 1));
}

refalrts::RefalIdentDescr::~RefalIdentDescr() {
  delete[] m_name;
}

refalrts::RefalIdentifier refalrts::RefalIdentDescr::implode(
  refalrts::Domain *domain, const char *name
) {
  if (! name) {
    name = "";
  }

  RefalIdentifier res = domain->lookup_ident(name);
  if (! res) {
    try {
      res = new RefalIdentDescr(name);
      bool allocated = domain->register_ident(res);

      if (! allocated) {
        delete res;
        res = 0;
      }
    } catch (std::bad_alloc&) {
      if (res) {
        delete res;
        res = 0;
      }
    }
  }
  return res;
}

size_t refalrts::Domain::idents_count() {
  return m_idents_table.size();
}

void refalrts::Domain::free_idents_table() {
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  if (m_diagnostic_config->print_statistics) {
    fprintf(
      stderr, "Identifiers allocated: %lu\n",
      static_cast<unsigned long>(idents_count())
    );
  }
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */

  while (m_idents_table.size() > 0) {
    IdentsMap::iterator p = m_idents_table.begin();
    RefalIdentifier ident = p->second;
    m_idents_table.erase(p);
    delete ident;
  }
}

refalrts::RefalIdentifier
refalrts::Domain::lookup_ident(const char *name) {
  IdentsMap::iterator p = m_idents_table.find(StringRef(name));

  if (p != m_idents_table.end()) {
    return p->second;
  } else {
    return 0;
  }
}

bool refalrts::Domain::register_ident(RefalIdentifier ident) {
  try {
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
    if (
      m_diagnostic_config->idents_limit
      && idents_count() >= m_diagnostic_config->idents_limit
    ) {
      return false;
    }
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */

    IdentsMap::value_type new_value(StringRef(ident->name()), ident);
    std::pair<IdentsMap::iterator, bool> res = m_idents_table.insert(new_value);
    assert(res.second);
    return res.second;
  } catch (std::bad_alloc&) {
    return false;
  }
}

void refalrts::Domain::read_counters(double counters[]) {
  counters[cPerformanceCounter_HeapSize] = memory_use() * double(sizeof(Node));
  counters[cPerformanceCounter_IdentsAllocated] = double(idents_count());
}

const refalrts::api::stat *
refalrts::Domain::lookup_module_with_extensions(std::string *real_name) {
  const char *suffixes[] = {
    "", ".rasl-module", api::default_lib_extension, 0
  };

  const api::stat *result = 0;
  std::string new_name;
  for (const char **ext = suffixes; *ext != 0 && result == 0; ++ext) {
    new_name = *real_name + *ext;
    result = api::stat_create(new_name.c_str());
  }

  if (result) {
    *real_name = new_name;
  }

  return result;
}

const refalrts::api::stat *
refalrts::Domain::lookup_module_by_name(
  const std::string& name, std::string& real_name
) {
  if (! api::is_single_file_name(name.c_str())) {
    real_name = name;
    return lookup_module_with_extensions(&real_name);
  }

  std::list<std::string> directories;

  char exe_file_directory[api::cModuleNameBufferLen];
  bool main_module_succeeded = api::get_main_module_name(exe_file_directory);

  if (main_module_succeeded) {
    // Да, тут квадратичная сложность, но здесь это не критично
    size_t len = strlen(exe_file_directory);
    while (
      len > 0 && ! api::is_directory_ended_to_separator(exe_file_directory)
    ) {
      exe_file_directory[--len] = '\0';
    }

    directories.push_back(exe_file_directory);
  }

  std::string path = not_null(getenv("RL_MODULE_PATH"));
  if (! path.empty()) {
    size_t sep;
    do {
      sep = path.find(api::path_env_separator);
      std::string next_dir = path.substr(0, sep);
      if (sep != std::string::npos) {
        path = path.substr(sep+1);
      }
      if (! next_dir.empty()) {
        if (! api::is_directory_ended_to_separator(next_dir.c_str())) {
          next_dir += api::directory_separators[0];
        }
        directories.push_back(next_dir);
      }
    } while (sep != std::string::npos);
  }

  const api::stat *result = 0;
  for (
    std::list<std::string>::iterator p = directories.begin();
    p != directories.end() && result == 0;
    ++p
  ) {
    real_name = *p + name;
    result = lookup_module_with_extensions(&real_name);
  }

  return result;
}

void refalrts::Domain::free_nodes() {
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  if (m_diagnostic_config->print_statistics) {
    fprintf(
      stderr,
      "Memory used %lu nodes, %lu * %lu = %lu bytes\n",
      static_cast<unsigned long>(m_memory_use),
      static_cast<unsigned long>(m_memory_use),
      static_cast<unsigned long>(sizeof(Node)),
      static_cast<unsigned long>(m_memory_use * sizeof(Node))
    );
  }
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */

  while (m_chunks != 0) {
    Chunk *next = m_chunks->next;
    delete m_chunks;
    m_chunks = next;
  }
}
