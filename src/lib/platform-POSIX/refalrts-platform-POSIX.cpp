#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
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

const char *refalrts::api::platform = "POSIX";
const char refalrts::api::path_env_separator = ':';
const char *const refalrts::api::directory_separators = "/";

bool refalrts::api::is_directory_ended_to_separator(const char *directory) {
  size_t len = strlen(directory);
  return (len == 0) || directory[len - 1] == '/';
}

bool refalrts::api::is_single_file_name(const char *name) {
  return strchr(name, '/') == 0;
}

const char *refalrts::api::default_lib_extension = ".so";


#ifndef REFAL_5_LAMBDA_SKIP_GETTIME
#define REFAL_5_LAMBDA_SKIP_GETTIME 0
#endif  /* ifdef REFAL_5_LAMBDA_SKIP_GETTIME */


struct refalrts::api::ClockNs {
  struct timespec start_of_program;
#if REFAL_5_LAMBDA_SKIP_GETTIME
  struct timespec now;
#endif /* REFAL_5_LAMBDA_SKIP_GETTIME */
};

refalrts::api::ClockNs *refalrts::api::init_clock_ns() {
  ClockNs *res = new ClockNs;
  clock_gettime(CLOCK_REALTIME, &res->start_of_program);
#if REFAL_5_LAMBDA_SKIP_GETTIME
  memcpy(&res->now, &res->start_of_program, sizeof(res->now));
#endif  /* REFAL_5_LAMBDA_SKIP_GETTIME */
  return res;
}

double refalrts::api::clock_ns(refalrts::api::ClockNs *clk) {
  struct timespec now;
  struct timespec start = clk->start_of_program;

#if REFAL_5_LAMBDA_SKIP_GETTIME
  static long skip = 0;

  if (skip++ % REFAL_5_LAMBDA_SKIP_GETTIME == 0) {
    clock_gettime(CLOCK_REALTIME, &clk->now);
  }
  memcpy(&now, &clk->now, sizeof(now));
#else  /* REFAL_5_LAMBDA_SKIP_GETTIME */
  clock_gettime(CLOCK_REALTIME, &now);
#endif  /* REFAL_5_LAMBDA_SKIP_GETTIME */

  return (now.tv_sec - start.tv_sec) * 1.0e9 + (now.tv_nsec - start.tv_nsec);
}

void refalrts::api::free_clock_ns(refalrts::api::ClockNs *clk) {
  delete clk;
}

void *refalrts::api::load_os_module(
  const char *filename,
  refalrts::NativeModule **native_module,
  refalrts::LoadModuleEvent event, void *callback_data
) {
  void *module;
  void *pvar;
  ModuleLoadingErrorDetail detail;
  detail.module_name = filename;

  module = dlopen(filename, RTLD_NOW);
  if (! module) {
    detail.message = dlerror();
    event(cModuleLoadingError_CantLoadNativeModule, &detail, callback_data);
    return 0;
  }

  pvar = dlsym(module, "g_module");
  if (! pvar) {
    detail.message = dlerror();
    detail.func_name.name = "g_module";
    event(
      cModuleLoadingError_NativeModuleEntryPointNotFound,
      &detail, callback_data
    );
    return 0;
  }

  *native_module = static_cast<refalrts::NativeModule *>(pvar);
  return module;
}

void refalrts::api::unload_os_module(void *module) {
  dlclose(module);
}
