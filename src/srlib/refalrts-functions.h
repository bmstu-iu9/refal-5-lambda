#ifndef RefalRTS_FUNCTIONS_H_
#define RefalRTS_FUNCTIONS_H_

#include <string>

#include "refalrts.h"


namespace refalrts {

struct RASLCommand;
class Module;

struct RefalFunction {
  const RASLCommand *rasl;
  std::string base_name;
  RefalFuncName name;
  Module *module;

  RefalFunction(const RASLCommand rasl[], RefalFuncName name, Module *module)
    : rasl(rasl)
    , base_name(name.name)
    , name(base_name.c_str(), name.cookie1, name.cookie2)
    , module(module)
  {
    register_me();
  }

  virtual ~RefalFunction() {
    /* пусто */
  }

private:
  void register_me();
};

struct RefalNativeFunction: public RefalFunction {
  RefalFunctionPtr ptr;

  RefalNativeFunction(
    RefalFunctionPtr ptr,
    RefalFuncName name,
    Module *module
  )
    : RefalFunction(run, name, module), ptr(ptr)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalSwap: public RefalFunction {
  Iter head;
  Iter next_head;

  RefalSwap(RefalFuncName name, Module *module)
    : RefalFunction(run, name, module), head(), next_head()
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalEmptyFunction: public RefalFunction {
  RefalEmptyFunction(RefalFuncName name, Module *module)
    : RefalFunction(run, name, module)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionRasl: public RefalFunction {
  RefalCondFunctionRasl(RefalFuncName name, Module *module)
    : RefalFunction(run, name, module)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionNative: public RefalFunction {
  RefalCondFunctionNative(RefalFuncName name, Module *module)
    : RefalFunction(run, name, module)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};


/*
  Для эффективной обработки на современных процессорах
  команду выровляли по размеру в 4 байта.
  И получили ограничение на индексацию в 255.
  Анологичное ограничение присуствует в Рефал-5.
*/
struct RASLCommand {
  unsigned char cmd;
  unsigned char val1;
  unsigned char val2;
  unsigned char bracket;
};

struct StringItem {
  const char *string;
  UInt32 string_len;
};

union FunctionTableItem {
  const char *func_name;
  RefalFunction *function;

  FunctionTableItem(const char *func_name)
    : func_name(func_name)
  {
    /* пусто */
  }

  FunctionTableItem(RefalFunction *function)
    : function(function)
  {
    /* пусто */
  }

  FunctionTableItem()
    : func_name(0)
  {
    /* пусто */
  }
};

struct RASLFunction: public RefalFunction {
  FunctionTableItem *functions;
  const RefalIdentifier *idents;
  const RefalNumber *numbers;
  const StringItem *strings;
  const char *filename;

  RASLFunction(
    RefalFuncName name,
    const RASLCommand *rasl,
    FunctionTableItem *functions,
    const RefalIdentifier *idents,
    const RefalNumber *numbers,
    const StringItem *strings,
    const char *filename,
    Module *module
  )
    : RefalFunction(rasl, name, module)
    , functions(functions)
    , idents(idents)
    , numbers(numbers)
    , strings(strings)
    , filename(filename)
  {
    /* пусто */
  }
};


} // namespace refalrts


#endif // RefalRTS_FUNCTIONS_H_
