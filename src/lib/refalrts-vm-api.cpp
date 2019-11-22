#include "refalrts-vm-api.h"
#include "refalrts-vm-base.h"

const struct refalrts::VMapi *
refalrts::get_api(refalrts::VM *vm) {
  return reinterpret_cast<refalrts::VMbase*>(vm)->api;
}
