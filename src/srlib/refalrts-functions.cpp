#include "refalrts-functions.h"
#include "refalrts-commands.h"

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


void refalrts::RefalFunction::register_me() {
  bool successed = module->register_function(this);

  if (! successed) {
    fprintf(
      stderr, "INTERNAL ERROR: function redeclared: %s#%u:%u\n",
      name.name, name.cookie1, name.cookie2
    );
    exit(156);
  }
}

refalrts::FunctionTable::FunctionTable(
  refalrts::Module *module,
  refalrts::UInt32 cookie1, refalrts::UInt32 cookie2,
  refalrts::FunctionTableItem items[]
)
  : cookie1(cookie1)
  , cookie2(cookie2)
  , items(items)
{
  module->register_(this);
}

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
