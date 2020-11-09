#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "refalrts-diagnostic-defs.h"

//FROM refalrts-debugger
/*
  Не используем #include "refalrts-debugger.h" ради снижения времени
  компиляции. В refalrts-debugger.h используются большие и тяжёлые
  заголовки STL, а нам нужна только функция-конструктор.
*/
namespace refalrts {
namespace debugger {

Debugger *create_debugger(VM *vm);

}  // namespace debugger
}  // namespace refalrts

//FROM refalrts-platform-specific
#include "refalrts-platform-specific.h"


#define AZ "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define az "abcdefghijklmnopqrstuvwxyz"
#define AZaz AZ az


namespace {

void normalize_name(char *dest, const char *src) {
  while (*src) {
    if (*src == '-') {
      *dest = '_';
    } else {
      *dest = static_cast<char>(tolower(*src));
    }
    ++dest;
    ++src;
  }
  *dest = '\0';
}

void bad_type(
  const char *filename, int line_no, const char *param, const char *type
) {
  fprintf(
    stderr, "%s:%d:parameter '%s' expects %s value\n",
    filename, line_no, param, type
  );
}

enum { cMaxLineLen = 2000 };

void parse_config_line(
  refalrts::DiagnosticConfig *config,
  const char *filename, int line_no, const char *line
) {
  using refalrts::DiagnosticConfig;

  char param_name[cMaxLineLen + 1] = { '\0' };
  char param_value[cMaxLineLen + 1] = { '\0' };
  int value_pos;

  if (sscanf(line, "%[-_" AZaz "] = %n", param_name, &value_pos) == 1) {
    /* %n не считается, поэтому 1, а не 2, ISO/IEC 9899-1990 (C89), 7.9.6.2 */
    strcpy(param_value, line + value_pos);
    DiagnosticConfig::ParseError res =
      config->set_parameter(param_name, param_value);

    switch (res) {
      case DiagnosticConfig::cParseError_Success:
        /* ничего не делаем */
        break;

      case DiagnosticConfig::cParseError_NotANumber:
        bad_type(filename, line_no, param_name, "number");
        break;

      case DiagnosticConfig::cParseError_NotABool:
        bad_type(filename, line_no, param_name, "boolean");
        break;

      case DiagnosticConfig::cParseError_VeryLongString:
        fprintf(
          stderr, "%s:%d:very long string parameter '%s': \"%s\"\n",
          filename, line_no, param_name, param_value
        );
        break;

      default:
        refalrts_switch_default_violation(res);
    }
  } else {
    fprintf(stderr, "%s:%d:bad config line:\n", filename, line_no);
    fprintf(stderr, "%s:%d:    %s\n", filename, line_no, line);
  }
}

void read_config(refalrts::DiagnosticConfig *config, const char *filename) {
  FILE *fin = fopen(filename, "rt");
  if (! fin) {
    return;
  }

  char line[cMaxLineLen + 1] = { '\0' };
  for (int line_no = 1; fgets(line, cMaxLineLen, fin); ++line_no) {
    if (! strchr(line, '\n') && ! feof(fin)) {
      fprintf(stderr, "%s:%d:very long line\n", filename, line_no);
      int c;
      do {
        c = fgetc(fin);
      } while (c != EOF && c != '\n');
    }

    const char *pline = line;
    while (*pline && isspace(*pline)) {
      ++pline;
    }

    // Пустая строка или комментарий
    if (*pline == '\0' || *pline == '#') {
      continue;
    }

    parse_config_line(config, filename, line_no, pline);
  }

  fclose(fin);
}

const char diagnostic_suffix[] = "@refal-5-lambda-diagnostics.ini";

void load_local_diagnostic_config(
  refalrts::DiagnosticConfig *config, const char *argv0
) {
  const char *slash_pos = 0;
  for (const char *p = argv0; *p != '\0'; ++p) {
    if (strchr(refalrts::api::directory_separators, *p)) {
      slash_pos = p;
    }
  }

  if (slash_pos != 0 && *(slash_pos + 1) == '\0') {
    slash_pos = 0;
  }

  const char *exe_file_name = slash_pos != 0 ? slash_pos + 1 : argv0;
  char local_diagnostic_file[FILENAME_MAX + 1] = { '\0' };
  if (strlen(exe_file_name) + strlen(diagnostic_suffix) < FILENAME_MAX) {
    strcpy(local_diagnostic_file, exe_file_name);
    strcat(local_diagnostic_file, diagnostic_suffix);
    read_config(config, local_diagnostic_file);
  }
}

}  // unnamed namespace


void refalrts::init_diagnostic_config(
  refalrts::DiagnosticConfig *config, int *argc, char *argv[]
) {
  // В диагностическом режиме по умолчанию не показываем cookies
  config->show_cookies = false;

  int delta = 0;
  for (int i = 1; i < *argc; ++i) {
    const char config_prefix[] = "++diagnostic+config=";
    size_t config_prefix_len = strlen(config_prefix);
    if (strncmp(argv[i], config_prefix, config_prefix_len) == 0) {
      read_config(config, argv[i] + config_prefix_len);
      delta += 1;
    } else {
      argv[i - delta] = argv[i];
    }
  }
  *argc -= delta;
  argv[*argc] = 0;

  if (delta == 0) {
    // Чтение глобальных настроек диагностики
    read_config(config, diagnostic_suffix);

    // Чтение локальных настроек диагностики
    load_local_diagnostic_config(config, argv[0]);
  }
}


// Фальшивый отладчик
class refalrts::DiagnosticConfig::NullDebugger: public refalrts::Debugger {
public:
  virtual void set_context(Iter* /*context*/) {
    /* пусто */
  }

  virtual void set_string_items(const StringItem * /*items*/) {
    /* пусто */
  }

  virtual void insert_var(const RASLCommand * /*next*/) {
    /* пусто */
  }

  virtual FnResult handle_function_call(
    Iter /*begin*/, Iter /*end*/, RefalFunction * /*callee*/
  ) {
    return cSuccess;
  }
};

refalrts::Debugger*
refalrts::DiagnosticConfig::create_null_debugger(refalrts::VM * /*vm*/) {
  return new NullDebugger;
}

namespace {

char *trim(char *str) {
  while (isspace(*str)) {
    ++str;
  }

  size_t len = strlen(str);
  while (len > 0 && isspace(str[len - 1])) {
    --len;
  }
  str[len] = '\0';

  return str;
}

}  // unnamed namespace

refalrts::DiagnosticConfig::ParseError
refalrts::DiagnosticConfig::set_parameter(char *name, char *value) {
  enum Type { cString, cNumber, cBoolean_True, cBoolean_False } type;
  long int number_value;

  name = trim(name);
  value = trim(value);
  size_t value_len = strlen(value);
  bool is_quoted_string = value_len > 2
    && value[0] == '"'
    && value[value_len - 1] == '"'
    && strchr(value, '"') == (value + value_len - 1);

  if (is_quoted_string) {
    value[value_len - 1] = '\0';
    value += 1;
    type = cString;
  } else if (sscanf(value, "%li", &number_value) == 1) {
    type = cNumber;
  } else {
    enum { BOOL_LEN = sizeof("false") };
    char boolean_value_str[BOOL_LEN + 1];

    strncpy(boolean_value_str, value, BOOL_LEN);
    boolean_value_str[BOOL_LEN] = '\0';
    normalize_name(boolean_value_str, boolean_value_str);

    if (strcmp(boolean_value_str, "true") == 0) {
      type = cBoolean_True;
    } else if (strcmp(boolean_value_str, "false") == 0) {
      type = cBoolean_False;
    } else {
      type = cString;
    }
  }

  normalize_name(name, name);

#define set_number_param(field) \
  if (strcmp(name, #field) == 0) { \
    if (type == cNumber) { \
      this->field = static_cast<unsigned long>(number_value); \
    } else { \
      return cParseError_NotANumber; \
    } \
  }

#define set_boolean_param(field) \
  if (strcmp(name, #field) == 0) { \
    if (type == cNumber) { \
      this->field = !!number_value; \
    } else if (type == cBoolean_True) { \
      this->field = true; \
    } else if (type == cBoolean_False) { \
      this->field = false; \
    } else { \
      return cParseError_NotABool; \
    } \
  }

#define set_string_param(field) \
  if (strcmp(name, #field) == 0) { \
    if (sizeof(this->field) > strlen(value)) { \
      strcpy(this->field, value); \
    } else { \
      return cParseError_VeryLongString; \
    } \
  }

  set_number_param(idents_limit);
  set_number_param(memory_limit);
  set_number_param(step_limit);
  set_number_param(start_step_trace);
  set_boolean_param(print_statistics);
  set_boolean_param(dump_free_list);
  set_boolean_param(show_cookies);
  set_boolean_param(show_hidden_steps);
  set_boolean_param(enable_debugger);
  set_boolean_param(enable_profiler);

  if (strcmp(name, "enable_debugger") == 0) {
    if (enable_debugger) {
      debugger_factory = refalrts::debugger::create_debugger;
    }
  }

  set_string_param(dump_file);
#undef set_string_param
#undef set_boolean_param
#undef set_number_param

  return cParseError_Success;
}

const char *refalrts::DiagnosticConfig::help =
  "idents-limit [number], default 0\n"
  "  Interrupting the program after allocation of this number of identifiers\n\n"
  "memory-limit [number], default 0\n"
  "  Interrupting the program after allocation of this number of nodes\n\n"
  "step-limit [number], default 0\n"
  "  Interrupting the program after performing of this number of steps\n\n"
  "start-step-trace [number], default 0\n"
  "  Start output view field snapshots (trace) after this number of steps\n\n"
  "print-statistics [boolean], default false\n"
  "  Printing out statistics when the program ends\n\n"
  "dump-free-list [boolean], default false\n"
  "  Output contents of the free notes list in the emergency dump\n\n"
  "show-cookies [boolean], default true\n"
  "  Show scope cookies in the emergency dump\n\n"
  "show-hidden-steps [boolean], default false\n"
  "  Show steps of __INIT, __FINAL and between __Step-Start and __Step-End in "
  "trace\n\n"
  "enable-debugger [boolean], default false\n"
  "  Enables interactive debugger\n\n"
  "enable-profiler [boolean], default false\n"
  "  Enables per function profiling\n\n"
  "dump-file [string], default \"\"\n"
  "  Filename of the dump file for emergency dump and debug trace\n\n"
  "Zero for number options means disabling its behaviour\n";
