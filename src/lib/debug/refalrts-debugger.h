#ifndef RefalRTS_DEBUGGER_H_
#define RefalRTS_DEBUGGER_H_

#include <map>
#include <set>
#include <string>
#include <utility>

#include "refalrts.h"
#include "refalrts-vm.h"


//=============================================================================
// Пошаговый отладчик
//=============================================================================

namespace refalrts {

namespace debugger {

extern const char *const s_STEP;

class VariableDebugTable {
  Iter *m_context;
  const StringItem *m_strings;
  const RASLCommand *m_first;
  const RASLCommand *m_last;
  VM *m_vm;

  std::pair<std::string, int> parse_var_name(const char *full_name);
  void variable_bounds(
    refalrts::Iter& var_begin, refalrts::Iter& var_end,
    char type, int offset
  );
public:
  VariableDebugTable(VM *vm)
    : m_context(0)
    , m_strings(0)
    , m_first(0)
    , m_last(0)
    , m_vm(vm)
  {
    /* пусто */
  }
  void insert_var(const RASLCommand *next);
  void clear();
  std::map<int, int> find_var(const char *var_name);
  void print(FILE *out);
  void print_var(const char *var_name, FILE *out);
  void set_string_items(const StringItem *items);
  void set_context(Iter *cont);
};

class TracedFunctionTable {
  std::map<std::string, FILE*> m_traced_func_table;
public:
  void trace_func(const std::string &func_name, FILE *trace_out);
  void notrace_func(const std::string &func_name);
  void clear();
  bool is_traced_func(const char *func_name);
  FILE *get_trace_outstream(const char *func_name);
  void print(FILE *out);
};

class BreakpointSet {
  std::set<int> m_step_breaks;
  std::set<std::string> m_func_breaks;
public:
  void add_breakpoint(int step_numb);
  void add_breakpoint(const std::string &func_name);
  void rm_breakpoint(int step_numb);
  void rm_breakpoint(const std::string &func_name);
  bool is_breakpoint(int cur_step_numb, const char *cur_func_name);
  void print(FILE *out = stdout);
};

// класс для удобной работой с введеной пользователем командой
class Cmd {
public:
  std::vector<std::string> prefixes;
  std::string cmd, param, file;
  bool isFileAppend;

  Cmd(
    std::vector<std::string> &prefixes,
    std::string &cmd,
    std::string &param,
    std::string &file,
    bool isFileAppend
  ) :
    prefixes(prefixes),
    cmd(cmd),
    param(param),
    file(file),
    isFileAppend(isFileAppend)
  {
    /* пусто */
  }

  Cmd() : isFileAppend(false) {};

  const std::string toString();

  const bool hasParam();

  const bool hasPrefix(const std::string &prefix);

  const bool hasPrefix(const char *prefix);
};

class RefalDebugger: public Debugger {
  const char *m_dot;
  unsigned m_step_numb;
  unsigned m_memory_limit;
  FILE *m_in;
  Iter m_next_expr;
  Iter m_res_begin;
  Iter m_res_end;
  VM *m_vm;
  // параметры печати
  bool m_multiline;
  bool m_skeleton;

public:
  VariableDebugTable var_debug_table;
  TracedFunctionTable func_trace_table;
  BreakpointSet break_set;

  RefalDebugger(VM *vm)
    : m_dot(s_STEP)
    , m_step_numb(0)
    , m_memory_limit(-1)
    , m_in(stdin)
    , m_next_expr(0)
    , m_res_begin(0)
    , m_res_end(0)
    , m_vm(vm)
    , m_multiline(false)
    , m_skeleton(true)
    , var_debug_table(m_vm)
  {
    /* пусто */
  }
  ~RefalDebugger() {
    func_trace_table.clear();
  }

  std::string ask_for_param(const std::string &appeal);
  FILE *get_out(Cmd &cmd);
  bool next_cond(Iter begin);
  bool run_cond(RefalFunction *callee);
  bool step_cond();
  bool mem_cond();

  bool is_debug_stop(Iter begin, RefalFunction *callee);
  void debug_trace(Iter begin, Iter end, RefalFunction *callee);
  void set_step_res(Iter begin, Iter end);

  void help_option();
  void break_option(Cmd &cmd);
  void clear_option(Cmd &cmd);
  void step_limit_option(Cmd &cmd);
  void memory_limit_option(Cmd &cmd);
  void trace_option(Cmd &cmd, FILE *out = stdout);
  void no_trace_option(Cmd &cmd);
  void print_callee_option(Iter begin, Iter end, FILE *out = stdout);
  void print_arg_option(Iter begin, Iter end, FILE *out = stdout);
  void print_res_option(FILE *out);
  void print_view_field_option(FILE *out, bool multiline, bool skeleton);
  bool print_var_option(const char *var_name, FILE *out = stdout);
  void backtrace_option(FILE *out, bool multiline, bool skeleton);
  bool isCmdMultiline(Cmd &cmd);
  bool isCmdSkeleton(Cmd &cmd);
  refalrts::FnResult debugger_loop(Iter begin, Iter end);

  static std::pair<refalrts::debugger::Cmd, std::string>
    parse_input_line(const std::string &line);
  static std::pair<std::string, std::string>
    parse_file_name(const std::string &fileString);

  virtual void set_context(Iter *context) {
    var_debug_table.set_context(context);
  }

  virtual void set_string_items(const StringItem *items) {
    var_debug_table.set_string_items(items);
  }

  virtual void insert_var(const RASLCommand *next) {
    var_debug_table.insert_var(next);
  }

  virtual refalrts::FnResult handle_function_call(
    Iter begin, Iter end, RefalFunction *callee
  );
};

Debugger *create_debugger(VM *vm);

int find_debugger_flag(int argc, char **argv);

} // namespace debugger

}  // namespace refalrts


#endif  // RefalRTS_DEBUGGER_H_
