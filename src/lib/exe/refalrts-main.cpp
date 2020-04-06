#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "refalrts-commands.h"
#include "refalrts-native-module.h"


//FROM refalrts
#include "refalrts.h"
//FROM refalrts-diagnostic-initializer
#include "refalrts-diagnostic-defs.h"
//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-profiler
#include "refalrts-profiler.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


static void load_native_module_report_error(
  refalrts::ModuleLoadingError error,
  refalrts::ModuleLoadingErrorDetail *detail,
  void *callback_data
) {
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
  using refalrts::DiagnosticConfig;
  DiagnosticConfig *diagnostic_config =
    static_cast<DiagnosticConfig*>(callback_data);
#else  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */
  (void) callback_data;
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */

  switch (error) {
    case refalrts::cModuleLoadingError_ModuleNotFound:
      fprintf(stderr, "INTERNAL ERROR: can't load module %s\n", detail->message);
      exit(155);

    case refalrts::cModuleLoadingError_CantObtainModuleName:
      fprintf(stderr, "INTERNAL ERROR: can't obtain name of main executable\n");
      exit(155);

    case refalrts::cModuleLoadingError_InvalidRasl:
      fprintf(stderr, "INTERNAL ERROR: %s\n", detail->message);
      exit(155);

    case refalrts::cModuleLoadingError_CantAllocMemory:
      fprintf(
        stderr, "INTERNAL ERROR: out of memory while loading module, %s\n",
        detail->message
      );
      exit(155);

    case refalrts::cModuleLoadingError_CantAllocIdent:
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
      if (diagnostic_config->idents_limit) {
        fprintf(
          stderr, "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
          diagnostic_config->idents_limit
        );
      } else {
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */
        fprintf(stderr, "INTERNAL ERROR: can't allocate identifier\n");
#if REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED
      }
#endif  /* REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED */
      exit(154);

    case refalrts::cModuleLoadingError_UnresolvedExternal:
      fprintf(
        stderr, "INTERNAL ERROR: unresolved external: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      break;

    case refalrts::cModuleLoadingError_UnresolvedNative:
      fprintf(
        stderr, "INTERNAL ERROR: unresolved native: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      break;

    case refalrts::cModuleLoadingError_FunctionIsRedeclared:
      fprintf(
        stderr, "INTERNAL ERROR: function is redeclared: %s#%u:%u\n",
        detail->func_name.name,
        detail->func_name.cookie1,
        detail->func_name.cookie2
      );
      exit(156);

    case refalrts::cModuleLoadingError_CantLoadNativeModule:
      fprintf(
        stderr, "INTERNAL ERROR: can't load native module %s (error: %s)",
        detail->module_name,
        detail->message
      );
      break;

    case refalrts::cModuleLoadingError_NativeModuleEntryPointNotFound:
      fprintf(
        stderr,
        "INTERNAL ERROR: entry point %s in module %s not found (error: %s)",
        detail->func_name.name,
        detail->module_name,
        detail->message
      );
      break;

    default:
      refalrts_switch_default_violation(error);
  }
}

namespace {

refalrts::RefalFunction * lookup_function_in_domain(
  refalrts::VM *vm, const refalrts::RefalFuncName& name
) {
  return vm->domain()->lookup_function(name);
}

refalrts::RefalFunction * lookup_function_in_module(
  refalrts::Module *module, const refalrts::RefalFuncName& name
) {
  return module->lookup_function(name);
}

refalrts::Module * load_module_mod(
  refalrts::VM *vm, refalrts::Iter pos, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  assert(event != 0);
  return vm->domain()->load_module(vm, pos, name, event, callback_data, result);
}

refalrts::RefalFunction * load_module_rep(
  refalrts::VM *vm, refalrts::Iter pos, const char *name,
  refalrts::LoadModuleEvent event, void *callback_data,
  refalrts::FnResult& result
) {
  assert(event != 0);
  refalrts::Module *module =
    load_module_mod(vm, pos, name, event, callback_data, result);
  return module ? module->representant() : 0;
}

void unload_module_mod(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::Module *module,
  refalrts::FnResult& result
) {
  return vm->domain()->unload_module(vm, pos, module, result);
}

bool unload_module_rep(
  refalrts::VM *vm, refalrts::Iter pos, refalrts::RefalFunction *module_rep,
  refalrts::FnResult& result
) {
  refalrts::ModuleRepresentant *rep =
    dynamic_cast<refalrts::ModuleRepresentant*>(module_rep);
  if (rep != 0 && rep->module != 0) {
    refalrts::unload_module(vm, pos, rep->module, result);
    return true;
  } else {
    return false;
  }
}

refalrts::Module *module_from_function_rep(refalrts::RefalFunction *module_rep) {
  refalrts::ModuleRepresentant *rep =
    dynamic_cast<refalrts::ModuleRepresentant*>(module_rep);
  return rep != 0 ? rep->module : 0;
}

refalrts::RefalIdentifier ident_implode_(refalrts::VM *vm, const char *name) {
  return ident_implode(vm->domain(), name);
}

void read_counters(refalrts::VM *vm, double counters[]) {
  vm->profiler()->read_counters(counters);
  vm->read_counters(counters);
  vm->domain()->read_counters(counters);
}

void profiler_start_generated_function(refalrts::VM *vm) {
  vm->profiler()->start_generated_function();
}

void profiler_stop_sentence(refalrts::VM *vm) {
  vm->profiler()->stop_sentence();
}

void profiler_start_e_loop(refalrts::VM *vm) {
  vm->profiler()->start_e_loop();
}

const char *vm_arg(refalrts::VM *vm, int param) {
  return vm->arg(param);
}

refalrts::FnResult vm_main_loop(refalrts::VM *vm) {
  jmp_buf *old = vm->reset_memory_fail(0);

  const  refalrts::RASLCommand rasl[] = {
    { refalrts::icPushState, 0, 0, 0 },
    { refalrts::icNextStep, 0, 0, 0 },
    { refalrts::icMainLoopReturnSuccess, 0, 0, 0 }
  };
  refalrts::FnResult res = vm->main_loop(rasl);
  vm->reset_memory_fail(old);
  return res;
}

void vm_print_seq(
  refalrts::VM *vm, void *file, refalrts::Iter first, refalrts::Iter last
) {
  vm->print_seq(static_cast<FILE*>(file), first, last);
}

bool vm_repeated_stvar_term(
  refalrts::VM *vm, refalrts::Iter stvar_sample, refalrts::Iter pos
) {
  return vm->repeated_stvar_term(stvar_sample, pos);
}

refalrts::Iter vm_repeated_stvar_left(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_stvar_left(stvar, stvar_sample, first, last);
}

refalrts::Iter vm_repeated_stvar_right(
  refalrts::VM *vm,
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_stvar_right(stvar, stvar_sample, first, last);
}

bool vm_repeated_evar_left(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_evar_left(
    evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
  );
}

bool vm_repeated_evar_right(
  refalrts::VM *vm,
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  return vm->repeated_evar_right(
    evar_b, evar_e, evar_b_sample, evar_e_sample, first, last
  );
}

void vm_reset_allocator(refalrts::VM *vm) {
  vm->reset_allocator();
}

void vm_copy_evar(
  refalrts::VM *vm, refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  vm->copy_evar(evar_res_b, evar_res_e, evar_b_sample, evar_e_sample);
}

void vm_copy_stvar(
  refalrts::VM *vm, refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  vm->copy_stvar(stvar_res, stvar_sample);
}

void vm_alloc_copy_evar(
  refalrts::VM *vm, refalrts::Iter& res,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  vm->alloc_copy_evar(res, evar_b_sample, evar_e_sample);
}

void vm_alloc_copy_svar(
  refalrts::VM *vm, refalrts::Iter& svar_res, refalrts::Iter svar_sample
) {
  vm->copy_node(svar_res, svar_sample);
}

void vm_alloc_char(refalrts::VM *vm, refalrts::Iter& res, char ch) {
  vm->alloc_char(res, ch);
}

void vm_alloc_number(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalNumber num
) {
  vm->alloc_number(res, num);
}

void vm_alloc_name(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalFunction *fn
) {
  vm->alloc_name(res, fn);
}

void vm_alloc_ident(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::RefalIdentifier ident
) {
  vm->alloc_ident(res, ident);
}

void vm_alloc_open_adt(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_open_adt(res);
}

void vm_alloc_close_adt(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_close_adt(res);
}

void vm_alloc_open_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_open_bracket(res);
}

void vm_alloc_close_bracket(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_close_bracket(res);
}

void vm_alloc_open_call(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_open_call(res);
}

void vm_alloc_close_call(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_close_call(res);
}

void vm_alloc_closure_head(refalrts::VM *vm, refalrts::Iter& res) {
  vm->alloc_closure_head(res);
}

void vm_alloc_unwrapped_closure(
  refalrts::VM *vm, refalrts::Iter& res, refalrts::Iter head
) {
  vm->alloc_unwrapped_closure(res, head);
}

void vm_alloc_chars(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  vm->alloc_chars(res_b, res_e, buffer, buflen);
}

void vm_alloc_string(
  refalrts::VM *vm,
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  vm->alloc_string(res_b, res_e, string);
}

void vm_splice_to_freelist(
  refalrts::VM *vm, refalrts::Iter begin, refalrts::Iter end
) {
  vm->splice_to_freelist(begin, end);
}

refalrts::Iter vm_splice_from_freelist(refalrts::VM *vm, refalrts::Iter pos) {
  return vm->splice_from_freelist(pos);
}

refalrts::FnResult vm_checked_alloc(
  refalrts::VM *vm, refalrts::CheckedAllocFn function, void *data
) {
  jmp_buf on_memory_fail;
  jmp_buf *old = vm->reset_memory_fail(&on_memory_fail);
  if (setjmp(on_memory_fail)) {
    vm->reset_memory_fail(old);
    return refalrts::cNoMemory;
  }

  refalrts::FnResult res = function(vm, data);
  vm->reset_memory_fail(old);
  return res;
}

void *vm_ref_ptr(refalrts::VM *vm, size_t offset) {
  return vm->module()->global_variable(offset);
}

refalrts::Module *vm_current_module(refalrts::VM *vm) {
  return vm->module();
}

bool vm_dangerous_state(refalrts::VM *vm) {
  return vm->domain()->dangerous_state();
}

void vm_push_stack(refalrts::VM *vm, refalrts::Iter call_bracket) {
  vm->push_stack(call_bracket);
}

void vm_set_return_code(refalrts::VM *vm, int code) {
  vm->set_return_code(code);
}

const refalrts::VMapi api = {
  lookup_function_in_domain,
  lookup_function_in_module,
  load_module_mod,
  load_module_rep,
  unload_module_mod,
  unload_module_rep,
  module_from_function_rep,
  ident_implode_,
  read_counters,
  profiler_start_generated_function,
  profiler_stop_sentence,
  profiler_start_e_loop,
  vm_arg,
  vm_main_loop,
  vm_print_seq,
  vm_repeated_stvar_term,
  vm_repeated_stvar_left,
  vm_repeated_stvar_right,
  vm_repeated_evar_left,
  vm_repeated_evar_right,
  vm_reset_allocator,
  vm_copy_evar,
  vm_copy_stvar,
  vm_alloc_copy_evar,
  vm_alloc_copy_svar,
  vm_alloc_char,
  vm_alloc_number,
  vm_alloc_name,
  vm_alloc_ident,
  vm_alloc_open_adt,
  vm_alloc_close_adt,
  vm_alloc_open_bracket,
  vm_alloc_close_bracket,
  vm_alloc_open_call,
  vm_alloc_close_call,
  vm_alloc_closure_head,
  vm_alloc_unwrapped_closure,
  vm_alloc_chars,
  vm_alloc_string,
  vm_splice_to_freelist,
  vm_splice_from_freelist,
  vm_checked_alloc,
  vm_ref_ptr,
  vm_current_module,
  vm_dangerous_state,
  vm_push_stack,
  vm_set_return_code,
};

}  // unnamed namespace

int main(int argc, char **argv) {
  refalrts::DiagnosticConfig diagnostic_config;

  refalrts::init_diagnostic_config(&diagnostic_config, &argc, argv);

  refalrts::Profiler profiler(&diagnostic_config);
  refalrts::Domain domain(&diagnostic_config);
  refalrts::VM vm(&api, &profiler, &domain, &diagnostic_config);

  vm.set_args(argc, argv);

  refalrts::FnResult res;
  try {
    bool succeeded = domain.load_native_module(
      &vm, &g_module, load_native_module_report_error, &diagnostic_config, res
    );

    if (! succeeded) {
      domain.unload(&vm, res);
      return 157;
    }

    if (res == refalrts::cSuccess) {
      profiler.start_profiler();

      refalrts::RefalFunction *go = domain.lookup_function(0, 0, "GO");

      if (! go) {
        go = domain.lookup_function(0, 0, "Go");
      }

      if (! go) {
        fprintf(stderr, "INTERNAL ERROR: entry point (Go or GO) is not found\n");
        return 158;
      }

      res = vm.execute_zero_arity_function(go);
    }
    fflush(stderr);
    fflush(stdout);
  } catch (std::exception& e) {
    fprintf(stderr, "INTERNAL ERROR: std::exception %s\n", e.what());
    return 152;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return 153;
  }

  // TODO: правильный порядок финализации
  profiler.end_profiler();
  refalrts::FnResult res_unload;
  domain.unload(&vm, res_unload);
  if (res == refalrts::cSuccess) {
    res = res_unload;
  }
  vm.free_view_field();
  vm.free_states_stack();
  domain.free_domain_memory();

  fflush(stdout);

  switch(res) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 101;

    case refalrts::cNoMemory:
      return 102;

    case refalrts::cExit:
      return vm.get_return_code();

    case refalrts::cStepLimit:
      return 103;

    case refalrts::cIdentTableLimit:
      return 104;

    default:
      fprintf(stderr, "INTERNAL ERROR: check switch in main (res = %d)\n", res);
      return 155;
  }
}
