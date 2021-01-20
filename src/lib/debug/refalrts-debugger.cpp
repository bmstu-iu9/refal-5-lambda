#include "refalrts-utils.h"
#include "refalrts-debugger.h"

#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <map>
#include <cstdarg>

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-vm
#include "refalrts-vm.h"

#define MAX_COMMAND_LEN 2048


//=============================================================================
// Пошаговый отладчик
//=============================================================================

//=============================================================================
//  Классы отладчика и вспомогательных структур
//=============================================================================

namespace refalrts {

namespace debugger {

static const char *const s_H = "h";
static const char *const s_HELP = "help";
static const char *const s_B = "b";
static const char *const s_BREAK = "break";
static const char *const s_BREAKPOINT = "breakpoint";
static const char *const s_CL = "cl";
static const char *const s_CLEAR = "clear";
static const char *const s_RM = "rm";
static const char *const s_STEPLIMIT = "steplimit";
static const char *const s_MEMORYLIMIT = "memorylimit";
static const char *const s_RUN = "run";
static const char *const s_R = "r";
/*static*/ const char *const s_STEP = "step";
static const char *const s_S = "s";
static const char *const s_NEXT = "next";
static const char *const s_N = "n";
static const char *const s_VARS = "vars";
static const char *const s_P = "p";
static const char *const s_PRINT = "print";
static const char *const s_ARG = "arg";
static const char *const s_CALL = "call";
static const char *const s_CALLEE = "callee";
static const char *const s_RES = "res";
static const char *const s_DOT = ".";
static const char *const s_TR = "tr";
static const char *const s_TRACE = "trace";
static const char *const s_NOTR = "notr";
static const char *const s_NOTRACE = "notrace";
static const char *const s_Q = "q";
static const char *const s_QUIT = "quit";
static const char *const s_V = "v";
static const char *const s_VIEW = "view";
static const char *const s_VIEWFIELD = "viewfield";
static const char *const s_ONELINE = "oneline";
static const char *const s_MULTILINE = "multiline";
static const char *const s_SKELETON = "skeleton";
static const char *const s_FULL = "full";

enum { cMaxLen = 1024 };
void close_out(FILE*);

// префиксы влияют на стиль печати
const char * opposite_prefix(const char * prefix) {
  if (strcmp(prefix, s_MULTILINE) == 0) {
    return s_ONELINE;
  }
  if (strcmp(prefix, s_ONELINE) == 0) {
    return s_MULTILINE;
  }
  if (strcmp(prefix, s_SKELETON) == 0) {
    return s_FULL;
  }
  if (strcmp(prefix, s_FULL) == 0) {
    return s_SKELETON;
  }
  return NULL;
}

} // namespace debugger

} // namespace refalrts

//=============================================================================
//  Определения методов отладчика и вспомогательных структур
//=============================================================================
//  Отладочная таблица переменных

std::pair<std::string, int>
refalrts::debugger::VariableDebugTable::parse_var_name(
  const char *full_name
) {
  char *dash_ptr = strchr((char*)full_name, '#');
  int depth = -1;
  char var_name[cMaxLen] = {0};
  if (dash_ptr != NULL) {
    size_t n = (dash_ptr-full_name);
    strncpy(var_name, full_name, n);
      // небольшой костыль, почему-то при n=4 копируются 5 символов
    var_name[n] = 0;
    depth = atoi(dash_ptr+1);
  } else {
    strcpy(var_name, full_name);
  }
  return std::pair<std::string, int>(std::string(var_name), depth);
}

void refalrts::debugger::VariableDebugTable::variable_bounds(
  refalrts::Iter& var_begin, refalrts::Iter& var_end, char type, int offset
) {
  var_begin = m_context[offset];
  switch (type) {
    case 's':
      var_end = var_begin;
      break;

    case 't':
      if (is_open_bracket(var_begin)) {
        var_end = var_begin->link_info;
      } else {
        var_end = var_begin;
      }
      break;

    case 'e':
      var_end = m_context[offset + 1];
      break;

    default:
      refalrts_switch_default_violation(type);
  }
}


void refalrts::debugger::VariableDebugTable::insert_var(
  const RASLCommand *next
) {
  if (m_first == 0) {
    m_first = next;
  }
  m_last = next;
}

void refalrts::debugger::VariableDebugTable::clear() {
  m_first = m_last = 0;
}

std::map<int, int> refalrts::debugger::VariableDebugTable::find_var(
  const char *var_name
) {
  std::pair<std::string, int> input_pair = parse_var_name(var_name);
  bool has_depth = input_pair.second >= 0;
  std::map<int, int> var_depth_offset_map;
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    std::pair<std::string, int> table_pair =
      parse_var_name(m_strings[it->val1].string);
    if (input_pair.first == table_pair.first) {
      if (has_depth) {
        if (table_pair.second == input_pair.second) {
          var_depth_offset_map.insert(
            std::pair<int, int>(input_pair.second, it->bracket)
          );
        }
      } else {
        var_depth_offset_map.insert(
          std::pair<int, int>(table_pair.second, it->bracket)
        );
      }
    }
  }
  return var_depth_offset_map;
}

void refalrts::debugger::VariableDebugTable::print(FILE *out) {
  fprintf(
    out,
    "==========================Variable debug table=========================\n"
  );
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    const char *var_name = m_strings[it->val1].string;
    fprintf(out, "  \"%.20s\"\t-  ", var_name);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->bracket);
    m_vm->print_seq(out, var_begin, var_end, false);
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

void refalrts::debugger::VariableDebugTable::print_var(
  const char *var_name, FILE *out
) {
  std::map<int, int> var_depth_offset_map = find_var(var_name);
  std::pair<std::string, int> var_parse_name = parse_var_name(var_name);
  for (
    std::map<int, int>::iterator it = var_depth_offset_map.begin();
    it != var_depth_offset_map.end();
    ++it
  ) {
    fprintf(out, "  %s#%d\t== ", var_parse_name.first.c_str(), it->first);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->second);
    m_vm->print_seq(out, var_begin, var_end, false);
  }
}

void refalrts::debugger::VariableDebugTable::set_string_items(
  const StringItem *items
) {
  m_strings = items;
}

void refalrts::debugger::VariableDebugTable::set_context(Iter *context) {
  m_context = context;
}

//=============================================================================
//  Таблица трассируемых функций

void refalrts::debugger::TracedFunctionTable::trace_func(
  const std::string &func_name, FILE *trace_out
) {
  m_traced_func_table.insert(
    std::pair<std::string, FILE*>(func_name, trace_out)
  );
}

void refalrts::debugger::TracedFunctionTable::notrace_func(
  const std::string &func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(func_name);
  if (found != m_traced_func_table.end()) {
    close_out(found->second);
    m_traced_func_table.erase(func_name);
  }
}

void refalrts::debugger::TracedFunctionTable::clear() {
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    close_out(it->second);
  }
  m_traced_func_table.clear();
}

bool refalrts::debugger::TracedFunctionTable::is_traced_func(
  const char *func_name
) {
  return
    m_traced_func_table.find(std::string(func_name)) !=
      m_traced_func_table.end();
}

FILE *refalrts::debugger::TracedFunctionTable::get_trace_outstream (
  const char * func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(std::string(func_name));
  if (found == m_traced_func_table.end()) {
    return 0;
  }
  return found->second;
}

void refalrts::debugger::TracedFunctionTable::print(FILE *out) {
  fprintf(
    out,
    "=========================Traced function table=========================\n"
  );
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    fprintf(out, "  \"%.20s\"", it->first.c_str());
    if (it->second == stdout) {
      fprintf(out, "\tin stdout\n");
    } else {
      fprintf(out, "\tin file\n");
    }
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

//=============================================================================
//  Множество точек прерывания

void refalrts::debugger::BreakpointSet::add_breakpoint(int step_numb) {
  m_step_breaks.insert(step_numb);
}

void refalrts::debugger::BreakpointSet::add_breakpoint(
  const std::string &func_name
) {
  m_func_breaks.insert(func_name);
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(int step_numb) {
  m_step_breaks.erase(step_numb);
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(
  const std::string &func_name
) {
  m_func_breaks.erase(func_name);
}

bool refalrts::debugger::BreakpointSet::is_breakpoint(
  int cur_step_numb, const char *cur_func_name
) {
  std::set<int>::iterator step_found = m_step_breaks.find(cur_step_numb);
  std::set<std::string>::iterator func_found =
    m_func_breaks.find(std::string(cur_func_name));
  return step_found != m_step_breaks.end() || func_found != m_func_breaks.end();
}

void refalrts::debugger::BreakpointSet::print(FILE *out) {
  fprintf(out, "Step breakpoint set:\n");
  for (
    std::set<int>::iterator step_it = m_step_breaks.begin();
    step_it != m_step_breaks.end();
    ++step_it
  ) {
    fprintf(out, "\t%d\n", *step_it);
  }
  fprintf(out, "Function breakpoint set:\n");
  for (
    std::set<std::string>::iterator func_it = m_func_breaks.begin();
    func_it != m_func_breaks.end();
    ++func_it
  ) {
    fprintf(out, "\t<%s ...>\n", func_it->c_str());
  }
}

//=============================================================================
//  Работа с потоками вывода и парсинг строки

FILE *refalrts::debugger::RefalDebugger::get_out(Cmd &cmd) {
  if (cmd.file.empty()) {
    return stdout;
  } else {
    FILE *out;
    if (cmd.isFileAppend) {
      out = fopen(cmd.file.c_str(), "a");
    } else {
      out = fopen(cmd.file.c_str(), "w");
    }
    if (!out) {
      return stdout;
    }
    return out;
  }
}

void refalrts::debugger::close_out(FILE *out) {
  if (out != stdout) {
    fclose(out);
  }
}

namespace {
// в стандартной библиотеке нет trim, весело :)
// обрезает пробельные символы в начале и в конце строки
std::string trim(std::string s) {
  const std::string spaces = " \n\r\t";
  size_t begin_of_not_spaces = s.find_first_not_of(spaces);
  s.erase(0, begin_of_not_spaces);
  size_t end_of_not_spaces = s.find_last_not_of(spaces);
  return s.erase(end_of_not_spaces + 1);
}

// в стандартной библиотеке нет split :)
std::vector<std::string> split(const std::string &s, char c) {
  std::string::const_iterator end = s.end();
  std::string::const_iterator start = end;

  std::vector<std::string> v;
  for (std::string::const_iterator it = s.begin(); it != end; ++it) {
    if (*it != c) {
      if (start == end) {
        start = it;
      }
      continue;
    }
    if (start != end) {
      v.push_back(std::string(start, it));
      start = end;
    }
  }
  if (start != end) {
    v.push_back(std::string(start, end));
  }
  return v;
}

} // безымянное namespace

const std::string refalrts::debugger::Cmd::toString() {
  std::string result;
  if (!prefixes.empty()) {
    std::string prefix_concat;
    for (size_t i = 0; i < prefixes.size(); i++) {
      if (i == prefixes.size() - 1) {
        result += prefixes[i];
      } else {
        result += prefixes[i] + " ";
      }
    }
    result += ": ";
  }
  result += cmd + " " + param;
  if (!file.empty()) {
    if (isFileAppend) {
      result += " >> " + file;
    } else {
      result += " > " + file;
    }
  }
  return result;
}

const bool refalrts::debugger::Cmd::hasParam() {
  return param.length() != 0;
}

const bool refalrts::debugger::Cmd::hasPrefix(const std::string &prefix) {
  for (size_t i = 0; i < prefixes.size(); i++) {
    if (prefixes[i] == prefix) {
      return true;
    }
  }
  return false;
}

const bool refalrts::debugger::Cmd::hasPrefix(const char *prefix) {
  return hasPrefix(std::string(prefix));
}

std::pair<std::string, std::string>
refalrts::debugger::RefalDebugger::parse_file_name(
  const std::string &fileString
) {
  if (fileString.empty()) {
    return std::make_pair("", "");
  }
  std::ostringstream file;
  std::ostringstream error;
  bool isQuotationMark = false;
  size_t i = 0;
  for (;;) {
    if (i >= fileString.size()) {
      if (isQuotationMark) {
        error << "unclosed quotation mark";
        return std::make_pair("", error.str());
      } else {
        return std::make_pair(file.str(), "");
      }
    }
    switch (fileString[i]) {
      // запрещенные символы для имен файлов Windows/Unix <>:;,?"*
      case '<':
      case '>':
      case ':':
      case ';':
      case ',':
      case '?':
      case '*':
        error << "file names cannot contain \"" << fileString[i] << "\"";
        return std::make_pair("", error.str());
      case '"':
        if (isQuotationMark) {
          return std::make_pair(file.str(), "");
        } else {
          isQuotationMark = true;
        }
        i++;
        continue;
      case '\\':
        if (i + 1 < fileString.size()) {
          i += 2; // чтобы не писать i+=2 в каждом из case
          switch (fileString[i - 1]) {
            case 'a':
              file << '\a';
              continue;
            case 'b':
              file << '\b';
              continue;
            case 'f':
              file << '\f';
              continue;
            case 'n':
              file << '\n';
              continue;
            case 'r':
              file << '\r';
              continue;
            case 't':
              file << '\t';
              continue;
            case 'v':
              file << '\v';
              continue;
            case '\\':
              file << '\\';
              continue;
            case '\'':
              file << '\'';
              continue;
            case '\"':
              file << '\"';
              continue;
            case '\?':
              file << '\?';
              continue;
            case 'x':
              if (i + 2 < fileString.size()) {
                unsigned int symbolCode;
                std::stringstream ss;
                std::string hexNum = fileString.substr(i, 2);
                ss << std::hex << hexNum;
                ss >> symbolCode;
                file << (char)symbolCode;
                i+=2; // в итоге от начала switch i+=4
                continue;
              } else {
                error << "unexpected end of file name";
                return std::make_pair("", error.str());
              }
            default:
              error << "unexpected escaped character \""
                    << fileString[i - 1] << "\"";
              return std::make_pair("", error.str());
          }
        } else {
          error << "file name unexpectedly ended on \"\\\"";
          return std::make_pair("", error.str());
        }
      default:
        file << fileString[i];
        i++;
        continue;
    }
  }
}

// разделяет строку на три части по схеме "prefix: cmd param"
// ни одна из частей не является обязательной
// возвращает пару (Cmd*, ошибка)
std::pair<refalrts::debugger::Cmd *, std::string>
  refalrts::debugger::RefalDebugger::parse_input_line(
  const std::string &line
) {
  std::string cmd, param;
  bool isFileAppend = false;
  std::vector<std::string> prefixes, parseErrors;
  size_t colon_pos = line.find(':');
  size_t begin_of_cmd_tail = 0;
  if (colon_pos != std::string::npos) {
    begin_of_cmd_tail = colon_pos + 1;
    prefixes = split(line.substr(0, colon_pos), ' ');
  }
  std::string cmd_with_param_and_file = trim(line.substr(begin_of_cmd_tail));
  size_t first_space_pos = cmd_with_param_and_file.find(' ');
  size_t out_stream_symbol_pos = cmd_with_param_and_file.find('>');
  if (first_space_pos > out_stream_symbol_pos) {
    first_space_pos = out_stream_symbol_pos;
  }
  cmd = cmd_with_param_and_file.substr(0, first_space_pos);
  if (out_stream_symbol_pos - first_space_pos > 1) {
    param = trim(
      cmd_with_param_and_file.substr(
        first_space_pos + 1,
        out_stream_symbol_pos - first_space_pos - 1
      )
    );
  }
  size_t skipSecondBracket = 0;
  if (
    out_stream_symbol_pos + 1 < cmd_with_param_and_file.size() &&
    cmd_with_param_and_file[out_stream_symbol_pos + 1] == '>'
    ) {
    isFileAppend = true;
    skipSecondBracket++;
  }
  std::pair<std::string, std::string> fileAndErr("", "");
  if (out_stream_symbol_pos != std::string::npos) {
    fileAndErr = parse_file_name(
      trim(
        cmd_with_param_and_file.substr(
          out_stream_symbol_pos + 1 + skipSecondBracket
        )
      )
    );
    if (!fileAndErr.second.empty()) {
      return std::make_pair((Cmd *) NULL, fileAndErr.second);
    }
    if (fileAndErr.first.empty()) {
      return std::make_pair(
        (Cmd *) NULL,
        "file name is required after \">\" symbol"
      );
    }
  }
  return std::make_pair(
    new Cmd(
      prefixes,
      cmd,
      param,
      fileAndErr.first,
      isFileAppend
    ),
    ""
  );
}

std::string refalrts::debugger::RefalDebugger::ask_for_param(
  const std::string &appeal
) {
  printf("%s\n", appeal.c_str());
  printf("param>");

  char param[MAX_COMMAND_LEN] = {0};
  fgets(param, MAX_COMMAND_LEN - 1, m_in);
  return trim(std::string(param));
}

//=============================================================================
//  Класс отладчика

bool refalrts::debugger::RefalDebugger::mem_cond() {
  bool res = m_vm->domain()->memory_use() > m_memory_limit;
  if (res) {
    m_memory_limit = -1;
    printf("stopped on memory overflow\n");
  }
  return res;
}

bool refalrts::debugger::RefalDebugger::next_cond(Iter begin) {
  m_dot = s_NEXT;
  bool stop = begin == m_next_expr;
  if (stop) {
    printf("stopped on next\n");
    m_next_expr = 0;
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::run_cond(RefalFunction *callee) {
  m_dot = s_RUN;
  bool stop = break_set.is_breakpoint(
    m_vm->step_counter(), callee == 0 ? "" : callee->name.name
  );
  if (stop) {
    printf("stopped on function breakpoint\n");
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::step_cond() {
  bool scond = (m_vm->step_counter() == m_step_numb);
  m_step_numb = m_vm->step_counter();
  m_dot = s_STEP;
  if (scond) {
    printf("stopped on step\n");
  }
  return scond;
}

bool refalrts::debugger::RefalDebugger::is_debug_stop(
  Iter begin, RefalFunction *callee
) {
  bool stop = step_cond();
  stop = next_cond(begin) || stop;
  stop = run_cond(callee) || stop;
  stop = mem_cond() || stop;
  return stop;
}

void refalrts::debugger::RefalDebugger::debug_trace(
  Iter begin, Iter end, RefalFunction *callee
) {
  if (callee != 0 && func_trace_table.is_traced_func(callee->name.name)) {
    FILE *trace_out = func_trace_table.get_trace_outstream(callee->name.name);
    fprintf(
      trace_out, "//==================================================\n"
    );
    fprintf(trace_out, "Scope function: ");
    print_callee_option(begin, end, trace_out);
    fprintf(trace_out, "\n");
    fprintf(trace_out, "Traced call:   ");
    m_vm->print_seq(trace_out, begin, end, false);
    fprintf(
      trace_out, "//==================================================\n"
    );
  }
}

void refalrts::debugger::RefalDebugger::set_step_res(Iter begin, Iter end) {
  if (begin != 0 && end != 0) {
    m_res_begin = begin->prev;
    m_res_end = end->next;
  }
}

void refalrts::debugger::RefalDebugger::help_option() {
  printf("===============Common help for all allowed options==============\n");
  printf("%s, %s\t\t\t%s\n", s_H, s_HELP, "print help for debugger options");
  printf(
    "%s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT,
    "set breakpoint by function name\n"
    "\t\t\t  or step number (\'#\'ddd)"
  );
  printf(
    "%s, %s, %s\t\t%s\n",
    s_CL, s_CLEAR, s_RM,
    "remove breakpoint from function by its name\n"
    "\t\t\t  or from step by its number (\'#\'ddd)"
  );
  printf(
    "%s\t\t%s\n",
    s_STEPLIMIT, "set limit for step number; there will be breakpoint"
  );
  printf(
    "%s\t\t%s\n",
    s_MEMORYLIMIT,
    "set limit for memory node number; there will be\n"
      "\t\t\t  breakpoint"
  );
  printf("%s, %s\t\t%s\n", s_TR, s_TRACE, "set up tracing for function");
  printf(
    "%s, %s\t\t%s\n", s_NOTR, s_NOTRACE, "remove tracing settings for function"
  );
  printf(
    "%s, %s\t\t\t%s\n", s_R, s_RUN, "continue program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_S, s_STEP, "make the only one step in program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_N, s_NEXT, "execute next active function until passive result"
  );
  printf("%s\t\t\t%s\n", s_VARS, "print the variable debug table");
  printf("%s, %s\t\t\t%s\n", s_P, s_PRINT, "print by parameter commands");
  printf(
    "  %s\t%s\n",
    "\'e.\'|\'t.\'|\'s.\'nnn", "print variable value by its name"
  );
  printf("  %s\t\t\t%s\n", s_CALL, "print current active expression");
  printf("  %s\t\t%s\n", s_CALLEE, "print the therm after \'<\'");
  printf(
    "  %s\t\t\t%s\n",
    s_ARG,
    "print the argument - the expression after\n"
    "\t\t\t  the callee-therm and before \'>\'"
  );
  printf("  %s\t\t\t%s\n", s_RES, "print the result of previous step");
  printf(
    "  %s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT, "print set of all placed breakpoints"
  );
  printf("  %s, %s\t\t%s\n", s_TR, s_TRACE, "print table of all traced functions");
  printf("%s\t\t\t%s\n", s_DOT, "repeat previous debugger command");
  printf("\n");
  printf("================================================================\n");
}

void refalrts::debugger::RefalDebugger::break_option(Cmd &cmd) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter function name (example: Prout) or step number (example: #23)"
    );
  }
  if (cmd.param[0] == '#') {
    int step_break = atoi(cmd.param.substr(1).c_str());
    break_set.add_breakpoint(step_break);
  } else {
    break_set.add_breakpoint(cmd.param);
  }
}

void refalrts::debugger::RefalDebugger::clear_option(Cmd &cmd) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter function name (example: Prout) or step number (example: #23)"
    );
  }
  if (cmd.param[0] == '#') {
    int step_break = atoi(cmd.param.substr(1).c_str());
    break_set.rm_breakpoint(step_break);
  } else {
    break_set.rm_breakpoint(cmd.param);
  }
}

void refalrts::debugger::RefalDebugger::step_limit_option(Cmd &cmd) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter step limit (example: 400)"
    );
  }
  int step_limit = atoi(cmd.param.c_str());
  break_set.add_breakpoint(m_vm->step_counter()+step_limit);
}

void refalrts::debugger::RefalDebugger::memory_limit_option(Cmd &cmd) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter memory limit in nodes (example: 500)"
    );
  }
  m_memory_limit = atoi(cmd.param.c_str());
}

void refalrts::debugger::RefalDebugger::trace_option(
  Cmd &cmd, FILE *out
) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter function name"
    );
  }
  func_trace_table.trace_func(cmd.param, out);
}

void refalrts::debugger::RefalDebugger::no_trace_option(Cmd &cmd) {
  if (!cmd.hasParam()) {
    cmd.param = ask_for_param(
      "enter function name"
    );
  }
  func_trace_table.notrace_func(cmd.param);
}

void refalrts::debugger::RefalDebugger::print_callee_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  Iter callee_end = callee;
  if (is_open_bracket(callee)) {
    callee_end = callee->link_info;
  }

  m_vm->print_seq(out, callee, callee_end, false);
}

void refalrts::debugger::RefalDebugger::print_arg_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  m_vm->print_seq(out, begin, end, false);
}

void refalrts::debugger::RefalDebugger::print_res_option(FILE *out) {
  if (m_res_begin != 0 && m_res_end != 0) {
    m_vm->print_seq(out, m_res_begin->next, m_res_end->prev, false);
  } else {
    fprintf(out, "[NONE]\n");
  }
}

void refalrts::debugger::RefalDebugger::print_view_field_option(FILE *out) {
  m_vm->print_view_field(out, true);
}

bool refalrts::debugger::RefalDebugger::print_var_option(
  const char *var_name, FILE *out
) {
  if (var_name[1] == '.') {
    switch(var_name[0]) {
      case 'e':
      case 's':
      case 't':
        var_debug_table.print_var(var_name, out);
        break;
      default:
        refalrts_switch_default_violation(var_name[0]);
    }
    // распозналось, как имя переменной
    // пусть и с неправильным типом в одной из веток
    close_out(out);
    return true;
  }
  // не может быть именем переменной
  close_out(out);
  return false;
}

namespace {

bool str_equal(const char *lhs, const char *rhs) {
  return strcmp(lhs, rhs) == 0;
}

bool oneOf(const std::string &s, int num_of_commands, ...) {
  va_list commands;
  va_start(commands, num_of_commands);
  for (int i = 0; i < num_of_commands; i++) {
    if (strcmp(s.c_str(), va_arg(commands, const char *)) == 0) {
      va_end(commands);
      return true;
    }
  }
  va_end(commands);
  return false;
}

} // безымянное namespace

refalrts::FnResult refalrts::debugger::RefalDebugger::debugger_loop(
  refalrts::Iter begin, refalrts::Iter end
) {
  char command[MAX_COMMAND_LEN] = {0};
  for ( ; ; ) {
    printf("debug>");
    fgets(command, MAX_COMMAND_LEN - 1, m_in);
    std::pair<Cmd *, std::string> cmdAndError = parse_input_line(
      std::string(command));
    if (!cmdAndError.second.empty()) {
      printf("Error: %s\n", cmdAndError.second.c_str());
      continue;
    }
    Cmd &cmd = *cmdAndError.first;
    if (oneOf(cmd.cmd, 2, s_H, s_HELP)) {
      help_option();
    } else if (oneOf(cmd.cmd, 3, s_B, s_BREAK, s_BREAKPOINT)) {
      break_option(cmd);
    } else if (oneOf(cmd.cmd, 3, s_CL, s_CLEAR, s_RM)) {
      clear_option(cmd);
    } else if (oneOf(cmd.cmd, 1, s_STEPLIMIT)) {
      step_limit_option(cmd);
    } else if (oneOf(cmd.cmd, 1, s_MEMORYLIMIT)) {
      memory_limit_option(cmd);
    } else if (oneOf(cmd.cmd, 2, s_TR, s_TRACE)) {
      trace_option(cmd, get_out(cmd));
    } else if (oneOf(cmd.cmd, 2, s_NOTR, s_NOTRACE)) {
      no_trace_option(cmd);
    } else if (
      oneOf(cmd.cmd, 2, s_R, s_RUN)
      || (str_equal(cmd.cmd.c_str(), s_DOT) && str_equal(m_dot, s_RUN))
    ) {
      m_dot = s_RUN;
      break;
    } else if (
      oneOf(cmd.cmd, 2, s_S, s_STEP)
      || (str_equal(cmd.cmd.c_str(), s_DOT) && str_equal(m_dot, s_STEP))
    ) {
      m_step_numb = m_vm->step_counter()+1;
      m_dot = s_STEP;
      break;
    } else if (oneOf(cmd.cmd, 2, s_Q, s_QUIT)) {
      m_vm->set_return_code(0);
      return cExit;
    } else if (
      oneOf(cmd.cmd, 2, s_N, s_NEXT)
      || (str_equal(cmd.cmd.c_str(), s_DOT) && str_equal(m_dot, s_NEXT))
    ) {
      m_next_expr = m_vm->stack_ptr();
      m_dot = s_NEXT;
      break;
    } else if (oneOf(cmd.cmd, 1, s_VARS)) {
      FILE *out = get_out(cmd);
      var_debug_table.print(out);
      close_out(out);
    } else if (oneOf(cmd.cmd, 2, s_P, s_PRINT)) {
      if (!cmd.hasParam()) {
        char appeal[512] = {0};
        sprintf(
          appeal,
          "available options to print are: %s, %s, %s, %s, %s, %s, %s, varname",
          s_ARG, s_CALL, s_CALL, s_RES, s_BREAKPOINT, s_TRACE, s_VIEWFIELD
        );
        cmd.param = ask_for_param(
          std::string(appeal)
        );
      }
      FILE *out = get_out(cmd);
      if (oneOf(cmd.param, 1, s_ARG)) {
        print_arg_option(begin, end, out);
      } else if (oneOf(cmd.param, 1, s_CALL)) {
        m_vm->print_seq(out, begin, end, true);
      } else if (oneOf(cmd.param, 1, s_CALLEE)) {
        print_callee_option(begin, end, out);
      } else if (oneOf(cmd.param, 1, s_RES)) {
        print_res_option(out);
      } else if (oneOf(cmd.param, 3, s_B, s_BREAK, s_BREAKPOINT)) {
        break_set.print(out);
      } else if (oneOf(cmd.param, 2, s_TR, s_TRACE)) {
        func_trace_table.print(out);
      } else if (oneOf(cmd.param, 3, s_V, s_VIEW, s_VIEWFIELD)){
        print_view_field_option(out);
      } else if (! print_var_option(cmd.param.c_str(), out)) {
        fprintf(
          stderr,
          "Unrecognised print option is found: %s \"%s\"\n",
          cmd.cmd.c_str(), cmd.param.c_str()
        );
      }
      close_out(out);
    } else {
      fprintf(
        stderr,
        "Unrecognised option: \"%s\"\n"
        "enter help to see the list of available commands\n",
        cmd.cmd.c_str()
      );
    }
  }
  return refalrts::cSuccess;
}

refalrts::FnResult
refalrts::debugger::RefalDebugger::handle_function_call(
  refalrts::Iter begin, refalrts::Iter end, refalrts::RefalFunction *callee
) {
  debug_trace(begin, end, callee);
  if (is_debug_stop(begin, callee)) {
    printf(
      "Step #%d; Function <%s ...>\n",
      m_vm->step_counter(), callee == 0 ? "" : callee->name.name
    );
    if (debugger_loop(begin, end) == refalrts::cExit) {
      return cExit;
    }
  }
  var_debug_table.clear();
  set_step_res(begin, end);

  return refalrts::cSuccess;
}

refalrts::Debugger *refalrts::debugger::create_debugger(refalrts::VM *vm) {
  return new RefalDebugger(vm);
}

int refalrts::debugger::find_debugger_flag(int argc, char **argv) {
  int i = 1;
  while (i < argc && ! str_equal(argv[i], "++enable+debugger++")) {
    ++i;
  }

  if (i < argc) {
    return i;
  } else {
    return -1;
  }
}
