#include "refalrts-functions.h"
#include "refalrts-commands.h"

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


const refalrts::RASLCommand refalrts::RefalNativeFunction::run[] = {
  { refalrts::icPerformNative, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

const refalrts::RASLCommand refalrts::RefalSwap::run[] = {
  { refalrts::icProfileFunction, 0, 0, 0 },
  { refalrts::icIssueMemory, 8, 0, 0 },
  { refalrts::icInitB0_Lite, 0, 0, 0 },
  { refalrts::icCallSaveLeft, 0, 2, 0 },
  { refalrts::icFetchSwapHead, 5, 0, 4 },
  { refalrts::icFetchSwapInfoBounds, 5, 6, 0 },
  { refalrts::icResetAllocator, 0, 0, 0 },
  { refalrts::icSetResArgBegin, 0, 0, 0 },
  { refalrts::icSpliceEVar, 0, 0, 6 },
  { refalrts::icSwapSave, 5, 0, 2 },
  { refalrts::icSpliceToFreeList, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

const refalrts::RASLCommand refalrts::RefalEmptyFunction::run[] = {
  { refalrts::icFail, 0, 0, 0 }
};

const refalrts::RASLCommand refalrts::RefalCondFunctionRasl::run[] = {
  { refalrts::icPopState, 0, 0, 0 }
};

const refalrts::RASLCommand refalrts::RefalCondFunctionNative::run[] = {
  { refalrts::icMainLoopReturnSuccess, 0, 0, 0 }
};
