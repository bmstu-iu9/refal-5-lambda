#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#include "refalrts-platform-specific.h"

bool refalrts::api::get_main_module_name(
  char (&module_name)[refalrts::api::cModuleNameBufferLen]
) {
  DWORD length = GetModuleFileName(NULL, module_name, cModuleNameBufferLen);

  return (length != 0)
    && (
      length < cModuleNameBufferLen
      || (
        // На ОС > Windows XP функция при недостаточном размере буфера
        // возвращает этот код ошибки.
        GetLastError() != ERROR_INSUFFICIENT_BUFFER
        // Windows XP не устанавливает кода ошибки, но при этом заполняет
        // буфер без добавления концевого нуля
        && module_name[cModuleNameBufferLen - 1] == '\0'
      )
    );
}

int refalrts::api::system(const char *command) {
  return ::system(command);
}

bool refalrts::api::get_current_directory(char buffer[], size_t size) {
  DWORD result = GetCurrentDirectory(static_cast<DWORD>(size), buffer);

  return (0 != result && result < size);
}

refalrts::RefalNumber refalrts::api::get_pid() {
  return static_cast<refalrts::RefalNumber>(GetCurrentProcessId());
}

refalrts::RefalNumber refalrts::api::get_ppid() {
  return static_cast<refalrts::RefalNumber>(GetCurrentProcessId());
}

struct refalrts::api::stat {
  BY_HANDLE_FILE_INFORMATION info;
};

const refalrts::api::stat *
refalrts::api::stat_create(const char *filename) {
  HANDLE h = CreateFile(
    filename,
    GENERIC_READ,
    FILE_SHARE_READ | FILE_SHARE_WRITE,
    NULL,
    OPEN_EXISTING,
    FILE_ATTRIBUTE_NORMAL,
    NULL
  );

  if (h == INVALID_HANDLE_VALUE) {
    return 0;
  }

  refalrts::api::stat *api_stat = new ::refalrts::api::stat();
  BOOL res = GetFileInformationByHandle(h, &api_stat->info);
  CloseHandle(h);

  if (res) {
    return api_stat;
  } else {
    delete api_stat;
    return 0;
  }
}

signed refalrts::api::stat_compare(
  const refalrts::api::stat *left, const refalrts::api::stat *right
) {
  if (left->info.dwVolumeSerialNumber < right->info.dwVolumeSerialNumber) {
    return -1;
  } else if (left->info.dwVolumeSerialNumber > right->info.dwVolumeSerialNumber) {
    return +1;
  } else if (left->info.nFileIndexHigh < right->info.nFileIndexHigh) {
    return -1;
  } else if (left->info.nFileIndexHigh > right->info.nFileIndexHigh) {
    return +1;
  } else if (left->info.nFileIndexLow < right->info.nFileIndexLow) {
    return -1;
  } else if (left->info.nFileIndexLow > right->info.nFileIndexLow) {
    return +1;
  } else {
    return 0;
  }
}

void refalrts::api::stat_destroy(const refalrts::api::stat *stat) {
  delete stat;
}

const char refalrts::api::path_env_separator = ';';
const char *const refalrts::api::directory_separators = "\\/";

bool refalrts::api::is_directory_ended_to_separator(const char *directory) {
  size_t len = strlen(directory);
  return (len == 0) || directory[len - 1] == '/' || directory[len - 1] == '\\'
    || (len == 2 && directory[1] == ':');
}

bool refalrts::api::is_single_file_name(const char *name) {
  size_t len = strlen(name);

  return
    // путь не содержит разделителей каталогов
    strchr(name, '/') == 0 && strchr(name, '\\') == 0
    // и не начинается с буквы диска (c:filename.ext)
    && ! (len >= 2 && isalpha(name[0]) && name[1] == ':');
}

const char *refalrts::api::default_lib_extension = ".dll";

#if defined(REFAL_5_LAMBDA_USE_WINDOWS_9X)

refalrts::api::ClockNs *refalrts::api::init_clock_ns() {
  return 0;
}

double refalrts::api::clock_ns(refalrts::api::ClockNs *) {
  return clock() * 1e9 / CLOCKS_PER_SEC;
}

void refalrts::api::free_clock_ns(refalrts::api::ClockNs *) {
  /* ничего не делаем */
}

#else /* defined(REFAL_5_LAMBDA_USE_WINDOWS_9X) */

struct refalrts::api::ClockNs {
  ULARGE_INTEGER start_of_program;
};

refalrts::api::ClockNs *refalrts::api::init_clock_ns() {
  ClockNs *res = new ClockNs;
  GetSystemTimeAsFileTime((LPFILETIME) &res->start_of_program);
  return res;
}

double refalrts::api::clock_ns(refalrts::api::ClockNs *clk) {
  ULARGE_INTEGER now;
  ULARGE_INTEGER start = clk->start_of_program;

  GetSystemTimeAsFileTime((LPFILETIME) &now);

#if defined(REFAL_5_LAMBDA_COMPILER_DONT_SUPPORT_64)

  double hi_diff =
    (now.u.LowPart >= start.u.LowPart)
    ? (now.u.HighPart - start.u.HighPart)
    : (now.u.HighPart - start.u.HighPart - 1);
  double low_diff = now.u.LowPart - start.u.LowPart;

  return (hi_diff * 4294967296 + low_diff) * 100;

#else /* defined(REFAL_5_LAMBDA_COMPILER_DONT_SUPPORT_64) */

  return (now.QuadPart - start.QuadPart) * 100.0;

#endif /* defined(REFAL_5_LAMBDA_COMPILER_DONT_SUPPORT_64) */
}

void refalrts::api::free_clock_ns(refalrts::api::ClockNs *clk) {
  delete clk;
}

#endif /* defined(REFAL_5_LAMBDA_USE_WINDOWS_9X) */
