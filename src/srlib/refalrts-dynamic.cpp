#include <new>

#include <assert.h>
#include <string.h>
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
  , m_native_identifiers(0)
  , m_native_externals(0)
  , m_native(native)
  , m_global_variables(0)
  , m_domain(domain)
{
  enumerate_blocks();
  load_native_identifiers();
  alloc_global_variables();
}

//------------------------------------------------------------------------------
// Идентификаторы
//------------------------------------------------------------------------------

void refalrts::Module::free_idents_table() {
  free(m_native_identifiers);
}

void refalrts::Module::load_native_identifiers() {
  m_native_identifiers = malloc<RefalIdentifier>(m_native->next_ident_id);

  for (IdentReference *p = m_native->list_idents; p != 0; p = p->next) {
    assert(p->id < m_native->next_ident_id);
    RefalIdentifier ident = ident_implode(m_domain, p->name);
#ifdef IDENTS_LIMIT
    if (! ident) {
      fprintf(
        stderr, "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
        static_cast<unsigned long>(IDENTS_LIMIT)
      );
      exit(154);
    }
#else
    assert(ident != 0);
#endif // ifdef IDENTS_LIMIT
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

bool refalrts::Module::register_function(refalrts::RefalFunction *func) {
  FuncsMap::value_type new_value(func->name, func);
  std::pair<FuncsMap::iterator, bool> res = m_funcs_table.insert(new_value);
  return res.second;
}

unsigned refalrts::Module::find_unresolved_externals() {
  unsigned unresolved = 0;

  while (! m_unresolved_func_tables.empty()) {
    ConstTable *table = m_unresolved_func_tables.front();
    std::vector<FunctionTableItem>& items = table->externals;
    for (size_t i = 0; i < items.size(); ++i) {
      const char *str_name = items[i].func_name;
      char ch = *str_name;
      assert(ch == '*' || ch == '#');

      UInt32 cookie1 = 0;
      UInt32 cookie2 = 0;
      if (ch == '#') {
        cookie1 = table->cookie1;
        cookie2 = table->cookie2;
      }

      RefalFuncName name(str_name + 1, cookie1, cookie2);
      RefalFunction *function = lookup_function(name);
      if (function) {
        items[i].function = function;
      } else {
        fprintf(
          stderr, "INTERNAL ERROR: unresolved external %s#%u:%u\n",
          str_name + 1, cookie1, cookie2
        );
        ++unresolved;
      }
    }

    m_unresolved_func_tables.pop_front();
  }

  m_native_externals = malloc<RefalFunction*>(m_native->next_external_id);
  for (
    const ExternalReference *er = m_native->list_externals;
    er != 0;
    er = er->next
  ) {
    RefalFuncName name(er->name, er->cookie1, er->cookie2);
    RefalFunction *function = lookup_function(name);
    if (function) {
      assert(er->id < m_native->next_external_id);
      m_native_externals[er->id] = function;
    } else {
      fprintf(
        stderr, "INTERNAL ERROR: unresolved external %s#%u:%u\n",
        er->name, er->cookie1, er->cookie2
      );
      ++unresolved;
    }
  }

  return unresolved;
}

void refalrts::Module::free_funcs_table() {
  free(m_native_externals);
  while (m_funcs_table.size() > 0) {
    FuncsMap::iterator p = m_funcs_table.begin();
    RefalFunction *function = p->second;
    m_funcs_table.erase(p);
    // Деструкторов (в т.ч. неявных в функциях нет),
    // память выделялась только malloc’ом, поэтому освобождаем free()
    free(function);
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
    throw LoadModuleError("filesize obtaining error", strerror(errno));
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

const char *refalrts::Module::Loader::read_asciiz() {
  enum { cINC_SIZE = 20 };

  size_t buflen = cINC_SIZE;
  char *buffer = static_cast<char *>(::malloc(buflen));
  assert(buffer);

  size_t buffoffset = 0;

  size_t read;
  do {
    read = fread(&buffer[buffoffset], 1, 1);
    if (read) {
      ++buffoffset;
      if (buffoffset == buflen) {
        size_t new_buflen = buflen + cINC_SIZE;
        char *new_buffer = static_cast<char*>(::realloc(buffer, new_buflen));
        assert(new_buffer);

        buflen = new_buflen;
        buffer = new_buffer;
      }
    }
  } while (read == 1 && buffer[buffoffset - 1] != '\0');

  if (read == 1) {
    return buffer;
  } else {
    free(buffer);
    return 0;
  }
}

refalrts::RefalFuncName
refalrts::Module::ConstTable::make_name(const char *name) const {
  char type = name[0];
  const char *proper_name = name + 1;

  assert(type == '*' || type == '#');
  if (type == '#') {
    return RefalFuncName(proper_name, cookie1, cookie2);
  } else {
    return RefalFuncName(proper_name, 0, 0);
  }
}

void refalrts::Module::enumerate_blocks() {
  char module_name[api::cModuleNameBufferLen];

  bool successed = api::get_main_module_name(module_name);
  if (! successed) {
    fprintf(stderr, "INTERNAL ERROR: can't obtain name of main executable\n");
    exit(155);
  }

  try {
    Loader loader(this, module_name);
    loader.enumerate_blocks();
  } catch (LoadModuleError& e) {
    fprintf(stderr, "INTERNAL ERROR: %s%s\n", e.message1, e.message2);
    exit(155);
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
    assert(read == 1);      // TODO: сообщение об ошибке

    switch (type) {
      case cBlockTypeStart:
        {
          static const char sample[8] = {
            'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
          };
          assert(sizeof(sample) == datalen);

          char signature[sizeof(sample)];
          read = fread(signature, 1, sizeof(signature));
          assert(sizeof(signature) == read);
          assert(memcmp(sample, signature, sizeof(signature)) == 0);
        }
        break;

      case cBlockTypeConstTable:
        {
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

          read = fread(&fixed_part, sizeof(fixed_part), 1);
          assert(read == 1);

          m_module->m_tables.push_back(ConstTable());
          ConstTable *new_table = &m_module->m_tables.back();

          new_table->cookie1 = fixed_part.cookie1;
          new_table->cookie2 = fixed_part.cookie2;

          new_table->externals.resize(fixed_part.external_count);
          new_table->external_memory.resize(fixed_part.external_size);
          read = fread(
            &new_table->external_memory[0], 1, fixed_part.external_size
          );
          assert(read == fixed_part.external_size);
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
          assert(read == fixed_part.ident_size);
          const char *next_ident_name = &new_table->idents_memory[0];
          for (size_t i = 0; i < fixed_part.ident_count; ++i) {
            RefalIdentifier ident = ident_implode(m_module->m_domain, next_ident_name);
#ifdef IDENTS_LIMIT
            if (! ident) {
              fprintf(
                stderr,
                "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
                static_cast<unsigned long>(IDENTS_LIMIT)
              );
              exit(154);
            }
#else
            assert(ident != 0);
#endif // ifdef IDENTS_LIMIT
            new_table->idents[i] = ident;
            // TODO: нужна проверка за выход из границ
            next_ident_name += strlen(next_ident_name) + 1;
          }

          new_table->numbers.resize(fixed_part.number_count);
          read = fread(
            &new_table->numbers[0], sizeof(RefalNumber), fixed_part.number_count
          );
          assert(read == fixed_part.number_count);

          new_table->strings.resize(fixed_part.string_count);
          new_table->strings_memory.resize(fixed_part.string_size);
          char *string_target = &new_table->strings_memory[0];
          for (size_t i = 0; i < fixed_part.string_count; ++i) {
            UInt32 length;
            read = fread(&length, sizeof(length), 1);
            assert(read == 1);
            read = fread(string_target, 1, length);
            assert(read == length);
            new_table->strings[i].string = string_target;
            new_table->strings[i].string_len = length;
            string_target += length;
          }

          new_table->rasl.resize(fixed_part.rasl_length);
          read = fread(
            &new_table->rasl[0], sizeof(RASLCommand), fixed_part.rasl_length
          );
          assert(read == fixed_part.rasl_length);

          table = new_table;
        }
        break;

      case cBlockTypeRefalFunction:
        {
          const char *name = read_asciiz();
          assert(name);

          UInt32 offset;
          read = fread(&offset, sizeof(offset), 1);
          assert(read == 1);

          RASLFunction *result = Module::malloc<RASLFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RASLFunction(
            table->make_name(name),
            &table->rasl[offset],
            &table->externals[0],
            &table->idents[0],
            &table->numbers[0],
            &table->strings[0],
            "filename.sref",
            m_module
          );
        }
        break;

      case cBlockTypeNativeFunction:
        {
          const char *name = read_asciiz();
          assert(name);

          char type = name[0];
          assert(type == '*' || type == '#');

          const char *proper_name = name + 1;

          NativeReference *ref = m_module->m_native->native_references;
          UInt32 cookie1, cookie2;
          if (type == '*') {
            cookie1 = 0;
            cookie2 = 0;
          } else {
            cookie1 = table->cookie1;
            cookie2 = table->cookie2;
          }

          while (
            ref != 0
            && (
              ref->cookie1 != cookie1
              || ref->cookie2 != cookie2
              || strcmp(ref->name, proper_name) != 0
            )
          ) {
            ref = ref->next;
          }

          // TODO: Сообщение об ошибке
          assert(ref != 0);

          RefalNativeFunction *result = Module::malloc<RefalNativeFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalNativeFunction(
            ref->code, table->make_name(name), m_module
          );
        }
        break;

      case cBlockTypeEmptyFunction:
        {
          const char *name = read_asciiz();
          assert(name);

          RefalEmptyFunction *result = Module::malloc<RefalEmptyFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalEmptyFunction(table->make_name(name), m_module);
        }
        break;

      case cBlockTypeSwap:
        {
          const char *name = read_asciiz();
          assert(name);

          RefalSwap *result = Module::malloc<RefalSwap>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalSwap(table->make_name(name), m_module);
        }
        break;

      case cBlockTypeReference:
        refalrts_switch_default_violation(type);

      case cBlockTypeConditionRasl:
        {
          const char *name = read_asciiz();
          assert(name);

          RefalCondFunctionRasl *result = Module::malloc<RefalCondFunctionRasl>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionRasl(table->make_name(name), m_module);
        }
        break;

      case cBlockTypeConditionNative:
        {
          const char *name = read_asciiz();
          assert(name);

          RefalCondFunctionNative *result = Module::malloc<RefalCondFunctionNative>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionNative(table->make_name(name), m_module);
        }
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }
}

void refalrts::Module::alloc_global_variables() {
  m_global_variables = malloc<char>(m_native->global_variables_memory);
  memset(m_global_variables, '\0', m_native->global_variables_memory);
}

void refalrts::Module::free_global_variables() {
  free(m_global_variables);
}


//==============================================================================
// Домен
//==============================================================================

refalrts::Domain::Domain()
  : m_idents_table()
  , m_at_exit_list(0)
  , m_module(0)
{
  /* пусто */
}

bool refalrts::Domain::load_native_module(NativeModule *main_module) {
  assert(m_module == 0);
  m_module = new Module(this, main_module);

  unsigned unresolved = m_module->find_unresolved_externals();

  if (unresolved > 0) {
    fprintf(stderr, "Found %u unresolved externals\n", unresolved);
    return false;
  }

  return true;
}

void refalrts::Domain::unload() {
  free_idents_table();
  m_module->cleanup();
  delete m_module;
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
    StringRef name = p->first;
    RefalIdentifier ident = p->second;
    m_idents_table.erase(p);
    delete[] name.str;
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
#ifdef IDENTS_LIMIT
  if (idents_count() >= IDENTS_LIMIT) {
    return false;
  }
#endif // ifdef IDENTS_LIMIT

  IdentsMap::value_type new_value(StringRef(ident->name()), ident);
  std::pair<IdentsMap::iterator, bool> res = m_idents_table.insert(new_value);
  assert(res.second);
  return res.second;
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
