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

} // namespace api

} // namespace refalrts

#endif // RefalRTS_platform_specific_H_
