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
  VM::Stack<Iter> *m_context;
  const StringItem *m_strings;
  const RASLCommand *m_first;
  const RASLCommand *m_last;

  std::pair<std::string, int> parse_var_name(const char *full_name);
  void variable_bounds(
    refalrts::Iter& var_begin, refalrts::Iter& var_end,
    char type, int offset
  );
public:
  VariableDebugTable()
    : m_context(0)
    , m_strings(0)
    , m_first(0)
    , m_last(0)
  {
    /* пусто */
  }
  void insert_var(const RASLCommand *next);
  void clear();
  std::map<int, int> find_var(const char *var_name);
  void print(FILE *out);
  void print_var(const char *var_name, FILE *out);
  void set_string_items(const StringItem *items);
  void set_context(VM::Stack<Iter>& cont);
};

class TracedFunctionTable {
  std::map<std::string, FILE*> m_traced_func_table;
public:
  void trace_func(const char *func_name, FILE *trace_out);
  void notrace_func(const char *func_name);
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
  void add_breakpoint(const char *func_name);
  void rm_breakpoint(int step_numb);
  void rm_breakpoint(const char *func_name);
  bool is_breakpoint(int cur_step_numb, const char *cur_func_name);
  void print(FILE *out = stdout);
};

class RefalDebugger: public VM::Debugger {
  const char *m_dot;
  unsigned m_step_numb;
  unsigned m_memory_limit;
  FILE *m_in;
  Iter m_next_expr;
  Iter m_res_begin;
  Iter m_res_end;
public:
  VariableDebugTable var_debug_table;
  TracedFunctionTable func_trace_table;
  BreakpointSet break_set;

  RefalDebugger()
    : m_dot(s_STEP)
    , m_step_numb(0)
    , m_memory_limit(-1)
    , m_in(stdin)
    , m_next_expr(0)
    , m_res_begin(0)
    , m_res_end(0)
  {
    /* пусто */
  }
  ~RefalDebugger() {
    func_trace_table.clear();
  }

  FILE *get_out();
  bool next_cond(Iter begin);
  bool run_cond(RefalFunction *callee);
  bool step_cond();
  bool mem_cond();

  bool is_debug_stop(Iter begin, RefalFunction *callee);
  void debug_trace(Iter begin, Iter end, RefalFunction *callee);
  void set_step_res(Iter begin, Iter end);

  void help_option();
  void break_option(const char *arg);
  void clear_option(const char *arg);
  void print_callee_option(Iter begin, Iter end, FILE *out = stdout);
  void print_arg_option(Iter begin, Iter end, FILE *out = stdout);
  void print_res_option(FILE *out);
  bool print_var_option(const char *var_name, FILE *out = stdout);
  refalrts::FnResult debugger_loop(Iter begin, Iter end);

  enum RedirectionType {
    cRedirectionType_None = -1,
    cRedirectionType_Write = 0,
    cRedirectionType_Append = 1,
  };

  enum {
    cBadHexVal = -1
  };

  static RedirectionType parse_redirection(char **line);
  static void skip_space (char **ptr);
  static char *skip_nonspace (char *ptr);
  static RedirectionType check_bracket (char **ptr);
  static void write_byte (char **from, char **out, char **str_p, char val);
  static int parse2hex (unsigned char *in);
  static bool quotation_mark_parse(char *from, char *out);

  virtual void set_context(VM::Stack<Iter>& context) {
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

  static VM::Debugger *create(VM * /*vm*/) {
    return new RefalDebugger();
  }
};

int find_debugger_flag(int argc, char **argv);

extern bool g_enable_debug;

inline bool enable_debug() {
  return g_enable_debug;
}

inline void set_enable_debug() {
  g_enable_debug = true;
}

} // namespace debugger

}  // namespace refalrts


#endif  // RefalRTS_DEBUGGER_H_
