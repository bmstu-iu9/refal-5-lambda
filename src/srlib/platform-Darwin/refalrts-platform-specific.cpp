#include <string.h>
#include "refalrts.h"
#include "refalrts-platform-specific.h"

#include <mach-o/dyld.h>  // _NSGetExecutablePath()
#include <stdint.h>  // uint32_t
#include <stdlib.h>  // realpath()

#include <errno.h>
#include <libproc.h>
#include <sys/types.h>
#include <unistd.h>

bool refalrts::platform_specific::get_main_module_name(
  char (&module_name)[refalrts::platform_specific::cModuleNameBufferLen]
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

void try_NSGetExecutablePath() {
  // Код взят отсюда: http://ru.stackoverflow.com/questions/376398/%D0%9F%D0\
  // %B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D0%B5-%D0%BE%D0%BA%D1%80\
  // %D1%83%D0%B6%D0%B5%D0%BD%D0%B8%D1%8F-%D0%B8-%D0%BF%D0%BE%D0%BB%D1%83%D1\
  // %87%D0%B5%D0%BD%D0%B8%D0%B5-%D0%B8%D0%BC%D0%B5%D0%BD%D0%B8-%D0%B8%D1%81\
  // %D0%BF%D0%BE%D0%BB%D0%BD%D1%8F%D0%B5%D0%BC%D0%BE%D0%B3%D0%BE-%D1%84%D0\
  // %B0%D0%B9%D0%BB%D0%B0-%D0%B2-mac-os-x
  char path[refalrts::platform_specific::cModuleNameBufferLen];
  uint32_t size = sizeof(path);

  if (_NSGetExecutablePath(path, &size) != 0) {
    printf(
      "ERROR: Buffer is too small to store the whole path string needs %u bytes\n",
      (unsigned) size
    );
    return;
  } 

  printf("_NSGetExecutablePath result: %s\n", path);

  // path => ./demo
  char *resolved = realpath(path, NULL);
  if (! resolved) {
    printf("ERROR: realpath: %s\n", strerror(errno));
    return;
  }
  // resolved => /Users/anon/something/onemorelevel/demo
  printf("_NSGetExecutablePath + realpath: %s\n", resolved);
  free(resolved);
}

void try_proc_pidpath() {
  // Код взят отсюда:
  // https://astojanov.wordpress.com/2011/11/16/mac-os-x-resolve-absolute-\
  // path-using-process-pid/
  char path[PROC_PIDPATHINFO_MAXSIZE];

  printf(
    "cModuleNameBufferLen %d\n"
    "PROC_PIDPATHINFO_MAXSIZE %d\n",
    (int) refalrts::platform_specific::cModuleNameBufferLen,
    (int) PROC_PIDPATHINFO_MAXSIZE
  );
  pid_t pid = getpid();
  int ret = proc_pidpath(pid, path, sizeof(path));
  if ( ret <= 0 ) {
    printf("PID %d: proc_pidpath();\n", pid);
    printf("ERROR: %s\n", strerror(errno));
  } else {
    printf("proc %d: %s\n", pid, path);
  }
}
