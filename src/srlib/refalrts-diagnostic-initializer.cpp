#include "refalrts-diagnostic-config.h"

//FROM refalrts-debugger
#include "refalrts-debugger.h"


namespace {

void init_diagnostic_config(
  refalrts::DiagnosticConfig *config, int *argc, char *argv[]
) {
#ifdef IDENTS_LIMIT
  config->idents_limit = IDENTS_LIMIT;
#endif

#ifdef MEMORY_LIMIT
  config->memory_limit = MEMORY_LIMIT;
#endif // ifdef MEMORY_LIMIT

#ifdef STEP_LIMIT
  config->step_limit = STEP_LIMIT;
#endif // ifdef STEP_LIMIT

#if SHOW_DEBUG
  config->start_step_trace = SHOW_DEBUG;
#endif // if SHOW_DEBUG

#ifndef DONT_PRINT_STATISTICS
  config->print_statistics = true;
#endif // ifndef DONT_PRINT_STATISTICS

#ifdef DUMP_FREE_LIST
  config->dump_free_list = true;
#endif // ifdef DUMP_FREE_LIST

#ifdef ENABLE_DEBUGGER
  int debug_arg = refalrts::debugger::find_debugger_flag(*argc, argv);
  if (debug_arg != -1) {
    for (int i = debug_arg; i < *argc; ++i) {
      argv[i] = argv[i + 1];
    }
    --*argc;
    config->debugger_factory = refalrts::debugger::RefalDebugger::create;
  }
#else
  (void) argc;
  (void) argv;
#endif // ifdef ENABLE_DEBUGGER

#ifdef DUMP_FILE
  if (strlen(DUMP_FILE) < sizeof(config->dump_file) - 1) {
    strcpy(config->dump_file, DUMP_FILE);
  }
#endif // ifdef DUMP_FILE
}

int initializer =
  ((refalrts::g_init_diagnostic_config = init_diagnostic_config), 0);

}  // unnamed namespace
