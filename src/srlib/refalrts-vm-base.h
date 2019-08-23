#ifndef RefalRTS_VM_BASE_H_
#define RefalRTS_VM_BASE_H_

#include "refalrts-vm-api.h"


namespace refalrts {

struct VMbase {
  const struct VMapi *api;

  VMbase(const struct VMapi *api)
    : api(api)
  {
    /* пусто */
  }
};

}  // namespace refalrts


#endif  // RefalRTS_VM_BASE_H_
