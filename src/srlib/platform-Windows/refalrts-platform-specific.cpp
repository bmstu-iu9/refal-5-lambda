#include <stdlib.h>
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
