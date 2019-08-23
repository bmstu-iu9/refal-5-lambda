#ifndef RefalRTS_VM_API_H_
#define RefalRTS_VM_API_H_

#include "refalrts.h"


namespace refalrts {

class VM;

struct VMapi {
};

const struct VMapi *get_api(VM *vm);

}  // namespace refalrts

#endif  // RefalRTS_VM_API_H_
