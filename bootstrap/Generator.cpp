// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorCommandInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorCommandTag(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorFuncArgument(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorFuncName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextItem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoPrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenReturn(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintBracketsVarInit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintInterpretAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
  }
};

// identifier #AlgRight
template <typename SREFAL_PARAM_INT>
struct ident_AlgRight {
  static const char *name() {
    return "AlgRight";
  }
};

// identifier #CmdADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdADT {
  static const char *name() {
    return "CmdADT";
  }
};

// identifier #CmdAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdAllocateElem {
  static const char *name() {
    return "CmdAllocateElem";
  }
};

// identifier #CmdArrCopy
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCopy {
  static const char *name() {
    return "CmdArrCopy";
  }
};

// identifier #CmdArrSplice
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrSplice {
  static const char *name() {
    return "CmdArrSplice";
  }
};

// identifier #CmdBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdBrackets {
  static const char *name() {
    return "CmdBrackets";
  }
};

// identifier #CmdChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdChar {
  static const char *name() {
    return "CmdChar";
  }
};

// identifier #CmdClosedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdClosedE {
  static const char *name() {
    return "CmdClosedE";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdDeclaration
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclaration {
  static const char *name() {
    return "CmdDeclaration";
  }
};

// identifier #CmdDefineIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdDefineIdent {
  static const char *name() {
    return "CmdDefineIdent";
  }
};

// identifier #CmdElse
template <typename SREFAL_PARAM_INT>
struct ident_CmdElse {
  static const char *name() {
    return "CmdElse";
  }
};

// identifier #CmdEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmpty {
  static const char *name() {
    return "CmdEmpty";
  }
};

// identifier #CmdEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmptyResult {
  static const char *name() {
    return "CmdEmptyResult";
  }
};

// identifier #CmdEndIf
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndIf {
  static const char *name() {
    return "CmdEndIf";
  }
};

// identifier #CmdEndSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndSentence {
  static const char *name() {
    return "CmdEndSentence";
  }
};

// identifier #CmdEnum
template <typename SREFAL_PARAM_INT>
struct ident_CmdEnum {
  static const char *name() {
    return "CmdEnum";
  }
};

// identifier #CmdFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdFail {
  static const char *name() {
    return "CmdFail";
  }
};

// identifier #CmdFinRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdFinRAA {
  static const char *name() {
    return "CmdFinRAA";
  }
};

// identifier #CmdFnEnd
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnEnd {
  static const char *name() {
    return "CmdFnEnd";
  }
};

// identifier #CmdFnStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnStart {
  static const char *name() {
    return "CmdFnStart";
  }
};

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdIfDef
template <typename SREFAL_PARAM_INT>
struct ident_CmdIfDef {
  static const char *name() {
    return "CmdIfDef";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
  }
};

// identifier #CmdInitRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitRAA {
  static const char *name() {
    return "CmdInitRAA";
  }
};

// identifier #CmdInsertElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertElem {
  static const char *name() {
    return "CmdInsertElem";
  }
};

// identifier #CmdInsertRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertRange {
  static const char *name() {
    return "CmdInsertRange";
  }
};

// identifier #CmdInsertVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertVar {
  static const char *name() {
    return "CmdInsertVar";
  }
};

// identifier #CmdIssueMem
template <typename SREFAL_PARAM_INT>
struct ident_CmdIssueMem {
  static const char *name() {
    return "CmdIssueMem";
  }
};

// identifier #CmdLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdLinkBrackets {
  static const char *name() {
    return "CmdLinkBrackets";
  }
};

// identifier #CmdName
template <typename SREFAL_PARAM_INT>
struct ident_CmdName {
  static const char *name() {
    return "CmdName";
  }
};

// identifier #CmdNumber
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumber {
  static const char *name() {
    return "CmdNumber";
  }
};

// identifier #CmdOpenedE_End
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_End {
  static const char *name() {
    return "CmdOpenedE_End";
  }
};

// identifier #CmdOpenedE_Start
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_Start {
  static const char *name() {
    return "CmdOpenedE_Start";
  }
};

// identifier #CmdPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdPushStack {
  static const char *name() {
    return "CmdPushStack";
  }
};

// identifier #CmdRepeated
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeated {
  static const char *name() {
    return "CmdRepeated";
  }
};

// identifier #CmdReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult {
  static const char *name() {
    return "CmdReturnResult";
  }
};

// identifier #CmdSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdSave {
  static const char *name() {
    return "CmdSave";
  }
};

// identifier #CmdSeparator
template <typename SREFAL_PARAM_INT>
struct ident_CmdSeparator {
  static const char *name() {
    return "CmdSeparator";
  }
};

// identifier #CmdSpliceElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceElem {
  static const char *name() {
    return "CmdSpliceElem";
  }
};

// identifier #CmdSpliceRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceRange {
  static const char *name() {
    return "CmdSpliceRange";
  }
};

// identifier #CmdStartSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdStartSentence {
  static const char *name() {
    return "CmdStartSentence";
  }
};

// identifier #CmdSwap
template <typename SREFAL_PARAM_INT>
struct ident_CmdSwap {
  static const char *name() {
    return "CmdSwap";
  }
};

// identifier #CmdVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdVar {
  static const char *name() {
    return "CmdVar";
  }
};

// identifier #CmdiADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdiADT {
  static const char *name() {
    return "CmdiADT";
  }
};

// identifier #CmdiAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdiAllocateElem {
  static const char *name() {
    return "CmdiAllocateElem";
  }
};

// identifier #CmdiBracket
template <typename SREFAL_PARAM_INT>
struct ident_CmdiBracket {
  static const char *name() {
    return "CmdiBracket";
  }
};

// identifier #CmdiChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiChar {
  static const char *name() {
    return "CmdiChar";
  }
};

// identifier #CmdiContextSet
template <typename SREFAL_PARAM_INT>
struct ident_CmdiContextSet {
  static const char *name() {
    return "CmdiContextSet";
  }
};

// identifier #CmdiEPrepare
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEPrepare {
  static const char *name() {
    return "CmdiEPrepare";
  }
};

// identifier #CmdiEStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEStart {
  static const char *name() {
    return "CmdiEStart";
  }
};

// identifier #CmdiEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmpty {
  static const char *name() {
    return "CmdiEmpty";
  }
};

// identifier #CmdiEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmptyResult {
  static const char *name() {
    return "CmdiEmptyResult";
  }
};

// identifier #CmdiFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFail {
  static const char *name() {
    return "CmdiFail";
  }
};

// identifier #CmdiFuncArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFuncArray {
  static const char *name() {
    return "CmdiFuncArray";
  }
};

// identifier #CmdiHugeNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiHugeNum {
  static const char *name() {
    return "CmdiHugeNum";
  }
};

// identifier #CmdiIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdiIdent {
  static const char *name() {
    return "CmdiIdent";
  }
};

// identifier #CmdiInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdiInitB0 {
  static const char *name() {
    return "CmdiInitB0";
  }
};

// identifier #CmdiLabelArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLabelArray {
  static const char *name() {
    return "CmdiLabelArray";
  }
};

// identifier #CmdiLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLinkBrackets {
  static const char *name() {
    return "CmdiLinkBrackets";
  }
};

// identifier #CmdiName
template <typename SREFAL_PARAM_INT>
struct ident_CmdiName {
  static const char *name() {
    return "CmdiName";
  }
};

// identifier #CmdiNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNum {
  static const char *name() {
    return "CmdiNum";
  }
};

// identifier #CmdiNumberArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNumberArray {
  static const char *name() {
    return "CmdiNumberArray";
  }
};

// identifier #CmdiOnFailGoTo
template <typename SREFAL_PARAM_INT>
struct ident_CmdiOnFailGoTo {
  static const char *name() {
    return "CmdiOnFailGoTo";
  }
};

// identifier #CmdiPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiPushStack {
  static const char *name() {
    return "CmdiPushStack";
  }
};

// identifier #CmdiRepeat
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRepeat {
  static const char *name() {
    return "CmdiRepeat";
  }
};

// identifier #CmdiReserveStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReserveStack {
  static const char *name() {
    return "CmdiReserveStack";
  }
};

// identifier #CmdiReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReturnResult {
  static const char *name() {
    return "CmdiReturnResult";
  }
};

// identifier #CmdiRunInterpret
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRunInterpret {
  static const char *name() {
    return "CmdiRunInterpret";
  }
};

// identifier #CmdiSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdiSave {
  static const char *name() {
    return "CmdiSave";
  }
};

// identifier #CmdiStringArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiStringArray {
  static const char *name() {
    return "CmdiStringArray";
  }
};

// identifier #CmdiVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiVar {
  static const char *name() {
    return "CmdiVar";
  }
};

// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
  }
};

// identifier #ElChar
template <typename SREFAL_PARAM_INT>
struct ident_ElChar {
  static const char *name() {
    return "ElChar";
  }
};

// identifier #ElCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseADT {
  static const char *name() {
    return "ElCloseADT";
  }
};

// identifier #ElCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseBracket {
  static const char *name() {
    return "ElCloseBracket";
  }
};

// identifier #ElCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseCall {
  static const char *name() {
    return "ElCloseCall";
  }
};

// identifier #ElHugeNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElHugeNumber {
  static const char *name() {
    return "ElHugeNumber";
  }
};

// identifier #ElIdent
template <typename SREFAL_PARAM_INT>
struct ident_ElIdent {
  static const char *name() {
    return "ElIdent";
  }
};

// identifier #ElName
template <typename SREFAL_PARAM_INT>
struct ident_ElName {
  static const char *name() {
    return "ElName";
  }
};

// identifier #ElNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElNumber {
  static const char *name() {
    return "ElNumber";
  }
};

// identifier #ElOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenADT {
  static const char *name() {
    return "ElOpenADT";
  }
};

// identifier #ElOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenBracket {
  static const char *name() {
    return "ElOpenBracket";
  }
};

// identifier #ElOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenCall {
  static const char *name() {
    return "ElOpenCall";
  }
};

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Fail
template <typename SREFAL_PARAM_INT>
struct ident_Fail {
  static const char *name() {
    return "Fail";
  }
};

// identifier #GN_Entry
template <typename SREFAL_PARAM_INT>
struct ident_GN_Entry {
  static const char *name() {
    return "GN_Entry";
  }
};

// identifier #GN_Local
template <typename SREFAL_PARAM_INT>
struct ident_GN_Local {
  static const char *name() {
    return "GN_Local";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"refalrts::Iter arg_begin, refalrts::Iter arg_end", 48}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::Iter arg_begin, refalrts::Iter arg_end", 48 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"refalrts::Iter, refalrts::Iter", 30}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::Iter, refalrts::Iter", 30 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name,
    & ident_GN_Local<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"static ", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # GN_Local
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # GN_Entry
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # GN_Local
    if( ! refalrts::ident_left(  & ident_GN_Local<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "static ", 7 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # GN_Entry
  if( ! refalrts::ident_left(  & ident_GN_Entry<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromMemoryClass, "TextFromMemoryClass" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  refalrts::this_is_generated_function();", 41},
    {") {", 3},
    {"refalrts::FnResult ", 19}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: s.MemoryClass#1/1
    //19: s.FnArguments#1/1
    //20: e.Name#1/1
    // s.MemoryClass#1 s.FnArguments#1 e.Name#1
    {refalrts::icsVarLeft, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icContextSet, 0, 20, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icString, 0, 2, 6},
    {refalrts::icChar, 0, '(', 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icString, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 2, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //18: s.MemoryClass#1/1
  //19: s.FnArguments#1/1
  //20: e.Name#1/1
  // s.MemoryClass#1 s.FnArguments#1 e.Name#1
  if( ! refalrts::svar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = context[0];
  context[21] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], TextFromMemoryClass, "TextFromMemoryClass" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "refalrts::FnResult ", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], ") {", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "  refalrts::this_is_generated_function();", 41 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[14], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[2], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[19] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FuncArguments, "FuncArguments" },
    { SwGenFnStart, "SwGenFnStart" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.MemoryClass#1/1
    //7: e.Name#1/1
    // s.MemoryClass#1 e.Name#1
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 7, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: s.MemoryClass#1/1
  //7: e.Name#1/1
  // s.MemoryClass#1 e.Name#1
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = context[0];
  context[8] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], SwGenFnStart, "SwGenFnStart" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FuncArguments, "FuncArguments" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {");", 2},
    {"extern refalrts::FnResult ", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Name#1/1
    // e.Name#1
    {refalrts::icContextSet, 0, 12, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 1, 3},
    {refalrts::icChar, 0, '(', 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 2, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //12: e.Name#1/1
  // e.Name#1
  context[12] = context[0];
  context[13] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[3], context[4], "extern refalrts::FnResult ", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[5], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], ");", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FuncArguments, "FuncArguments" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {");", 2},
    {"static refalrts::FnResult ", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Name#1/1
    // e.Name#1
    {refalrts::icContextSet, 0, 12, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 1, 3},
    {refalrts::icChar, 0, '(', 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 2, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //12: e.Name#1/1
  // e.Name#1
  context[12] = context[0];
  context[13] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[3], context[4], "static refalrts::FnResult ", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[5], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], ");", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenReturn(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fail<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));", 78},
    {"return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));", 64}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Indent#1/1
    // # Success e.Indent#1
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Indent#1/1
    // # Fail e.Indent#1
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //6: e.Indent#1/1
    // # Success e.Indent#1
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      continue;
    context[6] = context[0];
    context[7] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[3], context[4], "return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));", 64 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[5] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.Indent#1/1
  // # Fail e.Indent#1
  if( ! refalrts::ident_left(  & ident_Fail<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[3], context[4], "return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));", 78 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 85 elems
  refalrts::Iter context[85];
  refalrts::zeros( context, 85 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenReturn, "GenReturn" },
    { GenFnStart, "GenFnStart" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  ", 2},
    {"  refalrts::splice_to_freelist( arg_begin, arg_end );", 53},
    {"  refalrts::swap_save( s_head, info_b, info_e );", 48},
    {"  refalrts::splice_evar( arg_begin, saved_b, saved_e );", 55},
    {"  refalrts::swap_info_bounds( saved_b, saved_e, s_head );", 57},
    {"  refalrts::Iter saved_e;", 25},
    {"  refalrts::Iter saved_b;", 25},
    {"  static refalrts::Iter s_head = refalrts::initialize_swap_head( func_name );", 77},
    {"  refalrts::move_right( info_b, info_e );", 41},
    {"  refalrts::move_left( info_b, info_e );", 40},
    {"  refalrts::Iter info_e = arg_end;", 34},
    {"  refalrts::Iter info_b = func_name;", 36},
    {"  refalrts::move_left( func_name, arg_end );", 44},
    {"  refalrts::Iter func_name = arg_begin;", 39}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //82: s.MemoryClass#1/1
    //83: e.Name#1/1
    // s.MemoryClass#1 e.Name#1
    {refalrts::icsVarLeft, 0, 82, 0},
    {refalrts::icContextSet, 0, 83, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 13, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icString, 0, 12, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icString, 0, 11, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icString, 0, 10, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icString, 0, 9, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icString, 0, 8, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icString, 0, 7, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icString, 0, 6, 44},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icString, 0, 5, 48},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 53},
    {refalrts::icString, 0, 4, 54},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 56},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 57},
    {refalrts::icString, 0, 3, 58},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 60},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 61},
    {refalrts::icString, 0, 2, 62},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 64},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 65},
    {refalrts::icString, 0, 1, 66},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 68},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 69},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 70},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 71},
    {refalrts::icFunc, 0, 0, 72},
    {refalrts::icIdent, 0, 0, 73},
    {refalrts::icString, 0, 0, 74},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 76},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 77},
    {refalrts::icChar, 0, '}', 78},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 79},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 80},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 81},
    {refalrts::icLinkBrackets, 80, 81, 0},
    {refalrts::icSpliceElem, 0, 0, 81},
    {refalrts::icSpliceElem, 0, 0, 80},
    {refalrts::icLinkBrackets, 77, 79, 0},
    {refalrts::icSpliceElem, 0, 0, 79},
    {refalrts::icSpliceElem, 0, 0, 78},
    {refalrts::icSpliceElem, 0, 0, 77},
    {refalrts::icPushStack, 0, 0, 76},
    {refalrts::icPushStack, 0, 0, 71},
    {refalrts::icSpliceElem, 0, 0, 76},
    {refalrts::icSpliceRange, 0, 0, 74},
    {refalrts::icSpliceElem, 0, 0, 73},
    {refalrts::icSpliceElem, 0, 0, 72},
    {refalrts::icSpliceElem, 0, 0, 71},
    {refalrts::icLinkBrackets, 69, 70, 0},
    {refalrts::icSpliceElem, 0, 0, 70},
    {refalrts::icSpliceElem, 0, 0, 69},
    {refalrts::icLinkBrackets, 65, 68, 0},
    {refalrts::icSpliceElem, 0, 0, 68},
    {refalrts::icSpliceRange, 0, 0, 66},
    {refalrts::icSpliceElem, 0, 0, 65},
    {refalrts::icLinkBrackets, 61, 64, 0},
    {refalrts::icSpliceElem, 0, 0, 64},
    {refalrts::icSpliceRange, 0, 0, 62},
    {refalrts::icSpliceElem, 0, 0, 61},
    {refalrts::icLinkBrackets, 57, 60, 0},
    {refalrts::icSpliceElem, 0, 0, 60},
    {refalrts::icSpliceRange, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icLinkBrackets, 53, 56, 0},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icSpliceRange, 0, 0, 54},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icLinkBrackets, 51, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 47, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceRange, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icLinkBrackets, 43, 46, 0},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceRange, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 41, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceRange, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 35, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceRange, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceRange, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 83},
    {refalrts::icSpliceSTVar, 0, 0, 82},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //82: s.MemoryClass#1/1
  //83: e.Name#1/1
  // s.MemoryClass#1 e.Name#1
  if( ! refalrts::svar_left( context[82], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[83] = context[0];
  context[84] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], GenFnStart, "GenFnStart" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "  refalrts::Iter func_name = arg_begin;", 39 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "  refalrts::move_left( func_name, arg_end );", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "  refalrts::Iter info_b = func_name;", 36 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "  refalrts::Iter info_e = arg_end;", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[28], context[29], "  refalrts::move_left( info_b, info_e );", 40 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[32], context[33], "  refalrts::move_right( info_b, info_e );", 41 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[38], context[39], "  static refalrts::Iter s_head = refalrts::initialize_swap_head( func_name );", 77 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[44], context[45], "  refalrts::Iter saved_b;", 25 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[48], context[49], "  refalrts::Iter saved_e;", 25 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[54], context[55], "  refalrts::swap_info_bounds( saved_b, saved_e, s_head );", 57 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[58], context[59], "  refalrts::splice_evar( arg_begin, saved_b, saved_e );", 55 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[61] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[62], context[63], "  refalrts::swap_save( s_head, info_b, info_e );", 48 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[66], context[67], "  refalrts::splice_to_freelist( arg_begin, arg_end );", 53 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[69] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[70] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[72], GenReturn, "GenReturn" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[73], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[74], context[75], "  ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[79] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[80] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[81] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[80], context[81] );
  res = refalrts::splice_elem( res, context[81] );
  res = refalrts::splice_elem( res, context[80] );
  refalrts::link_brackets( context[77], context[79] );
  res = refalrts::splice_elem( res, context[79] );
  res = refalrts::splice_elem( res, context[78] );
  res = refalrts::splice_elem( res, context[77] );
  refalrts::push_stack( context[76] );
  refalrts::push_stack( context[71] );
  res = refalrts::splice_elem( res, context[76] );
  res = refalrts::splice_evar( res, context[74], context[75] );
  res = refalrts::splice_elem( res, context[73] );
  res = refalrts::splice_elem( res, context[72] );
  res = refalrts::splice_elem( res, context[71] );
  refalrts::link_brackets( context[69], context[70] );
  res = refalrts::splice_elem( res, context[70] );
  res = refalrts::splice_elem( res, context[69] );
  refalrts::link_brackets( context[65], context[68] );
  res = refalrts::splice_elem( res, context[68] );
  res = refalrts::splice_evar( res, context[66], context[67] );
  res = refalrts::splice_elem( res, context[65] );
  refalrts::link_brackets( context[61], context[64] );
  res = refalrts::splice_elem( res, context[64] );
  res = refalrts::splice_evar( res, context[62], context[63] );
  res = refalrts::splice_elem( res, context[61] );
  refalrts::link_brackets( context[57], context[60] );
  res = refalrts::splice_elem( res, context[60] );
  res = refalrts::splice_evar( res, context[58], context[59] );
  res = refalrts::splice_elem( res, context[57] );
  refalrts::link_brackets( context[53], context[56] );
  res = refalrts::splice_elem( res, context[56] );
  res = refalrts::splice_evar( res, context[54], context[55] );
  res = refalrts::splice_elem( res, context[53] );
  refalrts::link_brackets( context[51], context[52] );
  res = refalrts::splice_elem( res, context[52] );
  res = refalrts::splice_elem( res, context[51] );
  refalrts::link_brackets( context[47], context[50] );
  res = refalrts::splice_elem( res, context[50] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_elem( res, context[47] );
  refalrts::link_brackets( context[43], context[46] );
  res = refalrts::splice_elem( res, context[46] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  res = refalrts::splice_elem( res, context[43] );
  refalrts::link_brackets( context[41], context[42] );
  res = refalrts::splice_elem( res, context[42] );
  res = refalrts::splice_elem( res, context[41] );
  refalrts::link_brackets( context[37], context[40] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_elem( res, context[37] );
  refalrts::link_brackets( context[35], context[36] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_elem( res, context[35] );
  refalrts::link_brackets( context[31], context[34] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::link_brackets( context[27], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::link_brackets( context[25], context[26] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::link_brackets( context[21], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[17], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[5], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[83], context[84] );
  res = refalrts::splice_stvar( res, context[82] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"};", 2},
    {"  }", 3},
    {"\";", 2},
    {"    return \"", 12},
    {"  static const char *name() {", 29},
    {" {", 2},
    {"struct ident_", 13},
    {"template <typename SREFAL_PARAM_INT>", 36},
    {"// identifier #", 15}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //36: e.Name#1/1
    //38: e.Name#1/2
    //40: e.Name#1/3
    // e.Name#1
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 38, 36, 0},
    {refalrts::icCopyEVar, 40, 38, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 8, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 7, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 6, 11},
    {refalrts::icString, 0, 5, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icString, 0, 4, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icString, 0, 3, 21},
    {refalrts::icString, 0, 2, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icString, 0, 1, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icString, 0, 0, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceRange, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //36: e.Name#1/1
  //38: e.Name#1/2
  //40: e.Name#1/3
  // e.Name#1
  context[36] = context[0];
  context[37] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[38], context[39], context[36], context[37]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[38], context[39]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[3], context[4], "// identifier #", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "template <typename SREFAL_PARAM_INT>", 36 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "struct ident_", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], " {", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "  static const char *name() {", 29 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], "    return \"", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "\";", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[27], context[28], "  }", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[31], context[32], "};", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[34], context[35] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_elem( res, context[34] );
  refalrts::link_brackets( context[30], context[33] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[26], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::link_brackets( context[20], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[16], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[10], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[6], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"#include \"refalrts.h\"", 21},
    {"// Automatically generated file. Don\'t edit!", 44}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icString, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceRange, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[3], context[4], "// Automatically generated file. Don\'t edit!", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "#include \"refalrts.h\"", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[6], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"//End of file", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icLinkBrackets, 2, 3, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "//End of file", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::link_brackets( context[2], context[3] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenProgram_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //4: e.Generated#2/1
    // ( ) e.Generated#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icContextSet, 0, 4, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //4: e.Generated#2/1
  // ( ) e.Generated#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = context[0];
  context[5] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenCommonTailer, "GenCommonTailer" },
    { lambda_GenProgram_0, "lambda_GenProgram_0" },
    { GenCommand, "GenCommand" },
    { MapReduce, "MapReduce" },
    { Fetch, "Fetch" },
    { GenCommonHeaders, "GenCommonHeaders" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Algorithm#1/1
    // e.Algorithm#1
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 5, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //18: e.Algorithm#1/1
  // e.Algorithm#1
  context[18] = context[0];
  context[19] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], GenCommonHeaders, "GenCommonHeaders" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], GenCommand, "GenCommand" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_GenProgram_0, "lambda_GenProgram_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], GenCommonTailer, "GenCommonTailer" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ContextRange_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"context[", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.RangeOffset#1/1
    // s.RangeOffset#1
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icChar, 0, ']', 7},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: s.RangeOffset#1/1
  // s.RangeOffset#1
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "context[", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ']' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ContextRange_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"context[", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.RangeOffset#1/1
    // s.RangeOffset#1
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icChar, 0, ']', 10},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //11: s.RangeOffset#1/1
  // s.RangeOffset#1
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "context[", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ']' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ContextRange(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextRange_E, "ContextRange_E" },
    { ContextRange_B, "ContextRange_B" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {", ", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //10: s.RangeOffset#1/1
    //11: s.RangeOffset#1/2
    // s.RangeOffset#1
    {refalrts::icsVarLeft, 0, 10, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 11, 10, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icString, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //10: s.RangeOffset#1/1
  //11: s.RangeOffset#1/2
  // s.RangeOffset#1
  if( ! refalrts::svar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[11], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ContextRange_B, "ContextRange_B" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], ", ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ContextRange_E, "ContextRange_E" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ContextItem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"context[", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.ItemNumber#1/1
    // s.ItemNumber#1
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icChar, 0, ']', 7},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: s.ItemNumber#1/1
  // s.ItemNumber#1
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "context[", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ']' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CreateClosure<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"refalrts::create_closure", 24}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # CreateClosure
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: e.Name#1/1
    // e.Name#1
    {refalrts::icContextSet, 0, 2, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # CreateClosure
    if( ! refalrts::ident_left(  & ident_CreateClosure<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::create_closure", 24 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: e.Name#1/1
  // e.Name#1
  context[2] = context[0];
  context[3] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintBracketsVarInit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextRange_E, "ContextRange_E" },
    { ContextRange_B, "ContextRange_B" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" = 0;", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //16: s.InnerBrackets#1/1
    //17: e.Indent#1/1
    //19: e.Indent#1/2
    //21: s.InnerBrackets#1/2
    // e.Indent#1 s.InnerBrackets#1
    {refalrts::icsVarRight, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 17, 0},
    {refalrts::icCopySTVar, 21, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 9, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 2, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //16: s.InnerBrackets#1/1
  //17: e.Indent#1/1
  //19: e.Indent#1/2
  //21: s.InnerBrackets#1/2
  // e.Indent#1 s.InnerBrackets#1
  if( ! refalrts::svar_right( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[19], context[20], context[17], context[18]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[16]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], ContextRange_B, "ContextRange_B" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], " = 0;", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ContextRange_E, "ContextRange_E" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], " = 0;", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[2], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgRight<int>::name,
    & ident_AlgLeft<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Right", 5},
    {"Left", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # AlgLeft
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # AlgRight
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # AlgLeft
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "Left", 4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # AlgRight
  if( ! refalrts::ident_left(  & ident_AlgRight<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "Right", 5 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintName, "PrintName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"\" },", 4},
    {", \"", 3},
    {"  { ", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //20: e.Indent#1/1
    //22: e.Name#2/1
    //24: e.Name#2/2
    // ( e.Indent#1 ) ( e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icContextSet, 0, 22, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 24, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icString, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 6, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //20: e.Indent#1/1
  //22: e.Name#2/1
  //24: e.Name#2/2
  // ( e.Indent#1 ) ( e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = context[2];
  context[21] = context[3];
  context[22] = context[4];
  context[23] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[24], context[25], context[22], context[23]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "  { ", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], PrintName, "PrintName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], ", \"", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], PrintName, "PrintName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "\" },", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenCommand_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"<int>::name,", 12},
    {"  & ident_", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Name#2/1
    // ( e.Indent#1 ) ( e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icContextSet, 0, 14, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 1, 7},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //12: e.Indent#1/1
  //14: e.Name#2/1
  // ( e.Indent#1 ) ( e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = context[2];
  context[13] = context[3];
  context[14] = context[4];
  context[15] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "  & ident_", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "<int>::name,", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenCommand_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"UL,", 3},
    {"  ", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Number#2/1
    // ( e.Indent#1 ) s.Number#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 4, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //13: e.Indent#1/1
  //15: s.Number#2/1
  // ( e.Indent#1 ) s.Number#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "  ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "UL,", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenCommand_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintString, "PrintString" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"},", 2},
    {"  {", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //15: e.Indent#1/1
    //17: e.String#2/1
    // ( e.Indent#1 ) ( e.String#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 6, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //15: e.Indent#1/1
  //17: e.String#2/1
  // ( e.Indent#1 ) ( e.String#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[2];
  context[16] = context[3];
  context[17] = context[4];
  context[18] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "  {", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], PrintString, "PrintString" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "},", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { GenReturn, "GenReturn" },
    { PrintInterpretAllocateElem, "PrintInterpretAllocateElem" },
    { PrintDirection, "PrintDirection" },
    { Escape, "Escape" },
    { PrintString, "PrintString" },
    { lambda_GenCommand_3, "lambda_GenCommand_3" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" },
    { lambda_GenCommand_2, "lambda_GenCommand_2" },
    { lambda_GenCommand_1, "lambda_GenCommand_1" },
    { PrintName, "PrintName" },
    { lambda_GenCommand_0, "lambda_GenCommand_0" },
    { Inc, "Inc" },
    { ContextItem, "ContextItem" },
    { ContextRange, "ContextRange" },
    { PrintAllocateElem, "PrintAllocateElem" },
    { ContextRange_E, "ContextRange_E" },
    { ContextRange_B, "ContextRange_B" },
    { PrintMatchRepeated, "PrintMatchRepeated" },
    { PrintMatchSTVar, "PrintMatchSTVar" },
    { PrintMatchEmpty, "PrintMatchEmpty" },
    { PrintMatchADT, "PrintMatchADT" },
    { PrintBracketsVarInit, "PrintBracketsVarInit" },
    { PrintMatchBrackets, "PrintMatchBrackets" },
    { PrintMatchIdent, "PrintMatchIdent" },
    { PrintMatchName, "PrintMatchName" },
    { PrintMatchNumber, "PrintMatchNumber" },
    { PrintMatchChar, "PrintMatchChar" },
    { GenFnStart, "GenFnStart" },
    { GenIdent, "GenIdent" },
    { GenForward, "GenForward" },
    { GenExtern, "GenExtern" },
    { GenSwap, "GenSwap" },
    { NakedArguments, "NakedArguments" },
    { SwGenFnStart, "SwGenFnStart" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiInitB0<int>::name,
    & ident_CmdiReturnResult<int>::name,
    & ident_CmdiFail<int>::name,
    & ident_CmdiOnFailGoTo<int>::name,
    & ident_Fail<int>::name,
    & ident_CmdFail<int>::name,
    & ident_CmdiPushStack<int>::name,
    & ident_CmdiLinkBrackets<int>::name,
    & ident_CmdSpliceRange<int>::name,
    & ident_CmdSpliceElem<int>::name,
    & ident_CmdArrSplice<int>::name,
    & ident_CmdArrCopy<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_CmdiEmpty<int>::name,
    & ident_CmdiBracket<int>::name,
    & ident_CmdiEmptyResult<int>::name,
    & ident_CmdiRunInterpret<int>::name,
    & ident_CmdiReserveStack<int>::name,
    & ident_CmdFinRAA<int>::name,
    & ident_CmdInitRAA<int>::name,
    & ident_CmdiHugeNum<int>::name,
    & ident_CmdiNum<int>::name,
    & ident_CmdiIdent<int>::name,
    & ident_CmdiName<int>::name,
    & ident_CmdiVar<int>::name,
    & ident_CmdiChar<int>::name,
    & ident_CmdiSave<int>::name,
    & ident_CmdiADT<int>::name,
    & ident_CmdiEStart<int>::name,
    & ident_CmdiEPrepare<int>::name,
    & ident_CmdiRepeat<int>::name,
    & ident_CmdiStringArray<int>::name,
    & ident_CmdiNumberArray<int>::name,
    & ident_CmdiLabelArray<int>::name,
    & ident_CmdiFuncArray<int>::name,
    & ident_CmdEndIf<int>::name,
    & ident_CmdElse<int>::name,
    & ident_CmdIfDef<int>::name,
    & ident_CmdIssueMem<int>::name,
    & ident_Success<int>::name,
    & ident_CmdReturnResult<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_CmdInsertVar<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_ElString<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_CmdEmptyResult<int>::name,
    & ident_CmdSave<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE_End<int>::name,
    & ident_CmdOpenedE_Start<int>::name,
    & ident_CmdiContextSet<int>::name,
    & ident_CmdClosedE<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdVar<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdADT<int>::name,
    & ident_CmdBrackets<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_CmdName<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_CmdChar<int>::name,
    & ident_CmdInitB0<int>::name,
    & ident_CmdEndSentence<int>::name,
    & ident_CmdStartSentence<int>::name,
    & ident_CmdFnEnd<int>::name,
    & ident_CmdSeparator<int>::name,
    & ident_CmdFnStart<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_GN_Local<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_GN_Entry<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"{refalrts::icInitB0, 0, 0, 0},", 30},
    {"{refalrts::icReturnResult, 0, 0, 0},", 36},
    {"{refalrts::icFail, 0, 0, 0},", 28},
    {", 0, 0},", 8},
    {"{refalrts::icOnFailGoTo, +", 26},
    {"},", 2},
    {"{refalrts::icPushStack, 0, 0, ", 30},
    {", 0},", 5},
    {", ", 2},
    {"{refalrts::icLinkBrackets, ", 27},
    {"{refalrts::icSpliceRange, 0, 0, ", 32},
    {"{refalrts::icSpliceElem, 0, 0, ", 31},
    {"{refalrts::icSpliceSTVar, 0, 0, ", 32},
    {"{refalrts::icSpliceEVar, 0, 0, ", 31},
    {"{refalrts::icCopySTVar, ", 24},
    {"{refalrts::icCopyEVar, ", 23},
    {"{refalrts::icEmpty, 0, 0, ", 26},
    {", 0, ", 5},
    {"{refalrts::icBracket", 20},
    {"{refalrts::icEmptyResult, 0, 0, 0},", 35},
    {"return res;", 11},
    {");", 2},
    {"  functions, idents, numbers, strings, open_e_stack", 51},
    {"  raa, context, arg_begin, arg_end,", 35},
    {"refalrts::FnResult res = refalrts::interpret_array(", 51},
    {"];", 2},
    {"int open_e_stack[", 17},
    {"int open_e_stack[1];", 20},
    {"};", 2},
    {"  {refalrts::icEnd, 0, 0, 0}", 28},
    {"static const refalrts::RASLCommand raa[] = {", 44},
    {"  ", 2},
    {"{refalrts::icHugeNum", 20},
    {"{refalrts::icNum", 16},
    {"{refalrts::icIdent", 18},
    {"{refalrts::icFunc", 17},
    {"Var", 3},
    {"{refalrts::ic", 13},
    {"\'), ", 4},
    {", 0, static_cast<unsigned char>(\'", 33},
    {"{refalrts::icChar", 17},
    {"{refalrts::icSave, 0, ", 22},
    {"{refalrts::icADT", 16},
    {"{refalrts::icEStart, 0, ", 24},
    {"{refalrts::icEPrepare, 0, ", 26},
    {"Repeat", 6},
    {"  {", 3},
    {"static const refalrts::StringItem strings[] = {", 47},
    {"using refalrts::strings;", 24},
    {"UL", 2},
    {"static const refalrts::RefalNumber numbers[] = {", 48},
    {"using refalrts::numbers;", 24},
    {"<int>::name", 11},
    {"  & ident_", 10},
    {"static const refalrts::RefalIdentifier idents[] = {", 51},
    {"using refalrts::idents;", 23},
    {"\" }", 3},
    {", \"", 3},
    {"  { ", 4},
    {"static const refalrts::RefalFunction functions[] = {", 52},
    {"using refalrts::functions;", 26},
    {"#endif", 6},
    {"#else", 5},
    {"#ifdef INTERPRET", 16},
    {" );", 3},
    {"refalrts::zeros( context, ", 26},
    {"refalrts::Iter context[", 23},
    {" elems", 6},
    {"// issue here memory for vars with ", 35},
    {"refalrts::splice_to_freelist( arg_begin, arg_end );", 51},
    {"refalrts::use( res );", 21},
    {"res = refalrts::splice_evar( res, ", 34},
    {"res = refalrts::splice_stvar( res, ", 35},
    {"res = refalrts::splice_elem( res, ", 34},
    {"refalrts::push_stack( ", 22},
    {"refalrts::link_brackets( ", 25},
    {"  return refalrts::cNoMemory;", 29},
    {" ) )", 4},
    {"if( ! refalrts::alloc_chars( ", 29},
    {"))", 2},
    {"if (! refalrts::copy_stvar(", 27},
    {"if (! refalrts::copy_evar(", 26},
    {"refalrts::Iter res = arg_begin;", 31},
    {"refalrts::reset_allocator();", 28},
    {" = ", 3},
    {" ) );", 5},
    {"} while ( refalrts::open_evar_advance( ", 39},
    {"do {", 4},
    {"refalrts::start_e_loop();", 25},
    {" = 0;", 5},
    {"{refalrts::icContextSet, 0, ", 28},
    {"refalrts::move_right( ", 22},
    {"refalrts::move_left( ", 21},
    {" = arg_end;", 11},
    {" = arg_begin;", 13},
    {"} while ( 0 );", 14},
    {"  refalrts::start_sentence();", 29},
    {"//", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Text#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdComment e.Text#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 77, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icContextSet, 0, 14, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 16, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 97, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //23: e.Indent#1/1
    //25: s.MemoryClass#1/1
    //26: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdEnum s.MemoryClass#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 76, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 35, 9},
    {refalrts::icFunc, 0, 34, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icIdent, 0, 4, 14},
    {refalrts::icString, 0, 31, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icChar, 0, '}', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Indent#1/1
    //13: s.MemoryClass#1/1
    //14: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdSwap s.MemoryClass#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 75, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icsVarLeft, 0, 13, 4},
    {refalrts::icContextSet, 0, 14, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 33, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDeclaration # GN_Entry e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 73, 4},
    {refalrts::icIdentLeft, 0, 74, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 32, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDeclaration # GN_Local e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 73, 4},
    {refalrts::icIdentLeft, 0, 72, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 31, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDefineIdent e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 71, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 30, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.MemoryClass#1/1
    //16: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdFnStart s.MemoryClass#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 70, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icContextSet, 0, 16, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 31, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 29, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Indent#1/1
    //12: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSeparator )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 69, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 12, 10, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    // ( e.Indent#1 '  ' ) ( # CmdFnEnd )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 68, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icChar, 0, '}', 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Indent#1/1
    //20: e.Indent#1/2
    //22: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdStartSentence )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 67, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 18, 0},
    {refalrts::icCopyEVar, 22, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 31, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 87, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icString, 0, 96, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Indent#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 '  ' ) ( # CmdEndSentence )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 66, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 16, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 95, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +116, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //54: e.Indent#1/1
    //56: e.Indent#1/2
    //58: e.Indent#1/3
    //60: e.Indent#1/4
    //62: e.Indent#1/5
    //64: e.Indent#1/6
    // ( e.Indent#1 ) ( # CmdInitB0 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 65, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 54, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 56, 54, 0},
    {refalrts::icCopyEVar, 58, 56, 0},
    {refalrts::icCopyEVar, 60, 58, 0},
    {refalrts::icCopyEVar, 62, 60, 0},
    {refalrts::icCopyEVar, 64, 62, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 18, 10},
    {refalrts::icInt, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 94, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 17, 18},
    {refalrts::icInt, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icString, 0, 93, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icString, 0, 92, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 15, 28},
    {refalrts::icInt, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icString, 0, 64, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icString, 0, 92, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icFunc, 0, 15, 38},
    {refalrts::icInt, 0, 0, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icString, 0, 64, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icString, 0, 91, 45},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 47},
    {refalrts::icFunc, 0, 15, 48},
    {refalrts::icInt, 0, 0, 49},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icString, 0, 64, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 53},
    {refalrts::icLinkBrackets, 44, 53, 0},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icSpliceRange, 0, 0, 51},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceRange, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 64},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceRange, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceRange, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 62},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 24, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceRange, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 16, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 8, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 56},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 54},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Char#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 64, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 18, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 28, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Number#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 63, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 18, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 27, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Name#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 62, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 26, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Name#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 61, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 25, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Indent#1/1
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.InnerBrackets#1/1
    //21: e.Indent#1/2
    //23: e.Indent#1/3
    //25: s.InnerBrackets#1/2
    // ( e.Indent#1 ) ( # CmdBrackets s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 60, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 21, 16, 0},
    {refalrts::icCopyEVar, 23, 21, 0},
    {refalrts::icCopySTVar, 25, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 23, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 24, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Indent#1/1
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.InnerBrackets#1/1
    //21: e.Name#1/1
    //23: e.Indent#1/2
    //25: e.Indent#1/3
    //27: s.InnerBrackets#1/2
    // ( e.Indent#1 ) ( # CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 59, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 23, 16, 0},
    {refalrts::icCopyEVar, 25, 23, 0},
    {refalrts::icCopySTVar, 27, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 23, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 22, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdEmpty s.Direction#1 s.BracketNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 58, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 17, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 21, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Mode#1/1
    //18: s.VarNumber#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 57, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 20, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Mode#1/1
    //18: s.Var#1/1
    //19: s.Sample#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Mode#1 s.Var#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 56, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 19, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Indent#1/1
    //32: s.BracketNumber#1/1
    //33: s.VarNumber#1/1
    //34: e.Indent#1/2
    //36: e.Indent#1/3
    //38: s.VarNumber#1/2
    //39: s.BracketNumber#1/2
    // ( e.Indent#1 ) ( # CmdClosedE # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 55, 4},
    {refalrts::icIdentLeft, 0, 51, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icsVarLeft, 0, 32, 4},
    {refalrts::icsVarLeft, 0, 33, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 34, 30, 0},
    {refalrts::icCopyEVar, 36, 34, 0},
    {refalrts::icCopySTVar, 38, 33, 0},
    {refalrts::icCopySTVar, 39, 32, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 18, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 84, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 18, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icChar, 0, ';', 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 17, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icString, 0, 84, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 17, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icChar, 0, ';', 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icLinkBrackets, 19, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 8, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiContextSet s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 54, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 90, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 5, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Indent#1/1
    //34: s.BracketNumber#1/1
    //35: s.VarNumber#1/1
    //36: e.Indent#1/2
    //38: e.Indent#1/3
    //40: e.Indent#1/4
    //42: e.Indent#1/5
    //44: s.VarNumber#1/2
    // ( e.Indent#1 ) ( # CmdOpenedE_Start # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 53, 4},
    {refalrts::icIdentLeft, 0, 51, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 4},
    {refalrts::icsVarLeft, 0, 35, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 36, 32, 0},
    {refalrts::icCopyEVar, 38, 36, 0},
    {refalrts::icCopyEVar, 40, 38, 0},
    {refalrts::icCopyEVar, 42, 40, 0},
    {refalrts::icCopySTVar, 44, 35, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 31, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 18, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 89, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 17, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icString, 0, 89, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icString, 0, 88, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icString, 0, 87, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceRange, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceRange, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 17, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 10, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 '  ' ) ( # CmdOpenedE_End # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 52, 4},
    {refalrts::icIdentLeft, 0, 51, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 86, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 15, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 15, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 85, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Indent#1/1
    //32: s.OldBracketNumber#1/1
    //33: s.NewBracketNumber#1/1
    //34: e.Indent#1/2
    //36: e.Indent#1/3
    //38: s.NewBracketNumber#1/2
    //39: s.OldBracketNumber#1/2
    // ( e.Indent#1 ) ( # CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 50, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icsVarLeft, 0, 32, 4},
    {refalrts::icsVarLeft, 0, 33, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 34, 30, 0},
    {refalrts::icCopyEVar, 36, 34, 0},
    {refalrts::icCopySTVar, 38, 33, 0},
    {refalrts::icCopySTVar, 39, 32, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 18, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 84, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 18, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icChar, 0, ';', 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 17, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icString, 0, 84, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 17, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icChar, 0, ';', 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icLinkBrackets, 19, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 8, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Indent#1/1
    //20: e.Indent#1/2
    //22: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdEmptyResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 49, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 18, 0},
    {refalrts::icCopyEVar, 22, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 83, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icString, 0, 82, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: e.Indent#1/1
    //28: s.Target#1/1
    //29: s.Sample#1/1
    //30: e.Indent#1/2
    //32: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdCopyVar 'e s.Target#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 48, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icsVarLeft, 0, 28, 4},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 30, 26, 0},
    {refalrts::icCopyEVar, 32, 30, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 81, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 15, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 15, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 79, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icString, 0, 76, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: e.Indent#1/1
    //28: s.Mode#1/1
    //29: s.Target#1/1
    //30: s.Sample#1/1
    //31: e.Indent#1/2
    //33: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdCopyVar s.Mode#1 s.Target#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 48, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icsVarLeft, 0, 28, 4},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 31, 26, 0},
    {refalrts::icCopyEVar, 33, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 80, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 14, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 79, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icString, 0, 76, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //34: e.Indent#1/1
    //36: s.ElemNumber#1/1
    //37: e.String#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: s.ElemNumber#1/2
    // ( e.Indent#1 ) ( # CmdAllocateElem s.ElemNumber#1 # ElString e.String#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 46, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icsVarLeft, 0, 36, 4},
    {refalrts::icIdentLeft, 0, 47, 4},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 39, 34, 0},
    {refalrts::icCopyEVar, 41, 39, 0},
    {refalrts::icCopySTVar, 43, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 78, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 14, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 13, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icString, 0, 8, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 5, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icString, 0, 77, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icString, 0, 76, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceRange, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.ElemNumber#1/1
    //16: e.ElemInfo#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdAllocateElem s.ElemNumber#1 e.ElemInfo#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 46, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icContextSet, 0, 16, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 18, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 16, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.Left#1/1
    //25: s.Right#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdLinkBrackets s.Left#1 s.Right#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 45, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 75, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 14, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 64, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdPushStack s.ElemNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 44, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 74, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 64, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertElem s.ElemNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 43, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 73, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 64, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Number#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertVar 'e s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 42, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 71, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 15, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 64, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Mode#1/1
    //20: s.Number#1/1
    //21: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertVar s.Mode#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 42, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 21, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 72, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 64, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Indent#1/1
    //27: s.Number#1/1
    //28: e.Indent#1/2
    //30: s.Number#1/2
    // ( e.Indent#1 ) ( # CmdInsertRange s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 41, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 27, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 28, 25, 0},
    {refalrts::icCopySTVar, 30, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 71, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 14, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 14, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 13, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icString, 0, 64, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icLinkBrackets, 8, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //20: e.Indent#1/1
    //22: e.Indent#1/2
    //24: e.Indent#1/3
    //26: e.Indent#1/4
    // ( e.Indent#1 ) ( # CmdReturnResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 40, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 22, 20, 0},
    {refalrts::icCopyEVar, 24, 22, 0},
    {refalrts::icCopyEVar, 26, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 70, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icString, 0, 69, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icIdent, 0, 39, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //35: e.Indent#1/1
    //37: s.Number#1/1
    //38: e.Indent#1/2
    //40: e.Indent#1/3
    //42: e.Indent#1/4
    //44: s.Number#1/2
    //45: s.Number#1/3
    // ( e.Indent#1 ) ( # CmdIssueMem s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 38, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 35, 2},
    {refalrts::icsVarLeft, 0, 37, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 38, 35, 0},
    {refalrts::icCopyEVar, 40, 38, 0},
    {refalrts::icCopyEVar, 42, 40, 0},
    {refalrts::icCopySTVar, 44, 37, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 68, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 67, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icString, 0, 66, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icString, 0, 25, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icString, 0, 65, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 0, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icString, 0, 64, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icLinkBrackets, 26, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceRange, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceRange, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 17, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdIfDef )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 37, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 63, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdElse )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 36, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 62, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdEndIf )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 35, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 61, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiFuncArray )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 34, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 60, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +93, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //41: e.Indent#1/1
    //43: e.FuncNames#1/1
    //45: e.LastName#1/1
    //47: e.Indent#1/2
    //49: e.Indent#1/3
    //51: e.Indent#1/4
    //53: e.Indent#1/5
    //55: e.LastName#1/2
    // ( e.Indent#1 ) ( # CmdiFuncArray e.FuncNames#1 ( e.LastName#1 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 34, 4},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 41, 2},
    {refalrts::icContextSet, 0, 43, 4},
    {refalrts::icContextSet, 0, 45, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 47, 41, 0},
    {refalrts::icCopyEVar, 49, 47, 0},
    {refalrts::icCopyEVar, 51, 49, 0},
    {refalrts::icCopyEVar, 53, 51, 0},
    {refalrts::icCopyEVar, 55, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 59, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 8, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 7, 17},
    {refalrts::icFunc, 0, 12, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icString, 0, 58, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 11, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icString, 0, 57, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icFunc, 0, 11, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icString, 0, 56, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icString, 0, 28, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceRange, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 23, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceRange, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceRange, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiLabelArray )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 33, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 55, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Indent#1/1
    //35: e.LabelNames#1/1
    //37: e.LastName#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: e.Indent#1/4
    //45: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiLabelArray e.LabelNames#1 ( e.LastName#1 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 33, 4},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 39, 33, 0},
    {refalrts::icCopyEVar, 41, 39, 0},
    {refalrts::icCopyEVar, 43, 41, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 54, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 8, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 7, 17},
    {refalrts::icFunc, 0, 10, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icString, 0, 53, 24},
    {refalrts::icString, 0, 52, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icString, 0, 28, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceRange, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiNumberArray )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 32, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 51, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //34: e.Indent#1/1
    //36: s.LastNumber#1/1
    //37: e.Numbers#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: e.Indent#1/4
    //45: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiNumberArray e.Numbers#1 s.LastNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 32, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icsVarRight, 0, 36, 4},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 39, 34, 0},
    {refalrts::icCopyEVar, 41, 39, 0},
    {refalrts::icCopyEVar, 43, 41, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 50, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 8, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 7, 15},
    {refalrts::icFunc, 0, 9, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icString, 0, 31, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icString, 0, 49, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icString, 0, 28, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 21, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceRange, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiStringArray )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 48, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //35: e.Indent#1/1
    //37: e.Strings#1/1
    //39: e.LastString#1/1
    //41: e.Indent#1/2
    //43: e.Indent#1/3
    //45: e.Indent#1/4
    //47: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiStringArray e.Strings#1 ( e.LastString#1 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 31, 4},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 35, 2},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icContextSet, 0, 39, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 41, 35, 0},
    {refalrts::icCopyEVar, 43, 41, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icCopyEVar, 47, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 47, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 8, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 7, 17},
    {refalrts::icFunc, 0, 6, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icString, 0, 46, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 5, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icChar, 0, '}', 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icString, 0, 28, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceRange, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 23, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +76, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //34: e.Indent#1/1
    //36: s.Direction#1/1
    //37: s.BracketNumber#1/1
    //38: s.Mode#1/1
    //39: s.VarNumber#1/1
    //40: s.SampleNumber#1/1
    //41: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiRepeat s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 s.SampleNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 30, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icsVarLeft, 0, 36, 4},
    {refalrts::icsVarLeft, 0, 37, 4},
    {refalrts::icsVarLeft, 0, 38, 4},
    {refalrts::icsVarLeft, 0, 39, 4},
    {refalrts::icsVarLeft, 0, 40, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 41, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 37, 9},
    {refalrts::icString, 0, 45, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 3, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icString, 0, 8, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icString, 0, 8, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icString, 0, 8, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icString, 0, 5, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icLinkBrackets, 8, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEPrepare s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 29, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 44, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 5, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEStart s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 28, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 43, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 5, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +72, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Indent#1/1
    //34: s.Direction#1/1
    //35: s.BracketNumber#1/1
    //36: s.InnerBrackets#1/1
    //37: s.NameId#1/1
    //38: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 s.NameId#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 27, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 4},
    {refalrts::icsVarLeft, 0, 35, 4},
    {refalrts::icsVarLeft, 0, 36, 4},
    {refalrts::icsVarLeft, 0, 37, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 38, 32, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 42, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 8, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icString, 0, 5, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 8, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceRange, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.OldBracketNumber#1/1
    //25: s.NewBracketNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 26, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 41, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 5, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Char#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 40, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 39, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 4, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 38, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Indent#1/1
    //31: s.Direction#1/1
    //32: s.BracketNumber#1/1
    //33: s.Mode#1/1
    //34: s.VarNumber#1/1
    //35: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 24, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icsVarLeft, 0, 32, 4},
    {refalrts::icsVarLeft, 0, 33, 4},
    {refalrts::icsVarLeft, 0, 34, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 35, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 37, 9},
    {refalrts::icString, 0, 36, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 3, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icString, 0, 17, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icString, 0, 8, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icString, 0, 5, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icLinkBrackets, 8, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.NameId#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiName s.Direction#1 s.BracketNumber#1 s.NameId#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 23, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 35, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 17, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.NameId#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiIdent s.Direction#1 s.BracketNumber#1 s.NameId#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 22, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 34, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 17, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Number#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiNum s.Direction#1 s.BracketNumber#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 21, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 33, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 17, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Number#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiHugeNum s.Direction#1 s.BracketNumber#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 20, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 32, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 17, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Indent#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInitRAA )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 16, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 31, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 30, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Indent#1/1
    //18: e.Indent#1/2
    //20: e.Indent#1/3
    // ( e.Indent#1 '  ' ) ( # CmdFinRAA )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>(' '), 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 18, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 18, 16, 0},
    {refalrts::icCopyEVar, 20, 18, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 29, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icString, 0, 28, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReserveStack 0 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 17, 4},
    {refalrts::icNumLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 27, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Depth#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReserveStack s.Depth#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 17, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 26, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 25, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: e.Indent#1/1
    //30: e.Indent#1/2
    //32: e.Indent#1/3
    //34: e.Indent#1/4
    //36: e.Indent#1/5
    //38: e.Indent#1/6
    // ( e.Indent#1 ) ( # CmdiRunInterpret )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 16, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 28, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 30, 28, 0},
    {refalrts::icCopyEVar, 32, 30, 0},
    {refalrts::icCopyEVar, 34, 32, 0},
    {refalrts::icCopyEVar, 36, 34, 0},
    {refalrts::icCopyEVar, 38, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 24, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icString, 0, 23, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icString, 0, 22, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icString, 0, 21, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icString, 0, 20, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceRange, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEmptyResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 15, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 19, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.Num#1/1
    //31: s.NumRanges#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiBracket s.Direction#1 s.Num#1 s.NumRanges#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 14, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 32, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 18, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 17, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 8, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 8, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Num#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEmpty s.Num#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 13, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 16, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.ElemNumber#1/1
    //16: s.Type#1/1
    //17: e.Info#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiAllocateElem s.ElemNumber#1 s.Type#1 e.Info#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 12, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 16, 4},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.Target#1/1
    //25: s.Sample#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrCopy 'e s.Target#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 11, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 15, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 7, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.Mode#1/1
    //25: s.Target#1/1
    //26: s.Sample#1/1
    //27: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrCopy s.Mode#1 s.Target#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 11, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icsVarLeft, 0, 26, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 27, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 14, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 7, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Offset#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrSplice 'e s.Offset#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 10, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 13, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Mode#1/1
    //20: s.Offset#1/1
    //21: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrSplice s.Mode#1 s.Offset#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 10, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 21, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 12, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSpliceElem s.ElemNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 9, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 11, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSpliceRange s.ElemNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 8, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 10, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Indent#1/1
    //24: s.Left#1/1
    //25: s.Right#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiLinkBrackets s.Left#1 s.Right#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 26, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 9, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 8, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icString, 0, 7, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiPushStack s.ElemNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 6, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdFail )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 5, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icIdent, 0, 4, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Offset#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiOnFailGoTo s.Offset#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 20, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 4, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 3, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiFail )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReturnResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiInitB0 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 14, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[82];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Text#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdComment e.Text#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    context[14] = context[4];
    context[15] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[16], context[17], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "//", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //23: e.Indent#1/1
    //25: s.MemoryClass#1/1
    //26: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdEnum s.MemoryClass#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEnum<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    context[26] = context[4];
    context[27] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], GenReturn, "GenReturn" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_Fail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[18], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //11: e.Indent#1/1
    //13: s.MemoryClass#1/1
    //14: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdSwap s.MemoryClass#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSwap<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_left( context[13], context[4], context[5] ) )
      continue;
    context[14] = context[4];
    context[15] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenSwap, "GenSwap" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDeclaration # GN_Entry e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_GN_Entry<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[4];
    context[14] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenExtern, "GenExtern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDeclaration # GN_Local e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_GN_Local<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[4];
    context[14] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenForward, "GenForward" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //11: e.Indent#1/1
    //13: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdDefineIdent e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDefineIdent<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[4];
    context[14] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenIdent, "GenIdent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.MemoryClass#1/1
    //16: e.Name#1/1
    // ( e.Indent#1 ) ( # CmdFnStart s.MemoryClass#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFnStart<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    context[16] = context[4];
    context[17] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], GenFnStart, "GenFnStart" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //10: e.Indent#1/1
    //12: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSeparator )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSeparator<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[12], context[13], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    // ( e.Indent#1 '  ' ) ( # CmdFnEnd )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFnEnd<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //18: e.Indent#1/1
    //20: e.Indent#1/2
    //22: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdStartSentence )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdStartSentence<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[18] = context[2];
    context[19] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[18], context[19]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "do {", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "  refalrts::start_sentence();", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[14], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //14: e.Indent#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 '  ' ) ( # CmdEndSentence )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEndSentence<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[16], context[17], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "} while ( 0 );", 14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //54: e.Indent#1/1
    //56: e.Indent#1/2
    //58: e.Indent#1/3
    //60: e.Indent#1/4
    //62: e.Indent#1/5
    //64: e.Indent#1/6
    // ( e.Indent#1 ) ( # CmdInitB0 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInitB0<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[54] = context[2];
    context[55] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[56], context[57], context[54], context[55]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[58], context[59], context[56], context[57]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[60], context[61], context[58], context[59]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[62], context[63], context[60], context[61]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[64], context[65], context[62], context[63]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[11], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " = arg_begin;", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[19], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], " = arg_end;", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "refalrts::move_left( ", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[29], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[35], context[36], "refalrts::move_left( ", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[39], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[41], context[42], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[45], context[46], "refalrts::move_right( ", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[48], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[49], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[51], context[52], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[53] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[44], context[53] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    refalrts::push_stack( context[50] );
    refalrts::push_stack( context[47] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[64], context[65] );
    res = refalrts::splice_elem( res, context[44] );
    refalrts::link_brackets( context[34], context[43] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[37] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[62], context[63] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::link_brackets( context[24], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[16], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[58], context[59] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[8], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[56], context[57] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Char#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdChar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[18], context[19], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchChar, "PrintMatchChar" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Number#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdNumber<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[18], context[19], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchNumber, "PrintMatchNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Name#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    context[17] = context[4];
    context[18] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchName, "PrintMatchName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Name#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdIdent<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    context[17] = context[4];
    context[18] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchIdent, "PrintMatchIdent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //16: e.Indent#1/1
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.InnerBrackets#1/1
    //21: e.Indent#1/2
    //23: e.Indent#1/3
    //25: s.InnerBrackets#1/2
    // ( e.Indent#1 ) ( # CmdBrackets s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[21], context[22], context[16], context[17]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[21], context[22]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintMatchBrackets, "PrintMatchBrackets" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //16: e.Indent#1/1
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.InnerBrackets#1/1
    //21: e.Name#1/1
    //23: e.Indent#1/2
    //25: e.Indent#1/3
    //27: s.InnerBrackets#1/2
    // ( e.Indent#1 ) ( # CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    context[21] = context[4];
    context[22] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[23], context[24], context[16], context[17]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[23], context[24]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintMatchADT, "PrintMatchADT" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdEmpty s.Direction#1 s.BracketNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[17], context[18], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchEmpty, "PrintMatchEmpty" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[16] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Mode#1/1
    //18: s.VarNumber#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchSTVar, "PrintMatchSTVar" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Mode#1/1
    //18: s.Var#1/1
    //19: s.Sample#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Mode#1 s.Var#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintMatchRepeated, "PrintMatchRepeated" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Indent#1/1
    //32: s.BracketNumber#1/1
    //33: s.VarNumber#1/1
    //34: e.Indent#1/2
    //36: e.Indent#1/3
    //38: s.VarNumber#1/2
    //39: s.BracketNumber#1/2
    // ( e.Indent#1 ) ( # CmdClosedE # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::svar_left( context[32], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[34], context[35], context[30], context[31]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[34], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[33]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " = ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], " = ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[19], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[8], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiContextSet s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiContextSet<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icContextSet, 0, ", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Indent#1/1
    //34: s.BracketNumber#1/1
    //35: s.VarNumber#1/1
    //36: e.Indent#1/2
    //38: e.Indent#1/3
    //40: e.Indent#1/4
    //42: e.Indent#1/5
    //44: s.VarNumber#1/2
    // ( e.Indent#1 ) ( # CmdOpenedE_Start # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenedE_Start<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[36], context[37], context[32], context[33]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[36], context[37]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[40], context[41], context[38], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[42], context[43], context[40], context[41]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[35]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " = 0;", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], " = 0;", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "refalrts::start_e_loop();", 25 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "do {", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[17], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[10], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 '  ' ) ( # CmdOpenedE_End # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenedE_End<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "} while ( refalrts::open_evar_advance( ", 39 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], " ) );", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Indent#1/1
    //32: s.OldBracketNumber#1/1
    //33: s.NewBracketNumber#1/1
    //34: e.Indent#1/2
    //36: e.Indent#1/3
    //38: s.NewBracketNumber#1/2
    //39: s.OldBracketNumber#1/2
    // ( e.Indent#1 ) ( # CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::svar_left( context[32], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[34], context[35], context[30], context[31]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[34], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[33]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " = ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], " = ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[19], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[8], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //18: e.Indent#1/1
    //20: e.Indent#1/2
    //22: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdEmptyResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmptyResult<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[18] = context[2];
    context[19] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[18], context[19]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "refalrts::reset_allocator();", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "refalrts::Iter res = arg_begin;", 31 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[14], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //26: e.Indent#1/1
    //28: s.Target#1/1
    //29: s.Sample#1/1
    //30: e.Indent#1/2
    //32: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdCopyVar 'e s.Target#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::svar_left( context[28], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[30], context[31], context[26], context[27]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[32], context[33], context[30], context[31]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "if (! refalrts::copy_evar(", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "))", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "  return refalrts::cNoMemory;", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //26: e.Indent#1/1
    //28: s.Mode#1/1
    //29: s.Target#1/1
    //30: s.Sample#1/1
    //31: e.Indent#1/2
    //33: e.Indent#1/3
    // ( e.Indent#1 ) ( # CmdCopyVar s.Mode#1 s.Target#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::svar_left( context[28], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[31], context[32], context[26], context[27]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[31], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "if (! refalrts::copy_stvar(", 27 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "))", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "  return refalrts::cNoMemory;", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //34: e.Indent#1/1
    //36: s.ElemNumber#1/1
    //37: e.String#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: s.ElemNumber#1/2
    // ( e.Indent#1 ) ( # CmdAllocateElem s.ElemNumber#1 # ElString e.String#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_left( context[36], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[4], context[5] ) )
      continue;
    context[37] = context[4];
    context[38] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[39], context[40], context[34], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[41], context[42], context[39], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[43], context[36]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "if( ! refalrts::alloc_chars( ", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], PrintString, "PrintString" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], " ) )", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "  return refalrts::cNoMemory;", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[30], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[8], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.ElemNumber#1/1
    //16: e.ElemInfo#1/1
    //18: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdAllocateElem s.ElemNumber#1 e.ElemInfo#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    context[16] = context[4];
    context[17] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[18], context[19], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintAllocateElem, "PrintAllocateElem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.Left#1/1
    //25: s.Right#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdLinkBrackets s.Left#1 s.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "refalrts::link_brackets( ", 25 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdPushStack s.ElemNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "refalrts::push_stack( ", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertElem s.ElemNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "res = refalrts::splice_elem( res, ", 34 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Number#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertVar 'e s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "res = refalrts::splice_evar( res, ", 34 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Mode#1/1
    //20: s.Number#1/1
    //21: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInsertVar s.Mode#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[21], context[22], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "res = refalrts::splice_stvar( res, ", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Indent#1/1
    //27: s.Number#1/1
    //28: e.Indent#1/2
    //30: s.Number#1/2
    // ( e.Indent#1 ) ( # CmdInsertRange s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertRange<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::svar_left( context[27], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[28], context[29], context[25], context[26]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "res = refalrts::splice_evar( res, ", 34 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //20: e.Indent#1/1
    //22: e.Indent#1/2
    //24: e.Indent#1/3
    //26: e.Indent#1/4
    // ( e.Indent#1 ) ( # CmdReturnResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdReturnResult<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[20] = context[2];
    context[21] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[22], context[23], context[20], context[21]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[22], context[23]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[24], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "refalrts::use( res );", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "refalrts::splice_to_freelist( arg_begin, arg_end );", 51 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], GenReturn, "GenReturn" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[12], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //35: e.Indent#1/1
    //37: s.Number#1/1
    //38: e.Indent#1/2
    //40: e.Indent#1/3
    //42: e.Indent#1/4
    //44: s.Number#1/2
    //45: s.Number#1/3
    // ( e.Indent#1 ) ( # CmdIssueMem s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[35] = context[2];
    context[36] = context[3];
    if( ! refalrts::svar_left( context[37], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[38], context[39], context[35], context[36]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[40], context[41], context[38], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[42], context[43], context[40], context[41]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[37]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[45], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "// issue here memory for vars with ", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " elems", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "refalrts::Iter context[", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "];", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "refalrts::zeros( context, ", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], " );", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[26], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[29] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[17], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdIfDef )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdIfDef<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "#ifdef INTERPRET", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdElse )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdElse<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "#else", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    // ( e.Indent#1 ) ( # CmdEndIf )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEndIf<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "#endif", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiFuncArray )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiFuncArray<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "using refalrts::functions;", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //41: e.Indent#1/1
    //43: e.FuncNames#1/1
    //45: e.LastName#1/1
    //47: e.Indent#1/2
    //49: e.Indent#1/3
    //51: e.Indent#1/4
    //53: e.Indent#1/5
    //55: e.LastName#1/2
    // ( e.Indent#1 ) ( # CmdiFuncArray e.FuncNames#1 ( e.LastName#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiFuncArray<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[41] = context[2];
    context[42] = context[3];
    context[43] = context[4];
    context[44] = context[5];
    context[45] = context[6];
    context[46] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[47], context[48], context[41], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[49], context[50], context[47], context[48]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[51], context[52], context[49], context[50]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[53], context[54], context[51], context[52]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[55], context[56], context[45], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "static const refalrts::RefalFunction functions[] = {", 52 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_GenCommand_0, "lambda_GenCommand_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "  { ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], ", \"", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[34], context[35], "\" }", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[38], context[39], "};", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[37], context[40] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_elem( res, context[37] );
    refalrts::link_brackets( context[23], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[31] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiLabelArray )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiLabelArray<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "using refalrts::idents;", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //33: e.Indent#1/1
    //35: e.LabelNames#1/1
    //37: e.LastName#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: e.Indent#1/4
    //45: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiLabelArray e.LabelNames#1 ( e.LastName#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiLabelArray<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[33] = context[2];
    context[34] = context[3];
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[39], context[40], context[33], context[34]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[41], context[42], context[39], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[43], context[44], context[41], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "static const refalrts::RefalIdentifier idents[] = {", 51 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_GenCommand_1, "lambda_GenCommand_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "  & ident_", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "<int>::name", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "};", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[29], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[23], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiNumberArray )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiNumberArray<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "using refalrts::numbers;", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //34: e.Indent#1/1
    //36: s.LastNumber#1/1
    //37: e.Numbers#1/1
    //39: e.Indent#1/2
    //41: e.Indent#1/3
    //43: e.Indent#1/4
    //45: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiNumberArray e.Numbers#1 s.LastNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiNumberArray<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_right( context[36], context[4], context[5] ) )
      continue;
    context[37] = context[4];
    context[38] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[39], context[40], context[34], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[41], context[42], context[39], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[43], context[44], context[41], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "static const refalrts::RefalNumber numbers[] = {", 48 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], lambda_GenCommand_2, "lambda_GenCommand_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "UL", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "};", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[30], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[21], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiStringArray )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiStringArray<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "using refalrts::strings;", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //35: e.Indent#1/1
    //37: e.Strings#1/1
    //39: e.LastString#1/1
    //41: e.Indent#1/2
    //43: e.Indent#1/3
    //45: e.Indent#1/4
    //47: e.Indent#1/5
    // ( e.Indent#1 ) ( # CmdiStringArray e.Strings#1 ( e.LastString#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiStringArray<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[35] = context[2];
    context[36] = context[3];
    context[37] = context[4];
    context[38] = context[5];
    context[39] = context[6];
    context[40] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[41], context[42], context[35], context[36]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[43], context[44], context[41], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[47], context[48], context[45], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "static const refalrts::StringItem strings[] = {", 47 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_GenCommand_3, "lambda_GenCommand_3" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "  {", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], PrintString, "PrintString" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "};", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[23], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //34: e.Indent#1/1
    //36: s.Direction#1/1
    //37: s.BracketNumber#1/1
    //38: s.Mode#1/1
    //39: s.VarNumber#1/1
    //40: s.SampleNumber#1/1
    //41: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiRepeat s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 s.SampleNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiRepeat<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_left( context[36], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[38], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[39], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[40], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[41], context[42], context[34], context[35]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::ic", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "Repeat", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEPrepare s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEPrepare<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icEPrepare, 0, ", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEStart s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icEStart, 0, ", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Indent#1/1
    //34: s.Direction#1/1
    //35: s.BracketNumber#1/1
    //36: s.InnerBrackets#1/1
    //37: s.NameId#1/1
    //38: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 s.NameId#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[36], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[38], context[39], context[32], context[33]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icADT", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.OldBracketNumber#1/1
    //25: s.NewBracketNumber#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiSave<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icSave, 0, ", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Char#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiChar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icChar", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, static_cast<unsigned char>(\'", 33 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "\'), ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //29: e.Indent#1/1
    //31: s.Direction#1/1
    //32: s.BracketNumber#1/1
    //33: s.Mode#1/1
    //34: s.VarNumber#1/1
    //35: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiVar<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[35], context[36], context[29], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::ic", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "Var", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.NameId#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiName s.Direction#1 s.BracketNumber#1 s.NameId#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icFunc", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.NameId#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiIdent s.Direction#1 s.BracketNumber#1 s.NameId#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icIdent", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Number#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiNum s.Direction#1 s.BracketNumber#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiNum<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icNum", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.Number#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiHugeNum s.Direction#1 s.BracketNumber#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icHugeNum", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //14: e.Indent#1/1
    //16: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdInitRAA )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInitRAA<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[16], context[17], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "static const refalrts::RASLCommand raa[] = {", 44 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //16: e.Indent#1/1
    //18: e.Indent#1/2
    //20: e.Indent#1/3
    // ( e.Indent#1 '  ' ) ( # CmdFinRAA )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_right( ' ', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFinRAA<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[18], context[19], context[16], context[17]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[18], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "  {refalrts::icEnd, 0, 0, 0}", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "};", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[12], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReserveStack 0 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiReserveStack<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::number_left( 0UL, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "int open_e_stack[1];", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Depth#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReserveStack s.Depth#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiReserveStack<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "int open_e_stack[", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "];", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //28: e.Indent#1/1
    //30: e.Indent#1/2
    //32: e.Indent#1/3
    //34: e.Indent#1/4
    //36: e.Indent#1/5
    //38: e.Indent#1/6
    // ( e.Indent#1 ) ( # CmdiRunInterpret )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiRunInterpret<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[28] = context[2];
    context[29] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[30], context[31], context[28], context[29]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[32], context[33], context[30], context[31]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[32], context[33]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[34], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[36], context[37]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "refalrts::FnResult res = refalrts::interpret_array(", 51 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "  raa, context, arg_begin, arg_end,", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], "  functions, idents, numbers, strings, open_e_stack", 51 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], ");", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "return res;", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[20], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[12], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEmptyResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEmptyResult<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icEmptyResult, 0, 0, 0},", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //27: e.Indent#1/1
    //29: s.Direction#1/1
    //30: s.Num#1/1
    //31: s.NumRanges#1/1
    //32: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiBracket s.Direction#1 s.Num#1 s.NumRanges#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiBracket<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icBracket", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], PrintDirection, "PrintDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Num#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiEmpty s.Num#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEmpty<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icEmpty, 0, 0, ", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Indent#1/1
    //15: s.ElemNumber#1/1
    //16: s.Type#1/1
    //17: e.Info#1/1
    //19: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiAllocateElem s.ElemNumber#1 s.Type#1 e.Info#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[4], context[5] ) )
      continue;
    context[17] = context[4];
    context[18] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintInterpretAllocateElem, "PrintInterpretAllocateElem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.Target#1/1
    //25: s.Sample#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrCopy 'e s.Target#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdArrCopy<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icCopyEVar, ", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", 0},", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.Mode#1/1
    //25: s.Target#1/1
    //26: s.Sample#1/1
    //27: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrCopy s.Mode#1 s.Target#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdArrCopy<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[27], context[28], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icCopySTVar, ", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", 0},", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Offset#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrSplice 'e s.Offset#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdArrSplice<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icSpliceEVar, 0, 0, ", 31 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Mode#1/1
    //20: s.Offset#1/1
    //21: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdArrSplice s.Mode#1 s.Offset#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdArrSplice<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[21], context[22], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icSpliceSTVar, 0, 0, ", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSpliceElem s.ElemNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSpliceElem<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icSpliceElem, 0, 0, ", 31 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdSpliceRange s.ElemNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSpliceRange<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icSpliceRange, 0, 0, ", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //22: e.Indent#1/1
    //24: s.Left#1/1
    //25: s.Right#1/1
    //26: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiLinkBrackets s.Left#1 s.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiLinkBrackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icLinkBrackets, ", 27 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], ", 0},", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.ElemNumber#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiPushStack s.ElemNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiPushStack<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icPushStack, 0, 0, ", 30 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "},", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdFail )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFail<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenReturn, "GenReturn" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_Fail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //17: e.Indent#1/1
    //19: s.Offset#1/1
    //20: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiOnFailGoTo s.Offset#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[20], context[21], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icOnFailGoTo, +", 26 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], ", 0, 0},", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiFail )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiFail<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icFail, 0, 0, 0},", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //12: e.Indent#1/1
    //14: e.Indent#1/2
    // ( e.Indent#1 ) ( # CmdiReturnResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiReturnResult<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icReturnResult, 0, 0, 0},", 36 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //12: e.Indent#1/1
  //14: e.Indent#1/2
  // ( e.Indent#1 ) ( # CmdiInitB0 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdiInitB0<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = context[2];
  context[13] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[14], context[15], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "{refalrts::icInitB0, 0, 0, 0},", 30 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EscapeChar, "EscapeChar" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Char#1/1
    // s.Char#1
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: s.Char#1/1
  // s.Char#1
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], EscapeChar, "EscapeChar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EscapeChar, "EscapeChar" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.String#1/1
    // e.String#1
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.String#1/1
  // e.String#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], EscapeChar, "EscapeChar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoPrintLength, "DoPrintLength" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.String#1/1
    // e.String#1
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icInt, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.String#1/1
  // e.String#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoPrintLength, "DoPrintLength" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[4], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoPrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { Inc, "Inc" },
    { DoPrintLength, "DoPrintLength" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Length#1/1
    //9: s.Char#1/1
    //10: e.Tail#1/1
    // s.Length#1 s.Char#1 e.Tail#1
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icContextSet, 0, 10, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Length#1/1
    // s.Length#1
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //8: s.Length#1/1
    //9: s.Char#1/1
    //10: e.Tail#1/1
    // s.Length#1 s.Char#1 e.Tail#1
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    context[10] = context[0];
    context[11] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], DoPrintLength, "DoPrintLength" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: s.Length#1/1
  // s.Length#1
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintLength, "PrintLength" },
    { EscapeString, "EscapeString" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"\", ", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.String#1/1
    //13: e.String#1/2
    // e.String#1
    {refalrts::icContextSet, 0, 11, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 13, 11, 0},
    {refalrts::icChar, 0, '\"', 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //11: e.String#1/1
  //13: e.String#1/2
  // e.String#1
  context[11] = context[0];
  context[12] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[13], context[14], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[2], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], EscapeString, "EscapeString" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "\", ", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], PrintLength, "PrintLength" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Escape, "Escape" },
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"char", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Indent#1/1
    //20: s.Direction#1/1
    //21: s.BracketNumber#1/1
    //22: s.Char#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Char#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icChar, 0, '\'', 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icChar, 0, '\'', 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //18: e.Indent#1/1
  //20: s.Direction#1/1
  //21: s.BracketNumber#1/1
  //22: s.Char#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Char#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[2];
  context[19] = context[3];
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "char", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Escape, "Escape" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[20] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"UL", 2},
    {"number", 6}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Indent#1/1
    //20: s.Direction#1/1
    //21: s.BracketNumber#1/1
    //22: s.Number#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Number#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //18: e.Indent#1/1
  //20: s.Direction#1/1
  //21: s.BracketNumber#1/1
  //22: s.Number#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Number#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[2];
  context[19] = context[3];
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "number", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "UL", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[20] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"function", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Indent#1/1
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: e.Name#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 e.Name#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //13: e.Indent#1/1
  //15: s.Direction#1/1
  //16: s.BracketNumber#1/1
  //17: e.Name#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "function", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"<int>::name", 11},
    {" & ident_", 9},
    {"ident", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Direction#1/1
    //20: s.BracketNumber#1/1
    //21: e.Name#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 e.Name#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icContextSet, 0, 21, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icString, 0, 1, 12},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //17: e.Indent#1/1
  //19: s.Direction#1/1
  //20: s.BracketNumber#1/1
  //21: e.Name#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[0];
  context[22] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "ident", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], " & ident_", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "<int>::name", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[19] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextRange, "ContextRange" },
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"brackets", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Indent#1/1
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.InnerNum#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.InnerNum#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icsVarLeft, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //16: e.Indent#1/1
  //18: s.Direction#1/1
  //19: s.BracketNumber#1/1
  //20: s.InnerNum#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.InnerNum#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = context[2];
  context[17] = context[3];
  if( ! refalrts::svar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "brackets", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[19] );
  res = refalrts::splice_stvar( res, context[18] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextRange, "ContextRange" },
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {", ", 2},
    {"adt", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Indent#1/1
    //20: s.Direction#1/1
    //21: s.BracketNumber#1/1
    //22: s.InnerNum#1/1
    //23: e.Name#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.InnerNum#1 e.Name#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icContextSet, 0, 23, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //18: e.Indent#1/1
  //20: s.Direction#1/1
  //21: s.BracketNumber#1/1
  //22: s.InnerNum#1/1
  //23: e.Name#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.InnerNum#1 e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[2];
  context[19] = context[3];
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = context[0];
  context[24] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "adt", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], ", ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[20] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"continue;", 9},
    {"return refalrts::cRecognitionImpossible;", 40}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +8, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '  '
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(' '), 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(' '), 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.OtherIndent#1
    // Unused closed variable e.OtherIndent#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '  '
    if( ! refalrts::char_left( ' ', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( ' ', context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "return refalrts::cRecognitionImpossible;", 40 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.OtherIndent#1
  // Unused closed variable e.OtherIndent#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "continue;", 9 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BreakerFromIndent, "BreakerFromIndent" },
    { ContextRange, "ContextRange" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  ", 2},
    {" ) )", 4},
    {"if( ! refalrts::empty_seq( ", 27}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //20: e.Indent#1/1
    //22: s.BracketNumber#1/1
    //23: e.Indent#1/2
    //25: e.Indent#1/3
    // ( e.Indent#1 ) s.BracketNumber#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 23, 20, 0},
    {refalrts::icCopyEVar, 25, 23, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 13, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 4, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //20: e.Indent#1/1
  //22: s.BracketNumber#1/1
  //23: e.Indent#1/2
  //25: e.Indent#1/3
  // ( e.Indent#1 ) s.BracketNumber#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = context[2];
  context[21] = context[3];
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[23], context[24], context[20], context[21]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[23], context[24]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "if( ! refalrts::empty_seq( ", 27 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], " ) )", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "  ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], BreakerFromIndent, "BreakerFromIndent" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[13], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[4], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgRight<int>::name,
    & ident_AlgLeft<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"right", 5},
    {"left", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # AlgLeft
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # AlgRight
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # AlgLeft
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "left", 4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # AlgRight
  if( ! refalrts::ident_left(  & ident_AlgRight<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "right", 5 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"tvar", 4},
    {"svar", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // 's'
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('s'), 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // 't'
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // 's'
    if( ! refalrts::char_left( 's', context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "svar", 4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // 't'
  if( ! refalrts::char_left( 't', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "tvar", 4 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextItem, "ContextItem" },
    { VarMatchFunction, "VarMatchFunction" },
    { PrintMatch, "PrintMatch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Indent#1/1
    //19: s.Direction#1/1
    //20: s.BracketNumber#1/1
    //21: s.Mode#1/1
    //22: s.VarNumber#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //17: e.Indent#1/1
  //19: s.Direction#1/1
  //20: s.BracketNumber#1/1
  //21: s.Mode#1/1
  //22: s.VarNumber#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], VarMatchFunction, "VarMatchFunction" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[8], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[19] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ContextItem, "ContextItem" },
    { PrintMatch, "PrintMatch" },
    { ContextRange, "ContextRange" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {", ", 2},
    {"repeated_stvar", 14},
    {"repeated_evar", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +54, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.Indent#1/1
    //23: s.Direction#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: s.SampleNumber#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 'e s.VarNumber#1 s.SampleNumber#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 23, 0},
    {refalrts::icsVarLeft, 0, 24, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 0},
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.Indent#1/1
    //23: s.Direction#1/1
    //24: s.BracketNumber#1/1
    //25: s.Mode#1/1
    //26: s.VarNumber#1/1
    //27: s.SampleNumber#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 s.SampleNumber#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 23, 0},
    {refalrts::icsVarLeft, 0, 24, 0},
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icsVarLeft, 0, 27, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //21: e.Indent#1/1
    //23: s.Direction#1/1
    //24: s.BracketNumber#1/1
    //25: s.VarNumber#1/1
    //26: s.SampleNumber#1/1
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 'e s.VarNumber#1 s.SampleNumber#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::svar_left( context[23], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "repeated_evar", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //21: e.Indent#1/1
  //23: s.Direction#1/1
  //24: s.BracketNumber#1/1
  //25: s.Mode#1/1
  //26: s.VarNumber#1/1
  //27: s.SampleNumber#1/1
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 s.SampleNumber#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[2];
  context[22] = context[3];
  if( ! refalrts::svar_left( context[23], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], PrintMatch, "PrintMatch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "repeated_stvar", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], ", ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[27] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[26] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[24] );
  res = refalrts::splice_stvar( res, context[23] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BreakerFromIndent, "BreakerFromIndent" },
    { ContextRange, "ContextRange" },
    { StrFromDirection, "StrFromDirection" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  ", 2},
    {" ) )", 4},
    {", ", 2},
    {"( ", 2},
    {"if( ! refalrts::", 16}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Indent#1/1
    //32: s.Direction#1/1
    //33: s.BracketNumber#1/1
    //34: e.Function#1/1
    //36: e.TextRep#1/1
    //38: e.Indent#1/2
    //40: e.Indent#1/3
    // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 ( e.Function#1 ) e.TextRep#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icsVarLeft, 0, 32, 0},
    {refalrts::icsVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 38, 30, 0},
    {refalrts::icCopyEVar, 40, 38, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 4, 7},
    {refalrts::icChar, 0, '_', 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 3, 13},
    {refalrts::icString, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icString, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icString, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icLinkBrackets, 23, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 6, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //30: e.Indent#1/1
  //32: s.Direction#1/1
  //33: s.BracketNumber#1/1
  //34: e.Function#1/1
  //36: e.TextRep#1/1
  //38: e.Indent#1/2
  //40: e.Indent#1/3
  // ( e.Indent#1 ) s.Direction#1 s.BracketNumber#1 ( e.Function#1 ) e.TextRep#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = context[2];
  context[31] = context[3];
  if( ! refalrts::svar_left( context[32], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[33], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[34] = context[4];
  context[35] = context[5];
  context[36] = context[0];
  context[37] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[38], context[39], context[30], context[31]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[38], context[39]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "if( ! refalrts::", 16 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], StrFromDirection, "StrFromDirection" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "( ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], ", ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], " ) )", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[24], context[25], "  ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], BreakerFromIndent, "BreakerFromIndent" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[23], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[26] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[6], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[33] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[32] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AllocatorFuncArgument, "AllocatorFuncArgument" },
    { ContextItem, "ContextItem" },
    { AllocatorFuncName, "AllocatorFuncName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  return refalrts::cNoMemory;", 29},
    {" ) )", 4},
    {"( ", 2},
    {"if( ! refalrts::", 16}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Indent#1/1
    //27: s.ElemNumber#1/1
    //28: s.ElementType#1/1
    //29: e.Info#1/1
    //31: e.Indent#1/2
    //33: s.ElementType#1/2
    // ( e.Indent#1 ) s.ElemNumber#1 s.ElementType#1 e.Info#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 27, 0},
    {refalrts::icsVarLeft, 0, 28, 0},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 31, 25, 0},
    {refalrts::icCopySTVar, 33, 28, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icString, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icString, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 4, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //25: e.Indent#1/1
  //27: s.ElemNumber#1/1
  //28: s.ElementType#1/1
  //29: e.Info#1/1
  //31: e.Indent#1/2
  //33: s.ElementType#1/2
  // ( e.Indent#1 ) s.ElemNumber#1 s.ElementType#1 e.Info#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = context[2];
  context[26] = context[3];
  if( ! refalrts::svar_left( context[27], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[28], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = context[0];
  context[30] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[31], context[32], context[25], context[26]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[33], context[28]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "if( ! refalrts::", 16 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], AllocatorFuncName, "AllocatorFuncName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "( ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], AllocatorFuncArgument, "AllocatorFuncArgument" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], " ) )", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "  return refalrts::cNoMemory;", 29 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[21], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[4], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_stvar( res, context[33] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[27] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[28] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AllocatorFuncName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElCloseCall<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ElIdent<int>::name,
    & ident_ElNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"alloc_close_call", 16},
    {"alloc_open_call", 15},
    {"alloc_close_bracket", 19},
    {"alloc_open_bracket", 18},
    {"alloc_close_adt", 15},
    {"alloc_open_adt", 14},
    {"alloc_ident", 11},
    {"alloc_number", 12},
    {"alloc_name", 10},
    {"alloc_char", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElChar
    {refalrts::icIdentLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 9, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElName
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 8, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElNumber
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 7, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElIdent
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 6, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenADT
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseADT
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseBracket
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseCall
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElChar
    if( ! refalrts::ident_left(  & ident_ElChar<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_char", 10 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElName
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_name", 10 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElNumber
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_number", 12 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElIdent
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_ident", 11 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenADT
    if( ! refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_open_adt", 14 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseADT
    if( ! refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_close_adt", 15 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenBracket
    if( ! refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_open_bracket", 18 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseBracket
    if( ! refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_close_bracket", 19 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenCall
    if( ! refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "alloc_open_call", 15 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # ElCloseCall
  if( ! refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "alloc_close_call", 16 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AllocatorFuncArgument(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { PrintName, "PrintName" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElIdent<int>::name,
    & ident_ElNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"<int>::name", 11},
    {", & ident_", 10},
    {"UL", 2},
    {", ", 2},
    {", \"", 3},
    {", \'", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Char#1/1
    // # ElChar s.Char#1
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icChar, 0, '\'', 7},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Name#1/1
    //15: e.Name#1/2
    // # ElName e.Name#1
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 15, 13, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icString, 0, 4, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icChar, 0, '\"', 12},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: s.Number#1/1
    // # ElNumber s.Number#1
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icString, 0, 2, 7},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Name#1/1
    // # ElIdent e.Name#1
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: s.Other#1/1
    // s.Other#1
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //8: s.Char#1/1
    // # ElChar s.Char#1
    if( ! refalrts::ident_left(  & ident_ElChar<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], ", \'", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Name#1/1
    //15: e.Name#1/2
    // # ElName e.Name#1
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[0], context[1] ) )
      continue;
    context[13] = context[0];
    context[14] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[15], context[16], context[13], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[2], context[3], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], ", \"", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '\"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //9: s.Number#1/1
    // # ElNumber s.Number#1
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], ", ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "UL", 2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //6: e.Name#1/1
    // # ElIdent e.Name#1
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[0], context[1] ) )
      continue;
    context[6] = context[0];
    context[7] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], ", & ident_", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[4], context[5], "<int>::name", 11 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: s.Other#1/1
  // s.Other#1
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintInterpretAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { AllocatorCommandInfo, "AllocatorCommandInfo" },
    { AllocatorCommandTag, "AllocatorCommandTag" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"},", 2},
    {", ", 2},
    {", 0, ", 5},
    {"{refalrts::", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //23: e.Indent#1/1
    //25: s.ElemNumber#1/1
    //26: s.ElementType#1/1
    //27: e.Info#1/1
    //29: s.ElementType#1/2
    // ( e.Indent#1 ) s.ElemNumber#1 s.ElementType#1 e.Info#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icContextSet, 0, 27, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 29, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icString, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icString, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 4, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //23: e.Indent#1/1
  //25: s.ElemNumber#1/1
  //26: s.ElementType#1/1
  //27: e.Info#1/1
  //29: s.ElementType#1/2
  // ( e.Indent#1 ) s.ElemNumber#1 s.ElementType#1 e.Info#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = context[2];
  context[24] = context[3];
  if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[27] = context[0];
  context[28] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[29], context[26]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "{refalrts::", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], AllocatorCommandTag, "AllocatorCommandTag" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], ", 0, ", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], AllocatorCommandInfo, "AllocatorCommandInfo" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], ", ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "},", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[25] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_stvar( res, context[29] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[26] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AllocatorCommandTag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElString<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_ElIdent<int>::name,
    & ident_ElNumber<int>::name,
    & ident_ElHugeNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"icString", 8},
    {"icBracket", 9},
    {"icIdent", 7},
    {"icInt", 5},
    {"icHugeInt", 9},
    {"icFunc", 6},
    {"icChar", 6}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElChar
    {refalrts::icIdentLeft, 0, 11, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 6, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElName
    {refalrts::icIdentLeft, 0, 10, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElHugeNumber
    {refalrts::icIdentLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElNumber
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElIdent
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenBracket
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenADT
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenCall
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseADT
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElString
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[11];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElChar
    if( ! refalrts::ident_left(  & ident_ElChar<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icChar", 6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElName
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icFunc", 6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElHugeNumber
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icHugeInt", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElNumber
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icInt", 5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElIdent
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icIdent", 7 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenBracket
    if( ! refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenADT
    if( ! refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenCall
    if( ! refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseBracket
    if( ! refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseADT
    if( ! refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseCall
    if( ! refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "icBracket", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # ElString
  if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "icString", 8 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AllocatorCommandInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElString<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_ElIdent<int>::name,
    & ident_ElNumber<int>::name,
    & ident_ElHugeNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"refalrts::ibCloseCall", 21},
    {"refalrts::ibCloseADT", 20},
    {"refalrts::ibCloseBracket", 24},
    {"refalrts::ibOpenCall", 20},
    {"refalrts::ibOpenADT", 19},
    {"refalrts::ibOpenBracket", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Char#1/1
    // # ElChar s.Char#1
    {refalrts::icIdentLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '\'', 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icChar, 0, '\'', 6},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.NameId#1/1
    // # ElName s.NameId#1
    {refalrts::icIdentLeft, 0, 10, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.NumberId#1/1
    // # ElHugeNumber s.NumberId#1
    {refalrts::icIdentLeft, 0, 9, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Number#1/1
    // # ElNumber s.Number#1
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.NameId#1/1
    // # ElIdent s.NameId#1
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenBracket
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenADT
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElOpenCall
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseADT
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ElCloseCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.StringId#1/1
    // # ElString s.StringId#1
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[11];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //7: s.Char#1/1
    // # ElChar s.Char#1
    if( ! refalrts::ident_left(  & ident_ElChar<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[6], '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, context[6] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[3] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //5: s.NameId#1/1
    // # ElName s.NameId#1
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //5: s.NumberId#1/1
    // # ElHugeNumber s.NumberId#1
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //5: s.Number#1/1
    // # ElNumber s.Number#1
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //5: s.NameId#1/1
    // # ElIdent s.NameId#1
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenBracket
    if( ! refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibOpenBracket", 23 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenADT
    if( ! refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibOpenADT", 19 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElOpenCall
    if( ! refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibOpenCall", 20 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseBracket
    if( ! refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibCloseBracket", 24 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseADT
    if( ! refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibCloseADT", 20 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # ElCloseCall
    if( ! refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "refalrts::ibCloseCall", 21 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: s.StringId#1/1
  // # ElString s.StringId#1
  if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
