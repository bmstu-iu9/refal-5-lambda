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

refalrts::Module::Module(Domain *domain, NativeModule *native)
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
{
  /* пусто */
}

refalrts::Module::~Module() {
  while (m_funcs_table.size() > 0) {
    FuncsMap::iterator p = m_funcs_table.begin();
    RefalFunction *function = p->second;
    m_funcs_table.erase(p);
    delete function;
  }
}

bool refalrts::Module::initialize(
  const char *module_name, refalrts::LoadModuleEvent event, void *callback_data
) {
  ModuleLoadingErrorDetail detail;

  try {
    Loader loader(this, module_name);
    loader.enumerate_blocks();
    if (m_native) {
      load_native_identifiers();
      alloc_global_variables();
      return resolve_native_functions(event, callback_data);
    } else {
      return true;
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

  return false;
}

refalrts::Module *
refalrts::Module::load_main_module(
  refalrts::Domain *domain, refalrts::NativeModule *native, bool& success,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  assert(event);

  Module *module = new Module(domain, native);

  char module_name[api::cModuleNameBufferLen];

  success = api::get_main_module_name(module_name);
  if (! success) {
    ModuleLoadingErrorDetail detail;
    event(cModuleLoadingError_CantObtainModuleName, &detail, callback_data);

    return module;
  }

  success = module->initialize(module_name, event, callback_data);
  if (success) {
    success = module->find_unresolved_externals(event, callback_data);
  }
  return module;
}

refalrts::Module *
refalrts::Module::load_module(
  refalrts::Domain *domain, const char *real_name, bool& success,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  assert(event);
  Module *module = new Module(domain);
  success = module->initialize(real_name, event, callback_data);
  if (success) {
    success = module->find_unresolved_externals(event, callback_data);
  }
  return module;
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
  do {
    byte = fgetc(m_stream);
    if (byte != EOF) {
      result += (char) byte;
    }
  } while (byte != EOF && byte != '\0');

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
    // TODO: нужна проверка за выход из границ
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
    // TODO: нужна проверка за выход из границ
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
          RefalNativeFunction *func =
            new RefalNativeFunction(0, table->make_name(read_asciiz()));
          register_(func);
          m_module->m_unresolved_native_functions.push_back(func);
        }
        break;

      case cBlockTypeEmptyFunction:
        register_(new RefalEmptyFunction(table->make_name(read_asciiz())));
        break;

      case cBlockTypeSwap:
        register_(new RefalSwap(table->make_name(read_asciiz())));
        break;

      case cBlockTypeReference:
        m_module->m_references.insert(ReferenceMap::value_type(read_asciiz(), 0));
        break;

      case cBlockTypeConditionRasl:
        register_(new RefalCondFunctionRasl(table->make_name(read_asciiz())));
        break;

      case cBlockTypeConditionNative:
        register_(new RefalCondFunctionNative(table->make_name(read_asciiz())));
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }
}

void refalrts::Module::alloc_global_variables() {
  m_global_variables.assign(m_native->global_variables_memory, '\0');
}


//==============================================================================
// Домен
//==============================================================================

refalrts::Domain::Domain()
  : m_idents_table()
  , m_at_exit_list(0)
  , m_modules()
  , m_module_by_stat()
{
  /* пусто */
}

bool refalrts::Domain::load_native_module(NativeModule *main_module) {
  bool success;
  Module *new_module = Module::load_main_module(
    this, main_module, success, load_native_module_report_error, 0
  );

  if (success) {
    m_modules.push_back(new_module);
    return true;
  } else {
    delete new_module;
    return false;
  }
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
    // TODO: сообщение об ошибке
    return 0;
  }

  ModuleByStatMap::iterator known = m_module_by_stat.find(module_stat);
  if (known != m_module_by_stat.end()) {
    // TODO: счётчик ссылок
    return known->second;
  }

  bool success;
  Module *new_module = Module::load_module(
    this, real_name.c_str(), success, event, callback_data
  );

  if (success) {
    m_modules.push_back(new_module);
    m_module_by_stat[module_stat] = new_module;
  } else {
    delete new_module;
    api::stat_destroy(module_stat);
    new_module = 0;
  }

  return new_module;
}

void refalrts::Domain::unload_module(
  refalrts::VM * /*vm*/, refalrts::Module *module
) {
  //assert(this == vm->domain());
  assert(this == module->domain());

  ModuleByStatMap::iterator map_pos = m_module_by_stat.begin();
  while (map_pos != m_module_by_stat.end() && map_pos->second != module) {
    ++map_pos;
  }
  assert(map_pos != m_module_by_stat.end());
  const api::stat *stat_to_destroy = map_pos->first;
  m_module_by_stat.erase(map_pos);
  api::stat_destroy(stat_to_destroy);

  std::list<Module*>::iterator list_pos =
    std::find(m_modules.begin(), m_modules.end(), module);
  assert(list_pos != m_modules.end());
  m_modules.erase(list_pos);

  delete module;
}

void refalrts::Domain::unload() {
  free_idents_table();
  while (! m_modules.empty()) {
    delete m_modules.front();
    m_modules.pop_front();
  }

  while (! m_module_by_stat.empty()) {
    const api::stat *to_destroy = m_module_by_stat.begin()->first;
    m_module_by_stat.erase(m_module_by_stat.begin());
    api::stat_destroy(to_destroy);
  }
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

refalrts::RefalFunction *
refalrts::Domain::lookup_function(const refalrts::RefalFuncName& name) {
  std::list<Module*>::iterator p = m_modules.begin();
  RefalFunction *func = 0;

  while (p != m_modules.end() && ((func = (*p)->lookup_function(name)) == 0)) {
    ++p;
  }

  return func;
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


void refalrts::Domain::load_native_module_report_error(
  refalrts::ModuleLoadingError error,
  refalrts::ModuleLoadingErrorDetail *detail,
  void * /*callback_data*/
) {
  switch (error) {
    case cModuleLoadingError_ModuleNotFound:
      /* не может произойти в load_native_module() */
      refalrts_switch_default_violation(error);

    case cModuleLoadingError_CantObtainModuleName:
      fprintf(stderr, "INTERNAL ERROR: can't obtain name of main executable\n");
      exit(155);

    case cModuleLoadingError_InvalidRasl:
      fprintf(stderr, "INTERNAL ERROR: %s\n", detail->message);
      exit(155);

    case cModuleLoadingError_CantAllocMemory:
      fprintf(
        stderr, "INTERNAL ERROR: out of memory while loading module, %s\n",
        detail->message
      );
      exit(155);

    case cModuleLoadingError_CantAllocIdent:
#ifdef IDENTS_LIMIT
      fprintf(
        stderr, "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
        static_cast<unsigned long>(IDENTS_LIMIT)
      );
#else
      fprintf(stderr, "INTERNAL ERROR: can't allocate identifier\n");
#endif
      exit(154);

    case cModuleLoadingError_UnresolvedExternal:
      fprintf(
        stderr, "INTERNAL ERROR: unresolved external: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      break;

    case cModuleLoadingError_UnresolvedNative:
      fprintf(
        stderr, "INTERNAL ERROR: unresolved native: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      break;

    case cModuleLoadingError_FunctionIsRedeclared:
      fprintf(
        stderr, "INTERNAL ERROR: function is redeclared: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      exit(156);

    default:
      refalrts_switch_default_violation(error);
  }
}
