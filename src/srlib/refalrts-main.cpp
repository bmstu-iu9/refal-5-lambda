#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "refalrts-diagnostic-config.h"


//FROM refalrts
#include "refalrts.h"
//FROM refalrts-allocator
#include "refalrts-allocator.h"
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

refalrts::InitDiagnosticConfig refalrts::g_init_diagnostic_config;

int main(int argc, char **argv) {
  refalrts::DiagnosticConfig diagnostic_config;

  if (refalrts::g_init_diagnostic_config) {
    refalrts::g_init_diagnostic_config(&diagnostic_config, &argc, argv);
  }

  refalrts::Allocator allocator(&diagnostic_config);
  refalrts::Profiler profiler(&diagnostic_config);
  refalrts::Domain domain(&diagnostic_config);
  refalrts::VM vm(&allocator, &profiler, &domain, &diagnostic_config);

  vm.set_debugger_factory(diagnostic_config.debugger_factory);
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

#if RASL_COMMANDS_PROFILE
  // TODO: обновлять при добавлении новых команд
  g_rasl_stats[0].name = "icProfileFunction";
  g_rasl_stats[1].name = "icLoadConstants";
  g_rasl_stats[2].name = "icIssueMemory";
  g_rasl_stats[3].name = "icReserveBacktrackStack";
  g_rasl_stats[4].name = "icOnFailGoTo";
  g_rasl_stats[5].name = "icProfilerStopSentence";
  g_rasl_stats[6].name = "icInitB0";
  g_rasl_stats[7].name = "icInitB0_Lite";
  g_rasl_stats[8].name = "icCharLeft";
  g_rasl_stats[9].name = "icCharRight";
  g_rasl_stats[10].name = "icCharTerm";
  g_rasl_stats[11].name = "icCharSaveLeft";
  g_rasl_stats[12].name = "icCharSaveRight";
  g_rasl_stats[13].name = "icNumberLeft";
  g_rasl_stats[14].name = "icNumberRight";
  g_rasl_stats[15].name = "icNumberTerm";
  g_rasl_stats[16].name = "icNumberSaveLeft";
  g_rasl_stats[17].name = "icNumberSaveRight";
  g_rasl_stats[18].name = "icHugeNumLeft";
  g_rasl_stats[19].name = "icHugeNumRight";
  g_rasl_stats[20].name = "icHugeNumTerm";
  g_rasl_stats[21].name = "icHugeNumSaveLeft";
  g_rasl_stats[22].name = "icHugeNumSaveRight";
  g_rasl_stats[23].name = "icNameLeft";
  g_rasl_stats[24].name = "icNameRight";
  g_rasl_stats[25].name = "icNameTerm";
  g_rasl_stats[26].name = "icNameSaveLeft";
  g_rasl_stats[27].name = "icNameSaveRight";
  g_rasl_stats[28].name = "icIdentLeft";
  g_rasl_stats[29].name = "icIdentRight";
  g_rasl_stats[30].name = "icIdentTerm";
  g_rasl_stats[31].name = "icIdentSaveLeft";
  g_rasl_stats[32].name = "icIdentSaveRight";
  g_rasl_stats[33].name = "icBracketsLeft";
  g_rasl_stats[34].name = "icBracketsRight";
  g_rasl_stats[35].name = "icBracketsTerm";
  g_rasl_stats[36].name = "icBracketsSaveLeft";
  g_rasl_stats[37].name = "icBracketsSaveRight";
  g_rasl_stats[38].name = "icADTLeft";
  g_rasl_stats[39].name = "icADTRight";
  g_rasl_stats[40].name = "icADTTerm";
  g_rasl_stats[41].name = "icADTSaveLeft";
  g_rasl_stats[42].name = "icADTSaveRight";
  g_rasl_stats[43].name = "icADTSaveTerm";
  g_rasl_stats[44].name = "icCallSaveLeft";
  g_rasl_stats[45].name = "icEmpty";
  g_rasl_stats[46].name = "icNotEmpty";
  g_rasl_stats[47].name = "icsVarLeft";
  g_rasl_stats[48].name = "icsVarRight";
  g_rasl_stats[49].name = "icsVarTerm";
  g_rasl_stats[50].name = "ictVarLeft";
  g_rasl_stats[51].name = "ictVarRight";
  g_rasl_stats[52].name = "ictVarSaveLeft";
  g_rasl_stats[53].name = "ictVarSaveRight";
  g_rasl_stats[54].name = "iceRepeatedLeft";
  g_rasl_stats[55].name = "iceRepeatedRight";
  g_rasl_stats[56].name = "icsRepeatedLeft";
  g_rasl_stats[57].name = "icsRepeatedRight";
  g_rasl_stats[58].name = "icsRepeatedTerm";
  g_rasl_stats[59].name = "ictRepeatedLeft";
  g_rasl_stats[60].name = "ictRepeatedRight";
  g_rasl_stats[61].name = "ictRepeatedTerm";
  g_rasl_stats[62].name = "ictRepeatedSaveLeft";
  g_rasl_stats[63].name = "ictRepeatedSaveRight";
  g_rasl_stats[64].name = "icEPrepare";
  g_rasl_stats[65].name = "icEStart";
  g_rasl_stats[66].name = "icSave";
  g_rasl_stats[67].name = "icResetAllocator";
  g_rasl_stats[68].name = "icSetResArgBegin";
  g_rasl_stats[69].name = "icSetResRightEdge";
  g_rasl_stats[70].name = "icSetRes";
  g_rasl_stats[71].name = "icCopyEVar";
  g_rasl_stats[72].name = "icCopySTVar";
  g_rasl_stats[73].name = "icReinitSVar";
  g_rasl_stats[74].name = "icAllocateChar";
  g_rasl_stats[75].name = "icAllocateName";
  g_rasl_stats[76].name = "icAllocateNumber";
  g_rasl_stats[77].name = "icAllocateHugeNumber";
  g_rasl_stats[78].name = "icAllocateIdent";
  g_rasl_stats[79].name = "icAllocateBracket";
  g_rasl_stats[80].name = "icAllocateString";
  g_rasl_stats[113].name = "icAllocateClosureHead";
  g_rasl_stats[114].name = "icAllocateUnwrappedClosure";
  g_rasl_stats[81].name = "icReinitChar";
  g_rasl_stats[82].name = "icReinitName";
  g_rasl_stats[83].name = "icReinitNumber";
  g_rasl_stats[84].name = "icReinitHugeNumber";
  g_rasl_stats[85].name = "icReinitIdent";
  g_rasl_stats[86].name = "icReinitBracket";
  g_rasl_stats[87].name = "icReinitClosureHead";
  g_rasl_stats[88].name = "icReinitUnwrappedClosure";
  g_rasl_stats[89].name = "icUpdateChar";
  g_rasl_stats[90].name = "icUpdateName";
  g_rasl_stats[91].name = "icUpdateNumber";
  g_rasl_stats[92].name = "icUpdateHugeNumber";
  g_rasl_stats[93].name = "icUpdateIdent";
  g_rasl_stats[94].name = "icLinkBrackets";
  g_rasl_stats[95].name = "icPushStack";
  g_rasl_stats[110].name = "icWrapClosure";
  g_rasl_stats[96].name = "icSpliceElem";
  g_rasl_stats[97].name = "icSpliceEVar";
  g_rasl_stats[98].name = "icSpliceSTVar";
  g_rasl_stats[99].name = "icSpliceRange";
  g_rasl_stats[100].name = "icSpliceTile";
  g_rasl_stats[101].name = "icSpliceToFreeList";
  g_rasl_stats[102].name = "icNextStep";
  g_rasl_stats[103].name = "icTrashLeftEdge";
  g_rasl_stats[104].name = "icTrash";
  g_rasl_stats[105].name = "icFail";
  g_rasl_stats[106].name = "icFetchSwapHead";
  g_rasl_stats[107].name = "icFetchSwapInfoBounds";
  g_rasl_stats[108].name = "icSwapSave";
  g_rasl_stats[109].name = "icPerformNative";
  g_rasl_stats[111].name = "icScale";
  g_rasl_stats[112].name = "icVariableDebugOffset";
  g_rasl_stats[115].name = "icSpliceToFreeList_Range";
  g_rasl_stats[116].name = "icPushState";
  g_rasl_stats[117].name = "icPopState";
  g_rasl_stats[118].name = "icMainLoopReturnSuccess";

  const double SEC_PER_CLOCS = 1.0 / CLOCKS_PER_SEC;
  size_t length = sizeof(g_rasl_stats) / sizeof(g_rasl_stats[0]);
  qsort(g_rasl_stats, length, sizeof(g_rasl_stats[0]), StatOfRASL::compare);
  for (size_t i = 0; i < length; ++i) {
    clock_t command_time = g_rasl_stats[i].time;
    unsigned long command_count = g_rasl_stats[i].count;

    double command_time_sec = command_time * SEC_PER_CLOCS;
    double one_command_time_ns = 0;
    if (command_count) {
      one_command_time_ns = 1.0e9 * command_time_sec / command_count;
    }

    fprintf(
      stderr,
      "%30s: %7.4f (%5.2f %%) %9ld (%5.2f %%), %7.2f ns\n",
      g_rasl_stats[i].name,
      command_time_sec, 100.0 * command_time / g_total_time,
      command_count, 100.0 * command_count / g_total_commands,
      one_command_time_ns
    );
  }
#endif  // RASL_COMMANDS_PROFILE

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
