#include <string.h>
#include "refalrts.h"
#include "refalrts-platform-specific.h"

bool refalrts::api::get_main_module_name(
  char (&module_name)[refalrts::api::cModuleNameBufferLen]
) {
  const char *argv0 = refalrts::arg(0);
  size_t len = strlen(argv0);

  if (len < cModuleNameBufferLen) {
    memcpy(module_name, argv0, len + 1);  // Включая концевой нуль
    return true;
  } else {
    return false;
  }
}
