#ifndef RefalRTS_DYNAMIC_H_
#define RefalRTS_DYNAMIC_H_

#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "refalrts.h"


//==============================================================================
// Динамическое связывание
//==============================================================================

namespace refalrts {

// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct Module {
  IdentReference *list_idents;
  unsigned int next_ident_id;
  ExternalReference *list_externals;
  unsigned int next_external_id;
  size_t global_variables_memory;
};

struct StringRef {
  explicit StringRef(const char *str = "")
    : str(str ? str : "")
  {
    /* пусто */
  }

  // Конструктор копирования создаётся компилятором
  // Оператор присваивания создаётся компилятором

  bool operator<(const StringRef& other) const {
    return strcmp(str, other.str) < 0;
  }

  const char *str;
};

inline bool operator<(const RefalFuncName& lhs, const RefalFuncName& rhs) {
  if (lhs.cookie1 < rhs.cookie1) {
    return true;
  } else if (lhs.cookie1 > rhs.cookie1) {
    return false;
  } else if (lhs.cookie2 < rhs.cookie2) {
    return true;
  } else if (lhs.cookie2 > rhs.cookie2) {
    return false;
  } else {
    return strcmp(lhs.name, rhs.name) < 0;
  }
}

class Dynamic {
  struct ConstTable {
    UInt32 cookie1;
    UInt32 cookie2;
    FunctionTableItem *externals;
    FunctionTable *function_table;
    RefalIdentifier *idents;
    RefalNumber *numbers;
    StringItem *strings;
    RASLCommand *rasl;

    char *external_memory;
    char *idents_memory;
    char *strings_memory;

    ConstTable *next;

    RefalFuncName make_name(const char *name) const;
  };

  struct AtExitListNode {
    AtExitCB callback;
    void *data;
    AtExitListNode *next;

    AtExitListNode(AtExitCB callback, void *data, Dynamic *dynamic)
      : callback(callback), data(data), next(dynamic->m_at_exit_list)
    {
      dynamic->m_at_exit_list = this;
    }

    void call(Dynamic *dynamic) {
      callback(dynamic, data);
    }
  };

  friend struct AtExitListNode;

  typedef std::map<RefalFuncName, RefalFunction*> FuncsMap;
  typedef std::map<StringRef, RefalIdentifier> IdentsMap;

  struct FunctionTable *m_unresolved_func_tables;
  FuncsMap m_funcs_table;
  struct ConstTable *m_tables;
  IdentsMap m_idents_table;
  RefalIdentifier *m_native_identifiers;
  RefalFunction **m_native_externals;
  Module *m_main_module;
  AtExitListNode *m_at_exit_list;
  char *m_global_variables;

public:
  Dynamic(Module *main_module);

  size_t idents_count();

  void free_idents_table();

  RefalIdentifier lookup_ident(const char *name);
  bool register_ident(RefalIdentifier ident);

  void load_native_identifiers();
  RefalIdentifier operator[](const IdentReference& ref) const {
    return m_native_identifiers[ref.id];
  }

  RefalFunction *lookup_function(const RefalFuncName& name);
  bool register_function(RefalFunction *func);

  unsigned find_unresolved_externals();
  void free_funcs_table();

  RefalFunction* operator[](const ExternalReference& ref) const {
    return m_native_externals[ref.id];
  }

  void register_(FunctionTable *table) {
    table->next = m_unresolved_func_tables;
    m_unresolved_func_tables = table;
  }

  template <typename T>
  static T *malloc(size_t count = 1) {
    T *result = static_cast<T*>(::malloc(sizeof(T) * count));
    assert(count == 0 || result);
    return result;
  }

  void enumerate_blocks();
  void cleanup_module();

  bool seek_rasl_signature(FILE *stream);
  const char *read_asciiz(FILE *stream);
  void read_counters(unsigned long counters[]);

  void at_exit(AtExitCB callback, void *data);
  void perform_at_exit();

  void alloc_global_variables();
  void free_global_variables();
  void *global_variable(size_t offset) {
    return &m_global_variables[offset];
  }
};

}  // namespace refalrts


#endif  // RefalRTS_DYNAMIC_H_
