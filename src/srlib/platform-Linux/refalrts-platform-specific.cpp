#include <unistd.h>
#include "refalrts-platform-specific.h"

bool refalrts::platform_specific::get_main_module_name(
  char (&module_name)[refalrts::platform_specific::cModuleNameBufferLen]
) {
  ssize_t len = readlink("/proc/self/exe", module_name, cModuleNameBufferLen);

  if (0 < len && len < cModuleNameBufferLen) {
    module_name[len] = '\0';
    return true;
  } else {
    return false;
  }
}
