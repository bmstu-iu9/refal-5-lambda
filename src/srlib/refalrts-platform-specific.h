#ifndef RefalRTS_platform_specific_H_
#define RefalRTS_platform_specific_H_

#include <stddef.h>
#include <stdio.h>

#include "refalrts.h"

namespace refalrts {

namespace api {

enum { cModuleNameBufferLen = FILENAME_MAX + 1 };

bool get_main_module_name(char (&module_name)[cModuleNameBufferLen]);

int system(const char *command);

bool get_current_directory(char buffer[], size_t size);

refalrts::RefalNumber get_pid();
refalrts::RefalNumber get_ppid();

struct stat;

const stat *stat_create(const char *filename);
signed stat_compare(const stat *left, const stat *right);
void stat_destroy(const stat *stat);

extern const char path_env_separator;
extern const char *const directory_separators;

bool is_directory_ended_to_separator(const char *directory);
bool is_single_file_name(const char *name);

extern const char *default_lib_extension;

} // namespace api

} // namespace refalrts

#endif // RefalRTS_platform_specific_H_
