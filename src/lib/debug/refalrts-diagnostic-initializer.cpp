#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "refalrts-diagnostic-defs.h"

//FROM refalrts-debugger
/*
  Не используем #include "refalrts-debugger.h" ради снижения времени
  компиляции. В refalrts-debugger.h используются большие и тяжёлые
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
  enum Type { cString, cNumber, cBoolean_True, cBoolean_False } type;
  char param_name[cMaxLineLen + 1] = { '\0' };
  char string_value[cMaxLineLen + 1] = { '\0' };
  long int number_value;

  if (
    sscanf(line, "%[-_" AZaz "] = \"%[^\"]\"", param_name, string_value) == 2
  ) {
    type = cString;
  } else if (
    sscanf(line, "%[-_" AZaz "] = %li", param_name, &number_value) == 2
  ) {
    type = cNumber;
  } else {
    if (sscanf(line, "%[-_" AZaz "] = %s", param_name, string_value) == 2) {
      char boolean_value_str[cMaxLineLen + 1];
      normalize_name(boolean_value_str, string_value);
      if (strcmp(boolean_value_str, "true") == 0) {
        type = cBoolean_True;
      } else if (strcmp(boolean_value_str, "false") == 0) {
        type = cBoolean_False;
      } else {
        type = cString;
      }
    } else {
      fprintf(stderr, "%s:%d:bad config line:\n", filename, line_no);
      fprintf(stderr, "%s:%d:    %s\n", filename, line_no, line);
      return;
    }
  }

  normalize_name(param_name, param_name);

#define set_number_param(field) \
  if (strcmp(param_name, #field) == 0) { \
    if (type == cNumber) { \
      config->field = static_cast<unsigned long>(number_value); \
    } else { \
      bad_type(filename, line_no, #field, "number"); \
    } \
  }

#define set_boolean_param(field) \
  if (strcmp(param_name, #field) == 0) { \
    if (type == cNumber) { \
      config->field = !!number_value; \
    } else if (type == cBoolean_True) { \
      config->field = true; \
    } else if (type == cBoolean_False) { \
      config->field = false; \
    } else { \
      bad_type(filename, line_no, #field, "boolean"); \
    } \
  }

#define set_string_param(field) \
  if (strcmp(param_name, #field) == 0) { \
    if (type == cString) { \
      if (sizeof(config->field) > strlen(string_value)) { \
        strcpy(config->field, string_value); \
      } else { \
        fprintf( \
          stderr, "%s:%d:very long string parameter '%s': \"%s\"\n", \
          filename, line_no, #field, string_value \
        ); \
      } \
    } else { \
      bad_type(filename, line_no, #field, "string"); \
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

  if (strcmp(param_name, "enable_debugger") == 0) {
    if (config->enable_debugger) {
      config->debugger_factory = refalrts::debugger::create_debugger;
    }
  }

  set_string_param(dump_file);
#undef set_string_param
#undef set_boolean_param
#undef set_number_param
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
    if (*pline == '\n' || *pline == '#') {
      continue;
    }

    parse_config_line(config, filename, line_no, pline);
  }

  fclose(fin);
}

const char diagnostic_suffix[] = "@refal-5-lambda-diagnostics.txt";

void load_local_diagnostic_config(
  refalrts::DiagnosticConfig *config, char *argv0
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
