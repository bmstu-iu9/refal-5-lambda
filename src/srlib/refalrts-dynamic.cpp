#include <algorithm>
#include <assert.h>
#include <errno.h>
#include <new>
#include <utility>

#include "refalrts-dynamic.h"
#include "refalrts-commands.h"

//FROM refalrts-functions
#include "refalrts-functions.h"
//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"


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
  , m_native_identifiers()
  , m_native_externals()
  , m_native(native)
  , m_global_variables()
  , m_domain(domain)
  , m_unresolved_native_functions()
  , m_references()
  , m_name(module_name)
  , m_stat(stat)
  , m_indirect_references()
{
  assert(event);

  ModuleLoadingErrorDetail detail;
  success = false;
  try {
    Loader loader(this, module_name.c_str());
    loader.enumerate_blocks();
    if (m_native) {
      load_native_identifiers();
      alloc_global_variables();
      success = resolve_native_functions(event, callback_data);
    } else {
      success = true;
    }
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
  while (m_funcs_table.size() > 0) {
    FuncsMap::iterator p = m_funcs_table.begin();
    RefalFunction *function = p->second;
    m_funcs_table.erase(p);
    delete function;
  }
}


//------------------------------------------------------------------------------
// Идентификаторы
//------------------------------------------------------------------------------

void refalrts::Module::load_native_identifiers() {
  m_native_identifiers.resize(m_native->next_ident_id);

  for (IdentReference *p = m_native->list_idents; p != 0; p = p->next) {
    assert(p->id < m_native->next_ident_id);
    RefalIdentifier ident = ident_implode(m_domain, p->name);
    if (! ident) {
      throw AllocIdentifierError();
    }
    m_native_identifiers[p->id] = ident;
  }
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
    // Если сначала удалить func, то не удастся из него извлечь имя
    RedeclarationError error(func->name);
    delete func;
    throw error;
  }
}

bool refalrts::Module::find_unresolved_externals(
  refalrts::LoadModuleEvent event, void *callback_data
) {
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

  return find_unresolved_externals_rasl(event, callback_data)
    && (! m_native || find_unresolved_externals_native(event, callback_data));
}

bool refalrts::Module::find_unresolved_externals_rasl(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;

  while (! m_unresolved_func_tables.empty()) {
    ConstTable *table = m_unresolved_func_tables.front();
    std::vector<FunctionTableItem>& items = table->externals;
    for (size_t i = 0; i < items.size(); ++i) {
      const char *str_name = items[i].func_name;
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
          std::string("Bad external functin name '")
          + str_name + "', name must start from '*' or '#'"
        );
      }

      RefalFuncName name(str_name + 1, cookie1, cookie2);
      RefalFunction *function = lookup_function(name);
      items[i].function = function;
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

bool refalrts::Module::find_unresolved_externals_native(
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;

  m_native_externals.resize(m_native->next_external_id);
  for (
    const ExternalReference *er = m_native->list_externals;
    er != 0;
    er = er->next
  ) {
    RefalFuncName name(er->name, er->cookie1, er->cookie2);
    RefalFunction *function = lookup_function(name);
    assert(er->id < m_native->next_external_id);
    m_native_externals[er->id] = function;
    if (! function) {
      ModuleLoadingErrorDetail detail;
      detail.func_name = name;
      event(cModuleLoadingError_UnresolvedExternal, &detail, callback_data);
      success = false;
    }
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
  const char *proper_name = name.data() + 1;

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

  new_table->externals.resize(fixed_part.external_count);
  new_table->external_memory.resize(fixed_part.external_size);
  read = fread(&new_table->external_memory[0], 1, fixed_part.external_size);
  PARSE_ASSERT(
    read == fixed_part.external_size,
    "can't read externals list in CONST_TABLE"
  );
  const char *next_external_name = &new_table->external_memory[0];
  for (size_t i = 0; i < fixed_part.external_count; ++i) {
    new_table->externals[i].func_name = next_external_name;
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

  bool successed = seek_rasl_signature();
  if (! successed) {
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
            new RASLFunction(
              table->make_name(name),
              &table->rasl[offset],
              &table->externals[0],
              &table->idents[0],
              &table->numbers[0],
              &table->strings[0],
              "filename.sref"
            )
          );
        }
        break;

      case cBlockTypeNativeFunction:
        {
          PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
          RefalNativeFunction *func =
            new RefalNativeFunction(0, table->make_name(read_asciiz()));
          register_(func);
          m_module->m_unresolved_native_functions.push_back(func);
        }
        break;

      case cBlockTypeEmptyFunction:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(new RefalEmptyFunction(table->make_name(read_asciiz())));
        break;

      case cBlockTypeSwap:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(new RefalSwap(table->make_name(read_asciiz())));
        break;

      case cBlockTypeReference:
        m_module->m_references.insert(ReferenceMap::value_type(read_asciiz(), 0));
        break;

      case cBlockTypeConditionRasl:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(new RefalCondFunctionRasl(table->make_name(read_asciiz())));
        break;

      case cBlockTypeConditionNative:
        PARSE_ASSERT(table != 0, "CONST_TABLE must precede any function");
        register_(new RefalCondFunctionNative(table->make_name(read_asciiz())));
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }
}


//==============================================================================
// Домен
//==============================================================================

refalrts::Module *
refalrts::Domain::Stack::contain(const refalrts::api::stat *stat) const {
  const Stack *node = this;
  while (node != 0 && api::stat_compare(node->stat, stat) != 0) {
    node = node->next;
  }

  return node != 0 ? node->module : 0;
}

refalrts::Domain::ModuleStorage::ModuleStorage(refalrts::Domain *domain)
  : m_domain(domain)
  , m_modules()
{
  /* пусто */
}

refalrts::Domain::ModuleStorage::~ModuleStorage() {
  unload();
}

refalrts::Module *
refalrts::Domain::ModuleStorage::operator[](
  const refalrts::api::stat *stat
) const {
  ModuleList::const_iterator p = m_modules.begin();
  while (p != m_modules.end() && api::stat_compare((*p)->stat(), stat) != 0) {
    ++p;
  }

  if (p != m_modules.end()) {
    return *p;
  } else {
    return 0;
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

bool refalrts::Domain::ModuleStorage::load_references(
  refalrts::Domain::Stack *stack,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  bool success = true;
  Module *current = stack->module;

  for (
    Module::ReferenceMap::iterator p = current->references().begin();
    p != current->references().end();
    ++p
  ) {
    std::string real_name_ref;
    const api::stat *ref_stat =
      m_domain->lookup_module_by_name(p->first, real_name_ref);
    if (! ref_stat) {
      ModuleLoadingErrorDetail detail;
      detail.message = p->first.c_str();
      event(cModuleLoadingError_ModuleNotFound, &detail, callback_data);
      success = false;
      continue;
    }

    Module *ref_module = find_known(*stack, ref_stat);
    if (ref_module != 0) {
      api::stat_destroy(ref_stat);
    } else {
      bool load_success = true;
      ref_module = new Module(
        m_domain, real_name_ref, ref_stat, load_success, event, callback_data
      );
      success = success && load_success;
      Stack new_stack(ref_stat, ref_module, stack);
      bool ref_success = load_references(&new_stack, event, callback_data);
      success = success && ref_success;
    }
    p->second = ref_module;
  }

  m_modules.push_back(current);
  return success;
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

void refalrts::Domain::ModuleStorage::unload() {
  while (! m_modules.empty()) {
    delete m_modules.front();
    m_modules.pop_front();
  }
}

void refalrts::Domain::ModuleStorage::splice(
  refalrts::Domain::ModuleStorage& other
) {
  m_modules.splice(
    m_modules.end(),
    other.m_modules, other.m_modules.begin(), other.m_modules.end()
  );
}

void refalrts::Domain::ModuleStorage::unload_module(refalrts::Module *module) {
  assert(m_domain == module->domain());

  ModuleList::iterator list_pos =
    std::find(m_modules.begin(), m_modules.end(), module);
  assert(list_pos != m_modules.end());
  m_modules.erase(list_pos);

  delete module;
}

refalrts::Module *
refalrts::Domain::ModuleStorage::find_known(
  const refalrts::Domain::Stack& stack, const refalrts::api::stat *stat
) const {
  Module *result;
  return
    (result = m_domain->m_storage[stat]) != 0 ? result :
    (result = (*this)[stat]) != 0 ? result :
    (result = stack.contain(stat)) != 0 ? result :
    0;
}

refalrts::Domain::Domain()
  : m_idents_table()
  , m_at_exit_list(0)
  , m_storage(this)
{
  /* пусто */
}

bool refalrts::Domain::load_native_module(
  refalrts::NativeModule *main_module,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  char module_name[api::cModuleNameBufferLen];
  bool success = api::get_main_module_name(module_name);
  if (! success) {
    ModuleLoadingErrorDetail detail;
    event(cModuleLoadingError_CantObtainModuleName, &detail, callback_data);

    return false;
  }

  const refalrts::api::stat *module_stat = api::stat_create(module_name);

  if (! module_stat) {
    ModuleLoadingErrorDetail detail;
    detail.message = module_name;
    event(cModuleLoadingError_ModuleNotFound, &detail, callback_data);
    return false;
  }

  Module *new_module = new Module(
    this, module_name, module_stat, success, event, callback_data, main_module
  );

  Stack stack(module_stat, new_module, 0);
  ModuleStorage new_storage(this);
  bool success_references = new_storage.load_references(
    &stack, event, callback_data
  );
  success = success && success_references;

  if (success) {
    success = new_storage.find_unresolved_externals(event, callback_data);
    if (success) {
      m_storage.splice(new_storage);
    }
  }

  return success;
}

refalrts::Module *
refalrts::Domain::load_module(
  refalrts::VM * /*vm*/, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  assert(event);
  // assert(this == vm->domain());

  std::string real_name;
  const refalrts::api::stat *module_stat = lookup_module_by_name(name, real_name);

  if (! module_stat) {
    ModuleLoadingErrorDetail detail;
    detail.message = name;
    event(cModuleLoadingError_ModuleNotFound, &detail, callback_data);
    return 0;
  }

  Module *new_module = m_storage[module_stat];
  if (new_module) {
    // TODO: счётчик ссылок
    return new_module;
  }

  bool success;
  new_module = new Module(
    this, real_name, module_stat, success, event, callback_data
  );

  Stack stack(module_stat, new_module, 0);
  ModuleStorage new_storage(this);
  bool success_references = new_storage.load_references(
    &stack, event, callback_data
  );
  success = success && success_references;

  if (success) {
    success = new_storage.find_unresolved_externals(event, callback_data);
    if (success) {
      m_storage.splice(new_storage);
    }
  } else {
    new_module = 0;
  }

  return new_module;
}

void refalrts::Domain::unload_module(
  refalrts::VM * /*vm*/, refalrts::Module *module
) {
  //assert(this == vm->domain());
  m_storage.unload_module(module);
}

void refalrts::Domain::unload() {
  free_idents_table();
  m_storage.unload();
}

//------------------------------------------------------------------------------
// Идентификаторы
//------------------------------------------------------------------------------

size_t refalrts::Domain::idents_count() {
  return m_idents_table.size();
}

void refalrts::Domain::free_idents_table() {
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr, "Identifiers allocated: %lu\n",
    static_cast<unsigned long>(idents_count())
  );
#endif // ifndef DONT_PRINT_STATISTICS

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
#ifdef IDENTS_LIMIT
    if (idents_count() >= IDENTS_LIMIT) {
      return false;
    }
#endif // ifdef IDENTS_LIMIT

    IdentsMap::value_type new_value(StringRef(ident->name()), ident);
    std::pair<IdentsMap::iterator, bool> res = m_idents_table.insert(new_value);
    assert(res.second);
    return res.second;
  } catch (std::bad_alloc&) {
    return false;
  }
}

void refalrts::Domain::read_counters(unsigned long counters[]) {
  counters[cPerformanceCounter_IdentsAllocated] =
    static_cast<unsigned long>(idents_count());
}

void refalrts::Domain::at_exit(refalrts::AtExitCB callback, void *data) {
  AtExitListNode *p = m_at_exit_list;
  while (p != 0 && (p->callback != callback || p->data != data)) {
    p = p->next;
  }

  if (p == 0) {
    new AtExitListNode(callback, data, this);
  }
}

void refalrts::Domain::perform_at_exit() {
  while (m_at_exit_list != 0) {
    AtExitListNode *current = m_at_exit_list;
    m_at_exit_list = m_at_exit_list->next;
    current->call(this);
    delete current;
  }
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
  bool main_module_successed = api::get_main_module_name(exe_file_directory);

  if (main_module_successed) {
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
        path = path.substr(sep);
      }
      if (! next_dir.empty()) {
        if (! api::is_directory_ended_to_separator(next_dir.c_str())) {
          next_dir += *api::directory_separators;
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
