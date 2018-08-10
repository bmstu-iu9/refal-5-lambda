#ifndef RefalRTS_DYNAMIC_H_
#define RefalRTS_DYNAMIC_H_

#include <list>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

#include "refalrts.h"
#include "refalrts-functions.h"
#include "refalrts-platform-specific.h"


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

inline bool operator!=(const RefalFuncName& lhs, const RefalFuncName& rhs) {
  return lhs.cookie1 != rhs.cookie1 || lhs.cookie2 != rhs.cookie2
    || strcmp(lhs.name, rhs.name) != 0;
}

class Domain;

class Module {
public:
  typedef std::map<std::string, Module*> ReferenceMap;

private:
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

  struct RedeclarationError {
    std::string name;
    UInt32 cookie1, cookie2;

    RedeclarationError(const RefalFuncName& func_name)
      : name(func_name.name)
      , cookie1(func_name.cookie1)
      , cookie2(func_name.cookie2)
    {
      /* пусто */
    }

    RefalFuncName func_name() const {
      return RefalFuncName(name.c_str(), cookie1, cookie2);
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
    void register_(RefalFunction *func) {
      m_module->register_function(func);
    }
  };

  friend class Loader;

  typedef std::map<RefalFuncName, RefalFunction*> FuncsMap;
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
  ReferenceMap m_references;
  std::string m_name;
  const api::stat *m_stat;

public:
  Module(
    Domain *domain, const std::string& real_name, const api::stat *stat,
    bool& success, LoadModuleEvent event, void *callback_data,
    NativeModule *native = 0
  );
  ~Module();

  bool find_unresolved_externals(LoadModuleEvent event, void *callback_data);

  RefalIdentifier operator[](const IdentReference& ref) const {
    return m_native_identifiers[ref.id];
  }

  RefalFunction *lookup_function(const RefalFuncName& name);

  RefalFunction* operator[](const ExternalReference& ref) const {
    return m_native_externals[ref.id];
  }

  void *global_variable(size_t offset) {
    return &m_global_variables[offset];
  }

  Domain *domain() {
    return m_domain;
  }

  // TODO: продумать инкапсуляцию
  ReferenceMap& references() {
    return m_references;
  }

  std::string name() const {
    return m_name;
  }

  const api::stat *stat() const {
    return m_stat;
  }

private:
  void load_native_identifiers();
  void register_function(RefalFunction *func);
  bool find_unresolved_externals_rasl(
    LoadModuleEvent event, void *callback_data
  );
  bool find_unresolved_externals_native(
    LoadModuleEvent event, void *callback_data
  );
  bool resolve_native_functions(LoadModuleEvent event, void *callback_data);
  void alloc_global_variables() {
    m_global_variables.assign(m_native->global_variables_memory, '\0');
  }
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

  struct Stack {
    const api::stat *stat;
    Module *module;
    const Stack *next;

    Stack()
      : stat(0), module(0), next(0)
    {
      /* пусто */
    }

    Stack(const api::stat *stat, Module *module, const Stack *next)
      : stat(stat), module(module), next(next)
    {
      /* пусто */
    }

    Module *contain(const api::stat *stat) const;
  };

  class ModuleStorage {
    typedef std::list<Module*> ModuleList;

    Domain *m_domain;
    ModuleList m_modules;

  public:
    ModuleStorage(Domain *domain);
    ~ModuleStorage();

    Module *operator[](const api::stat *stat) const;
    RefalFunction *operator[](const RefalFuncName& name) const;

    bool load_references(
      Stack *stack, LoadModuleEvent event, void *callback_data
    );
    bool find_unresolved_externals(LoadModuleEvent event, void *callback_data);

    void unload();
    void splice(ModuleStorage& other);

    void unload_module(Module *module);

  private:
    Module *find_known(const Stack& stack, const api::stat *stat) const;
  };

  friend class ModuleStorage;

  typedef std::map<StringRef, RefalIdentifier> IdentsMap;

  IdentsMap m_idents_table;
  AtExitListNode *m_at_exit_list;

  ModuleStorage m_storage;

public:
  Domain();

  bool load_native_module(
    NativeModule *main_module, LoadModuleEvent event, void *callback_data
  );
  Module *load_module(
    VM *vm, const char *name, LoadModuleEvent event, void *callback_data
  );
  void unload_module(VM *vm, Module *module);

  void unload();

  size_t idents_count();

  RefalFunction *lookup_function(const RefalFuncName& name) {
    return m_storage[name];
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
  static const char *not_null(const char *str) {
    return str ? str : "";
  }

  const api::stat *lookup_module_with_extensions(std::string *real_name);
  const api::stat *lookup_module_by_name(
    const std::string& name, std::string& real_name
  );

  void free_idents_table();
};

}  // namespace refalrts


#endif  // RefalRTS_DYNAMIC_H_
