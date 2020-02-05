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
#include "refalrts-diagnostic-config.h"
#include "refalrts-functions.h"
#include "refalrts-native-module.h"
#include "refalrts-platform-specific.h"


//==============================================================================
// Динамическое связывание
//==============================================================================

namespace refalrts {

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

class Module;
typedef std::list<Module*> ModuleList;

class Module {
public:
  typedef std::map<std::string, Module*> ReferenceMap;

private:
  struct ConstTable {
    UInt32 cookie1;
    UInt32 cookie2;
    std::string unit_name;
    std::vector<std::string> externals_names;
    std::vector<RefalFunction*> externals_pointers;
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

    Domain *domain() const {
      return m_module->domain();
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
  NativeModule *m_native;
  void *m_os_module;
  std::vector<char> m_global_variables;
  Domain *m_domain;
  NativeList m_unresolved_native_functions;
  ReferenceMap m_references;
  std::string m_name;
  const api::stat *m_stat;
  ModuleList m_indirect_references;
  std::vector<std::string> m_aliases;
  ModuleRepresentant *m_representant;
  unsigned m_refcounter;
  std::list<std::pair<UInt32, UInt32> > m_initialized_scopes;

public:
  Module(
    Domain *domain, const std::string& real_name, const api::stat *stat,
    bool& success, LoadModuleEvent event, void *callback_data,
    NativeModule *native = 0
  );
  ~Module();

  bool find_unresolved_externals(LoadModuleEvent event, void *callback_data);

  RefalFunction *lookup_function(const RefalFuncName& name);

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

  bool has_alias(const std::string& alias) const;
  bool with_stat(const api::stat *stat) const;

  ModuleRepresentant *representant() const {
    return m_representant;
  }

  unsigned refcounter() const {
    return m_refcounter;
  }

  void add_ref() {
    ++m_refcounter;
  }

  void del_ref();

  void initialize(VM *vm, Iter pos, FnResult& result);
  void finalize(VM *vm, Iter pos, FnResult& result);
  void deactivate();

  void make_dump(VM *vm);

private:
  RefalFunction *lookup_function_aux(const RefalFuncName& name);
  void register_function(RefalFunction *func);
  void collect_indirect_references();
  bool find_unresolved_externals_rasl(
    LoadModuleEvent event, void *callback_data
  );
  bool resolve_native_functions(LoadModuleEvent event, void *callback_data);
  void alloc_global_variables() {
    m_global_variables.assign(m_native->global_variables_memory, '\0');
  }
  bool load_os_module(LoadModuleEvent event, void *callback_data);
};

class Domain {
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

    template <typename Attr>
    Module *contain(Attr attr, bool (Module::*test)(Attr attr) const) const;
  };

  class ModuleStorage {
    Domain *m_domain;
    ModuleList m_modules;

  public:
    ModuleStorage(Domain *domain);
    ~ModuleStorage();

    RefalFunction *operator[](const RefalFuncName& name) const;

    Module *load_module(
      const std::string& name, Stack *stack,
      LoadModuleEvent event, void *callback_data,
      refalrts::NativeModule *main_module = 0
    );
    bool find_unresolved_externals(LoadModuleEvent event, void *callback_data);

    void unload(VM *vm, Iter pos, FnResult& result);
    void splice_and_init(
      VM *vm, Iter pos, ModuleStorage& other, FnResult& result
    );

    void unload_module(VM *vm, Iter pos, Module *module, FnResult& result);

    void make_dump(VM *vm);

  private:
    // Если эту функцию назвать find, компилятор BCC 5.5.1 будет выдавать
    // ошибки. Поэтому используем более длинное имя find_by_attr.
    template <typename Attr>
    Module *find_by_attr(Attr attr, bool (Module::*test)(Attr attr) const) const;

    template <typename Attr>
    Module *find_known(
      const Stack *stack, Attr attr, bool (Module::*test)(Attr attr) const
    ) const;

    void gc(VM *vm, Iter pos, FnResult& result);
  };

  friend class ModuleStorage;

  struct Chunk {
    enum { cSize = 1000 };
    Node elems[cSize];
    Chunk *next;

    Chunk(Chunk *next)
      : next(next)
    {
      /* пусто */
    }
  };

  typedef std::map<StringRef, RefalIdentifier> IdentsMap;

  IdentsMap m_idents_table;

  ModuleStorage m_storage;
  bool m_dangerous;
  DiagnosticConfig *m_diagnostic_config;

  std::vector<RefalFunction*> m_allocated_functions;

  Chunk *m_chunks;
  size_t m_memory_use;

  Node m_global_free_begin;
  Node m_global_free_end;

  Node m_swap_begin;
  Node m_swap_end;

  class DangerousRAII {
    bool *m_dangerous;
  public:
    DangerousRAII(bool *dangerous)
      : m_dangerous(dangerous)
    {
      *m_dangerous = true;
    }

    ~DangerousRAII() {
      *m_dangerous = false;
    }
  };

public:
  Domain(DiagnosticConfig *diagnostic_config);

  bool load_native_module(
    VM *vm, NativeModule *main_module,
    LoadModuleEvent event, void *callback_data, FnResult& result
  );
  Module *load_module(
    VM *vm, Iter pos, const char *name,
    LoadModuleEvent event, void *callback_data, FnResult& result
  );
  void unload_module(VM *vm, Iter pos, Module *module, FnResult& result);
  void unload(VM *vm, FnResult& result) {
    unload(vm, 0, result);
  }
  void unload(VM *vm, Iter pos, FnResult& result);

  void free_domain_memory();

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

  void read_counters(double counters[]);

  bool dangerous_state() const {
    return m_dangerous;
  }

  ModuleRepresentant *new_module_representant(
    const std::string& module_name, Module *module
  ) {
    ModuleRepresentant *res = new ModuleRepresentant(module_name, module);
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalFunction *new_RASL_function(
    RefalFuncName name,
    const RASLCommand *rasl,
    RefalFunction **functions,
    const RefalIdentifier *idents,
    const RefalNumber *numbers,
    const StringItem *strings,
    const char *filename
  ) {
    RefalFunction *res = new RASLFunction(
      name, rasl, functions, idents, numbers, strings, filename
    );
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalNativeFunction *new_native_function(
    RefalFunction **functions,
    const RefalIdentifier *idents,
    RefalFuncName name
  ) {
    RefalNativeFunction *res = new RefalNativeFunction(functions, idents, name);
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalFunction *new_empty_function(RefalFuncName name) {
    RefalFunction *res = new RefalEmptyFunction(name);
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalFunction *new_swap(RefalFuncName name) {
    RefalFunction *res = new RefalSwap(name);
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalFunction *new_cond_func_rasl(RefalFuncName name) {
    RefalFunction *res = new RefalCondFunctionRasl(name);
    m_allocated_functions.push_back(res);
    return res;
  }

  RefalFunction *new_cond_func_nat(RefalFuncName name) {
    RefalFunction *res = new RefalCondFunctionNative(name);
    m_allocated_functions.push_back(res);
    return res;
  }

  bool alloc_nodes(Iter& begin, Iter& end);
  void free_nodes(Iter begin, Iter end);
  void swap_save(Iter begin, Iter end);

  void make_dump(VM *vm);

  size_t memory_use() const {
    return m_memory_use;
  }

private:
  bool initialize(
    VM *vm, Iter pos, Module *module, ModuleStorage& new_storage,
    LoadModuleEvent event, void *callback_data, FnResult& result
  );
  static const char *not_null(const char *str) {
    return str ? str : "";
  }

  const api::stat *lookup_module_with_extensions(std::string *real_name);
  const api::stat *lookup_module_by_name(
    const std::string& name, std::string& real_name
  );

  void free_idents_table();
  void free_nodes();
};


template <typename Attr>
Module*
Domain::Stack::contain(Attr attr, bool (Module::*test)(Attr attr) const) const {
  const Stack *node = this;
  while (node != 0 && ! (node->module->*test)(attr)) {
    node = node->next;
  }

  return node != 0 ? node->module : 0;
}

template <typename Attr>
Module*
Domain::ModuleStorage::find_by_attr(
  Attr attr, bool (refalrts::Module::*test)(Attr attr) const
) const {
  ModuleList::const_iterator p = m_modules.begin();

  while (p != m_modules.end() && ! ((*p)->*test)(attr)) {
    ++p;
  }

  return p != m_modules.end() ? *p : 0;
}

template <typename Attr>
Module*
Domain::ModuleStorage::find_known(
  const Domain::Stack *stack, Attr attr, bool (Module::*test)(Attr attr) const
) const {
  Module *res;
  return
    // Без явной подсказки <Attr> тип не выводится
    (res = m_domain->m_storage.find_by_attr<Attr>(attr, test), res != 0) ? res :
    (res = find_by_attr<Attr>(attr, test), res != 0) ? res :
    stack != 0 && (res = stack->contain<Attr>(attr, test), res != 0) ? res :
    0;
}

}  // namespace refalrts


#endif  // RefalRTS_DYNAMIC_H_
