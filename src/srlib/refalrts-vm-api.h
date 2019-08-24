#ifndef RefalRTS_VM_API_H_
#define RefalRTS_VM_API_H_

#include "refalrts.h"


namespace refalrts {

class VM;

struct VMapi {
  RefalFunction *(*lookup_function_in_domain)(VM *vm, const RefalFuncName& name);
  RefalFunction *(*lookup_function_in_module)(
    Module *module, const RefalFuncName& name
  );

  Module *(*load_module)(
    VM *vm, Iter pos, const char *name,
    LoadModuleEvent event, void *callback_data,
    FnResult& result
  );
  RefalFunction *(*load_module_rep)(
    VM *vm, Iter pos, const char *name,
    LoadModuleEvent event, void *callback_data,
    FnResult& result
  );

  void (*unload_module)(VM *vm, Iter pos, Module *module, FnResult& result);
  bool (*unload_module_rep)(
    VM *vm, Iter pos, RefalFunction *module_rep, FnResult& result
  );

  Module *(*module_from_function_rep)(RefalFunction *module_rep);

  RefalIdentifier (*ident_implode)(VM *vm, const char *name);
  void (*read_performance_counters)(VM *vm, double counters[]);

  void (*start_generated_function)(VM *vm);
  void (*stop_sentence)(VM *vm);
  void (*start_e_loop)(VM *vm);

  void *(*ref_ptr)(VM *vm, size_t offset);
  Module *(*current_module)(VM *vm);
  bool (*dangerous_state)(VM *vm);
};

const struct VMapi *get_api(VM *vm);

}  // namespace refalrts

#endif  // RefalRTS_VM_API_H_
