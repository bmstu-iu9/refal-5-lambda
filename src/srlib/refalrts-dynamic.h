#ifndef RefalRTS_DYNAMIC_H_
#define RefalRTS_DYNAMIC_H_

#include <list>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

#include "refalrts.h"
#include "refalrts-functions.h"


//==============================================================================
// Динамическое связывание
//==============================================================================

namespace refalrts {

// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct NativeModule {
  IdentReference *list_idents;
  unsigned int next_ident_id;
  ExternalReference *list_externals;
  unsigned int next_external_id;
  size_t global_variables_memory;
  NativeReference *native_references;
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

class Domain;

class Module {
  struct ConstTable {
    UInt32 cookie1;
    UInt32 cookie2;
    std::vector<FunctionTableItem> externals;
    std::vector<RefalIdentifier> idents;
    std::vector<RefalNumber> numbers;
    std::vector<StringItem> strings;
    std::vector<RASLCommand> rasl;

    std::vector<char> external_memory;
    std::vector<char> idents_memory;
    std::vector<char> strings_memory;

    RefalFuncName make_name(const std::string& name) const;
  };

  struct LoadModuleError {
    std::string message;

    LoadModuleError(const std::string& message)
      : message(message)
    {
      /* пусто */
    }
  };

  struct AllocIdentifierError { };

  class Loader {
    Module *m_module;
    FILE *m_stream;

  public:
    Loader(Module *module, const char *name);
    ~Loader();

    void enumerate_blocks();

  private:
    size_t fread(void *ptr, size_t size, size_t count) {
      return ::fread(ptr, size, count, m_stream);
    }

    bool seek_rasl_signature();
    std::string read_asciiz();
    void read_start_block(size_t datalen);
    ConstTable *read_const_table();
    void read_refal_function(ConstTable *table);
  };

  friend class Loader;

  typedef std::map<RefalFuncName, RefalFunction*> FuncsMap;
  typedef std::list<RefalFuncName> NameList;
  typedef std::list<RefalNativeFunction*> NativeList;

  std::list<ConstTable*> m_unresolved_func_tables;
  FuncsMap m_funcs_table;
  std::list<ConstTable> m_tables;
  std::vector<RefalIdentifier> m_native_identifiers;
  std::vector<RefalFunction*> m_native_externals;
  NativeModule *m_native;
  std::vector<char> m_global_variables;
  Domain *m_domain;
  NativeList m_unresolved_native_functions;

  // Информация об ошибках
  std::string m_error_message;
  NameList m_unresolved_externals;

public:
  ~Module();

  enum Error {
    cSuccess,
    cObtainMainModuleNameError,
    cReadRaslError,
    cMemoryAllocError,
    cIdentAllocError,
    cUnresolvedExternal,
    cUnresolvedNative,
  };

  static Module *load_main_module(
    Domain *domain, NativeModule *native, Error& error
  );

  static Module *load_main_module_and_report_error(
    Domain *domain, NativeModule *native, Error& error
  );

  RefalIdentifier operator[](const IdentReference& ref) const {
    return m_native_identifiers[ref.id];
  }

  RefalFunction *lookup_function(const RefalFuncName& name);
  bool register_function(RefalFunction *func);

  RefalFunction* operator[](const ExternalReference& ref) const {
    return m_native_externals[ref.id];
  }

  void *global_variable(size_t offset) {
    return &m_global_variables[offset];
  }

  Domain *domain() {
    return m_domain;
  }

  std::string last_error_message() const {
    return m_error_message;
  }

private:
  Module(Domain *domain, NativeModule *native = 0);

  void load_native_identifiers();
  void find_unresolved_externals();
  void resolve_native_functions();
  void alloc_global_variables();
};

class Domain {
  struct AtExitListNode {
    AtExitCB callback;
    void *data;
    AtExitListNode *next;

    AtExitListNode(AtExitCB callback, void *data, Domain *domain)
      : callback(callback), data(data), next(domain->m_at_exit_list)
    {
      domain->m_at_exit_list = this;
    }

    void call(Domain *domain) {
      callback(domain, data);
    }
  };

  friend struct AtExitListNode;

  typedef std::map<StringRef, RefalIdentifier> IdentsMap;

  IdentsMap m_idents_table;
  AtExitListNode *m_at_exit_list;

  Module *m_module;      // TODO: должен быть список модулей

public:
  Domain();

  bool load_native_module(NativeModule *main_module);
  Module *load_module(VM *vm, const char *name);
  void unload_module(VM *vm, Module *module);

  void unload();

  size_t idents_count();

  RefalFunction *lookup_function(const RefalFuncName& name) {
    return m_module->lookup_function(name);
  }

  RefalFunction *lookup_function(
    UInt32 cookie1, UInt32 cookie2, const char *name
  ) {
    return lookup_function(RefalFuncName(name, cookie1, cookie2));
  }

  RefalIdentifier lookup_ident(const char *name);
  bool register_ident(RefalIdentifier ident);

  void read_counters(unsigned long counters[]);

  void at_exit(AtExitCB callback, void *data);
  void perform_at_exit();

private:
  void free_idents_table();
};

}  // namespace refalrts


#endif  // RefalRTS_DYNAMIC_H_
