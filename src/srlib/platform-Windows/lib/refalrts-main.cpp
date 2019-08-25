#include <windows.h>
#include "refalrts-native-module.h"

//FROM refalrts

extern "C"
#ifdef __BORLANDC__
__declspec(dllexport)
#endif
struct refalrts::NativeModule *
WINAPI RefalModuleEntryPoint(void) {
  return &g_module;
}
