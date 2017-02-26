#include <mach-o/dyld.h>  // _NSGetExecutablePath()
#include <stdint.h>  // uint32_t

#include "refalrts-platform-specific.h"

bool refalrts::platform_specific::get_main_module_name(
  char (&module_name)[refalrts::platform_specific::cModuleNameBufferLen]
) {
  // https://developer.apple.com/legacy/library/documentation/Darwin\
  //   /Reference/ManPages/man3/dyld.3.html

  uint32_t size = cModuleNameBufferLen;
  return _NSGetExecutablePath(module_name, &size) == 0;
}
