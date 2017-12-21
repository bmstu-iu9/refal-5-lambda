#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

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

bool refalrts::api::get_current_directory(char buffer[], size_t size) {
  return getcwd(buffer, size) != 0;
}

refalrts::RefalNumber refalrts::api::get_pid() {
  return static_cast<refalrts::RefalNumber>(::getpid());
}

refalrts::RefalNumber refalrts::api::get_ppid() {
  return static_cast<refalrts::RefalNumber>(::getppid());
}
