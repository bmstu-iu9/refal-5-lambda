#include <exception>
#include <stdio.h>
#include <stdlib.h>

#include "refalrts-diagnostic-config.h"


//FROM refalrts
#include "refalrts.h"
//FROM refalrts-allocator
#include "refalrts-allocator.h"
//FROM refalrts-debugger
#include "refalrts-debugger.h"
//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-profiler
#include "refalrts-profiler.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


extern struct refalrts::NativeModule g_module;

static void load_native_module_report_error(
  refalrts::ModuleLoadingError error,
  refalrts::ModuleLoadingErrorDetail *detail,
  void *callback_data
) {
  using refalrts::DiagnosticConfig;
  DiagnosticConfig *diagnostic_config =
    static_cast<DiagnosticConfig*>(callback_data);

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
      if (diagnostic_config->idents_limit != DiagnosticConfig::NO_LIMIT) {
        fprintf(
          stderr, "INTERNAL ERROR: Identifiers table overflows (max %ld)\n",
          diagnostic_config->idents_limit
        );
      } else {
        fprintf(stderr, "INTERNAL ERROR: can't allocate identifier\n");
      }
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

    default:
      refalrts_switch_default_violation(error);
  }
}

int main(int argc, char **argv) {
  refalrts::DiagnosticConfig diagnostic_config;

#ifdef IDENTS_LIMIT
  diagnostic_config.idents_limit = IDENTS_LIMIT;
#endif
#ifdef MEMORY_LIMIT
  diagnostic_config.memory_limit = MEMORY_LIMIT;
#endif // ifdef MEMORY_LIMIT

  refalrts::Allocator allocator(&diagnostic_config);
  refalrts::Profiler profiler;
  refalrts::Domain domain(&diagnostic_config);
  refalrts::VM vm(&allocator, &profiler, &domain);

#ifdef ENABLE_DEBUGGER
  int debug_arg = refalrts::debugger::find_debugger_flag(argc, argv);
  if (debug_arg != -1) {
    for (int i = debug_arg; i < argc; ++i) {
      argv[i] = argv[i + 1];
    }
    --argc;
    vm.set_debugger_factory(refalrts::debugger::RefalDebugger::create);
  }
#endif // ifdef ENABLE_DEBUGGER

  vm.set_args(argc, argv);

  refalrts::FnResult res;
  try {
    bool successed = domain.load_native_module(
      &vm, &g_module, load_native_module_report_error, &diagnostic_config, res
    );

    if (! successed) {
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
  } catch (refalrts::SwitchDefaultViolation& error) {
    error.print();
    return 151;
  } catch (std::exception& e) {
    fprintf(stderr, "INTERNAL ERROR: std::exception %s\n", e.what());
    return 152;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return 153;
  }

  // TODO: правильный порядок финализации
  profiler.end_profiler();
  if (res == refalrts::cSuccess) {
    domain.unload(&vm, res);
  }
  vm.free_view_field();
  allocator.free_memory();
  vm.free_states_stack();

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
