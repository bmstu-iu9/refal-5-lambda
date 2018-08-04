#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
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

struct refalrts::api::stat {
  struct ::stat stat;
};

const refalrts::api::stat *
refalrts::api::stat_create(const char *filename) {
  refalrts::api::stat *api_stat = new ::refalrts::api::stat();
  int res = ::stat(filename, &api_stat->stat);
  if (res == 0) {
    return api_stat;
  } else {
    delete api_stat;
    return 0;
  }
}

signed refalrts::api::stat_compare(
  const refalrts::api::stat *left, const refalrts::api::stat *right
) {
  if (left->stat.st_dev < right->stat.st_dev) {
    return -1;
  } else if (left->stat.st_dev > right->stat.st_dev) {
    return +1;
  } else if (left->stat.st_ino < right->stat.st_ino) {
    return -1;
  } else if (left->stat.st_ino > right->stat.st_ino) {
    return +1;
  } else {
    return 0;
  }
}

void refalrts::api::stat_destroy(const refalrts::api::stat *stat) {
  delete stat;
}

const char refalrts::api::path_env_separator = ':';
const char *const refalrts::api::directory_separators = "/";

bool refalrts::api::is_directory_ended_to_separator(const char *directory) {
  size_t len = strlen(directory);
  return (len == 0) || directory[len - 1] == '/';
}

bool refalrts::api::is_single_file_name(const char *name) {
  return strchr(name, '/') == 0;
}
