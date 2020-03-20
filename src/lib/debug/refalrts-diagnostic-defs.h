#ifndef RefalRTS_DIAGNOSTIC_DEFS_H
#define RefalRTS_DIAGNOSTIC_DEFS_H

#include <limits.h>
#include <stdio.h>

#include "refalrts.h"

#define REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED 1


namespace refalrts {

class Debugger;
typedef Debugger *(*DebuggerFactory)(VM *vm);

struct DiagnosticConfig {
  unsigned long idents_limit;
  unsigned long memory_limit;
  unsigned long step_limit;
  unsigned long start_step_trace;
  bool print_statistics;
  bool dump_free_list;
  bool show_cookies;
  bool show_hidden_steps;
  bool enable_debugger;
  bool enable_profiler;
  DebuggerFactory debugger_factory;
  char dump_file[FILENAME_MAX];

  static const unsigned long NO_LIMIT = ULONG_MAX;

  DiagnosticConfig()
    : idents_limit(NO_LIMIT)
    , memory_limit(NO_LIMIT)
    , step_limit(0)
    , start_step_trace(0)
    , print_statistics(false)
    , dump_free_list(false)
    , show_cookies(true)
    , show_hidden_steps(false)
    , enable_debugger(false)
    , enable_profiler(false)
    , debugger_factory(create_null_debugger)
  {
    dump_file[0] = '\0';
  }

  class NullDebugger;
  static Debugger* create_null_debugger(VM *vm);
};

void init_diagnostic_config(
  DiagnosticConfig *config, int *argc, char *argv[]
);


struct StringItem;
struct RASLCommand;

class Debugger {
public:
  virtual ~Debugger() {}

  virtual void set_context(Iter *context) = 0;
  virtual void set_string_items(const StringItem *items) = 0;
  virtual void insert_var(const RASLCommand *next) = 0;

  virtual FnResult handle_function_call(
    Iter begin, Iter end, RefalFunction *callee
  ) = 0;
};


} // namespace refalrts


#endif // RefalRTS_DIAGNOSTIC_DEFS_H
