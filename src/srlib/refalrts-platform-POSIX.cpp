#include <stdlib.h>
#include <sys/wait.h>

#include "refalrts-platform-specific.h"

int refalrts::api::system(const char *command) {
  int retcode = ::system(command);

  if (retcode != -1) {
    if (WIFEXITED(retcode)) {
      retcode = WEXITSTATUS(retcode);
    } else {
      retcode = -1;
    }
  }

  return retcode;
}
