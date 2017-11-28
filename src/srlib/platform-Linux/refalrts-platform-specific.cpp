#include <unistd.h>
#include "refalrts-platform-specific.h"

//FROM refalrts-platform-POSIX

bool refalrts::api::get_main_module_name(
  char (&module_name)[refalrts::api::cModuleNameBufferLen]
) {
  ssize_t len = readlink("/proc/self/exe", module_name, cModuleNameBufferLen);

  if (0 < len && len < cModuleNameBufferLen) {
    module_name[len] = '\0';
    return true;
  } else {
    return false;
  }
}
