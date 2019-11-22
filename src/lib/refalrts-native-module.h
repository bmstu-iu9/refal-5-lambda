#ifndef RefalRTS_NATIVE_MODULE_H_
#define RefalRTS_NATIVE_MODULE_H_

#include "refalrts.h"


namespace refalrts {

// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct NativeModule {
  size_t global_variables_memory;
  NativeReference *native_references;
};

}  // namespace refalrts

extern struct refalrts::NativeModule g_module;

#endif  // RefalRTS_NATIVE_MODULE_H_
