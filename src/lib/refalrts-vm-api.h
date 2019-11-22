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

  const char *(*arg)(VM *vm, int param);
  FnResult (*main_loop)(VM *vm);
  void (*print_seq)(VM *vm, void *file, Iter first, Iter last);

  bool (*repeated_stvar_term)(VM *vm, Iter stvar_sample, Iter pos);
  Iter (*repeated_stvar_left)(
    VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
  );
  Iter (*repeated_stvar_right)(
    VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
  );
  bool (*repeated_evar_left)(
    VM *vm,
    Iter& evar_b, Iter& evar_e,
    Iter evar_b_sample, Iter evar_e_sample,
    Iter& first, Iter& last
  );
  bool (*repeated_evar_right)(
    VM *vm,
    Iter& evar_b, Iter& evar_e,
    Iter evar_b_sample, Iter evar_e_sample,
    Iter& first, Iter& last
  );

  void (*reset_allocator)(VM *vm);
  void (*copy_evar)(
    VM *vm, Iter& evar_res_b, Iter& evar_res_e,
    Iter evar_b_sample, Iter evar_e_sample
  );
  void (*copy_stvar)(VM *vm, Iter& stvar_res, Iter stvar_sample);
  void (*alloc_copy_evar)(
    VM *vm, Iter& res, Iter evar_b_sample, Iter evar_e_sample
  );
  void (*alloc_copy_svar)(VM *vm, Iter& svar_res, Iter svar_sample);
  void (*alloc_char)(VM *vm, Iter& res, char ch);
  void (*alloc_number)(VM *vm, Iter& res, RefalNumber num);
  void (*alloc_name)(VM *vm, Iter& res, RefalFunction *func);
  void (*alloc_ident)(VM *vm, Iter& res, RefalIdentifier ident);
  void (*alloc_open_adt)(VM *vm, Iter& res);
  void (*alloc_close_adt)(VM *vm, Iter& res);
  void (*alloc_open_bracket)(VM *vm, Iter& res);
  void (*alloc_close_bracket)(VM *vm, Iter& res);
  void (*alloc_open_call)(VM *vm, Iter& res);
  void (*alloc_close_call)(VM *vm, Iter& res);
  void (*alloc_closure_head)(VM *vm, Iter& res);
  void (*alloc_unwrapped_closure)(VM *vm, Iter& res, Iter head);
  void (*alloc_chars)(
    VM *vm, Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
  );
  void (*alloc_string)(VM *vm, Iter& res_b, Iter& res_e, const char *string);
  void (*splice_to_freelist)(VM *vm, Iter begin, Iter end);
  Iter (*splice_from_freelist)(VM *vm, Iter pos);
  FnResult (*checked_alloc)(VM *vm, CheckedAllocFn function, void *data);
  void *(*ref_ptr)(VM *vm, size_t offset);
  Module *(*current_module)(VM *vm);
  bool (*dangerous_state)(VM *vm);
  void (*push_stack)(VM *vm, Iter call_bracket);
  void (*set_return_code)(VM *vm, int code);
};

const struct VMapi *get_api(VM *vm);

}  // namespace refalrts

#endif  // RefalRTS_VM_API_H_
