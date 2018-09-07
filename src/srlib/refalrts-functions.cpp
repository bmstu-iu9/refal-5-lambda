#include "refalrts-functions.h"
#include "refalrts-commands.h"

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


void refalrts::RefalFunction::deactivate() {
  rasl = RefalEmptyFunction::run;
}

const refalrts::RASLCommand refalrts::RefalNativeFunction::run[] = {
  { refalrts::icPerformNative, 0, 0, 0 },
  { refalrts::icNextStep, 0, 0, 0 }
};

/*
  Поле зрения имеет вид
  [FIRST] собственно поле зрения [SWAP HEDGE] область статических ящиков [LAST]

  В области статических ящиков последние представлены в виде скобочных термов
  <SwapName значение>

  Дескриптор функции статического ящика указывает на открывающую угловую
  скобку, либо на ноль.
*/
const refalrts::RASLCommand refalrts::RefalSwap::run[] = {
  { refalrts::icProfileFunction, 0, 0, 0 },
  { refalrts::icIssueMemory, 10, 0, 0 },
  // [0] и [1] — угловые скобки
  { refalrts::icInitB0_Lite, 0, 0, 0 },
  // [2] — начало аргумента, [3] — конец аргумента, [4] — имя функции
  { refalrts::icCallSaveLeft, 0, 2, 0 },

  // команда icFetchSwapInfoBounds может привести к неуспеху,
  // если ящик ещё не проинициализирован
  { refalrts::icOnFailGoTo, 8, 0, 0 },

  // **Первое предложение:** статический ящик инициализирован
  // [5] и [6] — угловые скобки ящика
  { refalrts::icFetchSwapInfoBounds, 0, 5, 0 },
  // [7] — начало значения, [8] — конец значения, [9] — имя функции в ящике
  { refalrts::icCallSaveLeft, 0, 7, 5 },
  // res указывает на начало аргумента
  { refalrts::icResetAllocator, 0, 0, 0 },
  { refalrts::icSetResArgBegin, 0, 0, 0 },
  // переносим старое содержимое ящика в начало
  { refalrts::icSpliceEVar, 0, 0, 7 },
  // уничтожаем старый ящик
  { refalrts::icSpliceToFreeList_Range, 5, 6, 0 },
  // сохраняем новый ящик
  { refalrts::icSwapSave, 0, 0, 0 },
  // следующий шаг
  { refalrts::icNextStep, 0, 0, 0 },

  // **Второе предложение:** статический ящик не проинициализирован
  // сохраняем ящик и переходим следующему шагу
  { refalrts::icSwapSave, 0, 0, 0 },
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

const refalrts::UInt32 refalrts::ModuleRepresentant::FAKE_COOKIE;
