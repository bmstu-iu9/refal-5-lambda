#include <new>

#include <assert.h>
#include <string.h>
#include <utility>

#include "refalrts-dynamic.h"

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"


//==============================================================================
// Динамическое связывание
//==============================================================================

refalrts::Domain::Domain(NativeModule *main_module)
  : m_unresolved_func_tables(0)
  , m_funcs_table()
  , m_tables(0)
  , m_idents_table()
  , m_native_identifiers(0)
  , m_native_externals(0)
  , m_main_module(main_module)
  , m_at_exit_list(0)
  , m_global_variables(0)
{
  /* пусто */
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

  free(m_native_identifiers);
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

void refalrts::Domain::load_native_identifiers() {
  m_native_identifiers = malloc<RefalIdentifier>(m_main_module->next_ident_id);

  for (IdentReference *p = m_main_module->list_idents; p != 0; p = p->next) {
    assert(p->id < m_main_module->next_ident_id);
    RefalIdentifier ident = ident_implode(this, p->name);
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
refalrts::Domain::lookup_function(const refalrts::RefalFuncName& name) {
  FuncsMap::iterator p = m_funcs_table.find(name);

  if (p != m_funcs_table.end()) {
    return p->second;
  } else {
    return 0;
  }
}

bool refalrts::Domain::register_function(refalrts::RefalFunction *func) {
  FuncsMap::value_type new_value(func->name, func);
  std::pair<FuncsMap::iterator, bool> res = m_funcs_table.insert(new_value);
  return res.second;
}

unsigned refalrts::Domain::find_unresolved_externals() {
  unsigned unresolved = 0;

  while (m_unresolved_func_tables != 0) {
    FunctionTable *table = m_unresolved_func_tables;
    FunctionTableItem *items = table->items;
    for (size_t i = 0; items[i].func_name != 0; ++i) {
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

    m_unresolved_func_tables = m_unresolved_func_tables->next;
  }

  m_native_externals = malloc<RefalFunction*>(m_main_module->next_external_id);
  for (
    const ExternalReference *er = m_main_module->list_externals;
    er != 0;
    er = er->next
  ) {
    RefalFuncName name(er->name, er->cookie1, er->cookie2);
    RefalFunction *function = lookup_function(name);
    if (function) {
      assert(er->id < m_main_module->next_external_id);
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

void refalrts::Domain::free_funcs_table() {
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

bool refalrts::Domain::seek_rasl_signature(FILE *stream) {
  int seek_res = fseek(stream, 0L, SEEK_END);
  if (seek_res != 0) {
    fprintf(stderr, "INTERNAL ERROR: can't seek in module\n");
    exit(155);
  }

  long int file_size = ftell(stream);
  if (file_size == -1L) {
    fprintf(
      stderr, "INTERNAL ERROR: filesize obtaining error %s\n",
      strerror(errno)
    );
    exit(155);
  }

  long int next_offset = 0L;
  bool found = false;
  while (next_offset < file_size && ! found) {
    seek_res = fseek(stream, next_offset, SEEK_SET);
    if (seek_res != 0) {
      fprintf(stderr, "INTERNAL ERROR: can't seek in module\n");
      exit(155);
    }

    static char sample_sig[] = {
      '\x00', '\x08', '\0', '\0', '\0', 'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
    };
    sample_sig[0] = cBlockTypeStart;
    char actual_sig[sizeof(sample_sig)];
    size_t read = fread(actual_sig, sizeof(actual_sig), 1, stream);
    if (read != 1) {
      fprintf(stderr, "INTERNAL ERROR: can't read bytes from module\n");
      exit(155);
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

const char *refalrts::Domain::read_asciiz(FILE *stream) {
  enum { cINC_SIZE = 20 };

  size_t buflen = cINC_SIZE;
  char *buffer = static_cast<char *>(::malloc(buflen));
  assert(buffer);

  size_t buffoffset = 0;

  size_t read;
  do {
    read = fread(&buffer[buffoffset], 1, 1, stream);
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
refalrts::Domain::ConstTable::make_name(const char *name) const {
  char type = name[0];
  const char *proper_name = name + 1;

  assert(type == '*' || type == '#');
  if (type == '#') {
    return RefalFuncName(proper_name, cookie1, cookie2);
  } else {
    return RefalFuncName(proper_name, 0, 0);
  }
}

void refalrts::Domain::enumerate_blocks() {
  char module_name[api::cModuleNameBufferLen];

  bool successed = api::get_main_module_name(module_name);
  if (! successed) {
    fprintf(stderr, "INTERNAL ERROR: can't obtain name of main executable\n");
    exit(155);
  }

  ConstTable *table = 0;

  FILE *stream = fopen(module_name, "rb");
  if (! stream) {
    fprintf(stderr, "INTERNAL ERROR: can't open main executable for read\n");
    exit(155);
  }

  successed = seek_rasl_signature(stream);
  if (! successed) {
    fprintf(stderr, "INTERNAL ERROR: can't find signature in executable\n");
    exit(155);
  }

  unsigned char type;
  while (fread(&type, sizeof(type), 1, stream) == 1) {
    UInt32 datalen;

    size_t read = fread(&datalen, sizeof(datalen), 1, stream);
    assert(read == 1);      // TODO: сообщение об ошибке

    switch (type) {
      case cBlockTypeStart:
        {
          static const char sample[8] = {
            'R', 'A', 'S', 'L', 'C', 'O', 'D', 'E'
          };
          assert(sizeof(sample) == datalen);

          char signature[sizeof(sample)];
          read = fread(signature, 1, sizeof(signature), stream);
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

          read = fread(&fixed_part, sizeof(fixed_part), 1, stream);
          assert(read == 1);

          ConstTable *new_table = malloc<ConstTable>();
          assert(new_table);

          new_table->cookie1 = fixed_part.cookie1;
          new_table->cookie2 = fixed_part.cookie2;

          new_table->externals =
            malloc<FunctionTableItem>(fixed_part.external_count + 1);
          new_table->external_memory = malloc<char>(fixed_part.external_size);
          read = fread(
            new_table->external_memory, 1, fixed_part.external_size, stream
          );
          assert(read == fixed_part.external_size);
          const char *next_external_name = new_table->external_memory;
          for (size_t i = 0; i < fixed_part.external_count; ++i) {
            new_table->externals[i].func_name = next_external_name;
            // TODO: нужна проверка за выход из границ
            next_external_name += strlen(next_external_name) + 1;
          }
          new_table->externals[fixed_part.external_count] =
            static_cast<const char *>(0);
          new_table->function_table = new FunctionTable(
            this, fixed_part.cookie1, fixed_part.cookie2, new_table->externals
          );

          new_table->idents = malloc<RefalIdentifier>(fixed_part.ident_count);
          new_table->idents_memory = malloc<char>(fixed_part.ident_size);
          read = fread(
            new_table->idents_memory, 1, fixed_part.ident_size, stream
          );
          assert(read == fixed_part.ident_size);
          const char *next_ident_name = new_table->idents_memory;
          for (size_t i = 0; i < fixed_part.ident_count; ++i) {
            RefalIdentifier ident = ident_implode(this, next_ident_name);
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

          new_table->numbers = malloc<RefalNumber>(fixed_part.number_count);
          read = fread(
            new_table->numbers, sizeof(RefalNumber), fixed_part.number_count,
            stream
          );
          assert(read == fixed_part.number_count);

          new_table->strings = malloc<StringItem>(fixed_part.string_count);
          new_table->strings_memory = malloc<char>(fixed_part.string_size);
          char *string_target = new_table->strings_memory;
          for (size_t i = 0; i < fixed_part.string_count; ++i) {
            UInt32 length;
            read = fread(&length, sizeof(length), 1, stream);
            assert(read == 1);
            read = fread(string_target, 1, length, stream);
            assert(read == length);
            new_table->strings[i].string = string_target;
            new_table->strings[i].string_len = length;
            string_target += length;
          }

          new_table->rasl = malloc<RASLCommand>(fixed_part.rasl_length);
          read = fread(
            new_table->rasl, sizeof(RASLCommand), fixed_part.rasl_length,
            stream
          );
          assert(read == fixed_part.rasl_length);

          new_table->next = m_tables;
          m_tables = new_table;

          table = new_table;
        }
        break;

      case cBlockTypeRefalFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          UInt32 offset;
          read = fread(&offset, sizeof(offset), 1, stream);
          assert(read == 1);

          RASLFunction *result = Domain::malloc<RASLFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RASLFunction(
            table->make_name(name),
            table->rasl + offset,
            table->function_table,
            table->idents,
            table->numbers,
            table->strings,
            "filename.sref",
            this
          );
        }
        break;

      case cBlockTypeNativeFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          char type = name[0];
          assert(type == '*' || type == '#');

          const char *proper_name = name + 1;

          NativeReference *ref = NativeReference::s_references;
          while (
            ref != 0
            && ! (
              type == '*'
              ? (
                ref->cookie1 == 0
                && ref->cookie2 == 0
                && strcmp(ref->name, proper_name) == 0
              )
              : (
                ref->cookie1 == table->cookie1
                && ref->cookie2 == table->cookie2
                && strcmp(ref->name, proper_name) == 0
              )
            )
          ) {
            ref = ref->next;
          }

          // TODO: Сообщение об ошибке
          assert(ref != 0);

          RefalNativeFunction *result = Domain::malloc<RefalNativeFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalNativeFunction(
            ref->code, table->make_name(name), this
          );
        }
        break;

      case cBlockTypeEmptyFunction:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalEmptyFunction *result = Domain::malloc<RefalEmptyFunction>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalEmptyFunction(table->make_name(name), this);
        }
        break;

      case cBlockTypeSwap:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalSwap *result = Domain::malloc<RefalSwap>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalSwap(table->make_name(name), this);
        }
        break;

      case cBlockTypeReference:
        refalrts_switch_default_violation(type);

      case cBlockTypeConditionRasl:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalCondFunctionRasl *result = Domain::malloc<RefalCondFunctionRasl>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionRasl(table->make_name(name), this);
        }
        break;

      case cBlockTypeConditionNative:
        {
          const char *name = read_asciiz(stream);
          assert(name);

          RefalCondFunctionNative *result = Domain::malloc<RefalCondFunctionNative>();
          // TODO: выдача сообщения об ошибке
          assert(result != 0);
          new (result) RefalCondFunctionNative(table->make_name(name), this);
        }
        break;

      default:
        refalrts_switch_default_violation(type);
    }
  }

  fclose(stream);
}

void refalrts::Domain::cleanup_module() {
  while (m_tables != 0) {
    ConstTable *next = m_tables->next;

    free(m_tables->rasl);

    free(m_tables->strings_memory);
    free(m_tables->strings);

    free(m_tables->numbers);

    free(m_tables->idents_memory);
    free(m_tables->idents);

    delete m_tables->function_table;
    free(m_tables->external_memory);
    free(m_tables->externals);

    free(m_tables);
    m_tables = next;
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

void refalrts::Domain::alloc_global_variables() {
  m_global_variables = malloc<char>(m_main_module->global_variables_memory);
  memset(m_global_variables, '\0', m_main_module->global_variables_memory);
}

void refalrts::Domain::free_global_variables() {
  free(m_global_variables);
}
