#ifndef RefalRTS_VM_API_H_
#define RefalRTS_VM_API_H_

#include "refalrts.h"


namespace refalrts {

class VM;

struct VMapi {
  bool (*unload_module_rep)(
    VM *vm, Iter pos, RefalFunction *module_rep, FnResult& result
  );

  Module *(*module_from_function_rep)(RefalFunction *module_rep);

  void (*read_performance_counters)(VM *vm, double counters[]);

  void (*start_generated_function)(VM *vm);
  void (*stop_sentence)(VM *vm);
  void (*start_e_loop)(VM *vm);
};

const struct VMapi *get_api(VM *vm);

}  // namespace refalrts

#endif  // RefalRTS_VM_API_H_
