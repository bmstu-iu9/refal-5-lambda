#ifndef RefalRTS_platform_specific_H_
#define RefalRTS_platform_specific_H_

#include <stdio.h>

namespace refalrts {

namespace platform_specific {

enum { cModuleNameBufferLen = FILENAME_MAX + 1 };

bool get_main_module_name(char (&module_name)[cModuleNameBufferLen]);

} // namespace platform_specific

} // namespace refalrts

#endif // RefalRTS_platform_specific_H_
