// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
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

// identifier #CmdOpenELoop
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenELoop {
  static const char *name() {
    return "CmdOpenELoop";
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

// identifier #CmdSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdSentence {
  static const char *name() {
    return "CmdSentence";
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

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

static refalrts::FnResult lambda_LowLevelRASL_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LowLevelRASL_Function, "LowLevelRASL_Function" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSeparator<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.ScopeClass#2/1
    //12: e.Name#2/1
    //14: e.Commands#2/1
    // ( # Function s.ScopeClass#2 ( e.Name#2 ) e.Commands#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icContextSet, 0, 12, 4},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdEnum s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdSwap s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdDeclaration s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: e.Name#2/1
    // ( # CmdDefineIdent e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSeparator )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
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
    //11: s.ScopeClass#2/1
    //12: e.Name#2/1
    //14: e.Commands#2/1
    // ( # Function s.ScopeClass#2 ( e.Name#2 ) e.Commands#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Function<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[12] = context[4];
    context[13] = context[5];
    context[14] = context[2];
    context[15] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], LowLevelRASL_Function, "LowLevelRASL_Function" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[7] );
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
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdEnum s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEnum<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdEnum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdSwap s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSwap<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdSwap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # CmdDeclaration s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdDeclaration<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: e.Name#2/1
    // ( # CmdDefineIdent e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDefineIdent<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[7] = context[2];
    context[8] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdDefineIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
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
  // ( # CmdSeparator )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdSeparator<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdSeparator<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_LowLevelRASL_0, "lambda_LowLevelRASL_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.ProgramElements#1/1
    // e.ProgramElements#1
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
  //6: e.ProgramElements#1/1
  // e.ProgramElements#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], lambda_LowLevelRASL_0, "lambda_LowLevelRASL_0" ) )
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

static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateResult_Sentences, "GenerateResult_Sentences" },
    { PrepareInterpretCommands, "PrepareInterpretCommands" },
    { OutlineConstants, "OutlineConstants" },
    { PrepareOpenEStack, "PrepareOpenEStack" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdFnEnd<int>::name,
    & ident_CmdEndIf<int>::name,
    & ident_CmdElse<int>::name,
    & ident_CmdiRunInterpret<int>::name,
    & ident_CmdFinRAA<int>::name,
    & ident_CmdInitRAA<int>::name,
    & ident_CmdIfDef<int>::name,
    & ident_CmdIssueMem<int>::name,
    & ident_CmdFnStart<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //58: s.ScopeClass#1/1
    //59: e.Name#1/1
    //61: e.Commands#1/1
    //63: s.Number#1/1
    //64: e.Commands#1/2
    // s.ScopeClass#1 ( e.Name#1 ) ( # CmdIssueMem s.Number#1 ) e.Commands#1
    {refalrts::icsVarLeft, 0, 58, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 7, 4},
    {refalrts::icContextSet, 0, 59, 2},
    {refalrts::icContextSet, 0, 61, 0},
    {refalrts::icsVarLeft, 0, 63, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 64, 61, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 8, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 7, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 6, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icInt, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icInt, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icInt, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icInt, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 5, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icFunc, 0, 1, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 4, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icInt, 0, 0, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icIdent, 0, 3, 44},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icIdent, 0, 2, 47},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 49},
    {refalrts::icFunc, 0, 0, 50},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 51},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 52},
    {refalrts::icIdent, 0, 1, 53},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 55},
    {refalrts::icIdent, 0, 0, 56},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 57},
    {refalrts::icLinkBrackets, 55, 57, 0},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icLinkBrackets, 52, 54, 0},
    {refalrts::icSpliceElem, 0, 0, 54},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 51},
    {refalrts::icPushStack, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceEVar, 0, 0, 64},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icLinkBrackets, 46, 48, 0},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icLinkBrackets, 43, 45, 0},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 37, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 61},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 19, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 63},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 59},
    {refalrts::icSpliceSTVar, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  //58: s.ScopeClass#1/1
  //59: e.Name#1/1
  //61: e.Commands#1/1
  //63: s.Number#1/1
  //64: e.Commands#1/2
  // s.ScopeClass#1 ( e.Name#1 ) ( # CmdIssueMem s.Number#1 ) e.Commands#1
  if( ! refalrts::svar_left( context[58], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[59] = context[2];
  context[60] = context[3];
  context[61] = context[0];
  context[62] = context[1];
  if( ! refalrts::svar_left( context[63], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[64], context[65], context[61], context[62]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_CmdFnStart<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_CmdIfDef<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], PrepareOpenEStack, "PrepareOpenEStack" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], OutlineConstants, "OutlineConstants" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[20], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[23], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[26], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[29], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[32], & ident_CmdInitRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], PrepareInterpretCommands, "PrepareInterpretCommands" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[38], & ident_CmdFinRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[41], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[44], & ident_CmdiRunInterpret<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[47], & ident_CmdElse<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[50], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[52] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[53], & ident_CmdEndIf<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[56], & ident_CmdFnEnd<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[57] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[55], context[57] );
  res = refalrts::splice_elem( res, context[57] );
  res = refalrts::splice_elem( res, context[56] );
  res = refalrts::splice_elem( res, context[55] );
  refalrts::link_brackets( context[52], context[54] );
  res = refalrts::splice_elem( res, context[54] );
  res = refalrts::splice_elem( res, context[53] );
  res = refalrts::splice_elem( res, context[52] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[49] );
  res = refalrts::splice_elem( res, context[51] );
  res = refalrts::splice_evar( res, context[64], context[65] );
  res = refalrts::splice_elem( res, context[50] );
  res = refalrts::splice_elem( res, context[49] );
  refalrts::link_brackets( context[46], context[48] );
  res = refalrts::splice_elem( res, context[48] );
  res = refalrts::splice_elem( res, context[47] );
  res = refalrts::splice_elem( res, context[46] );
  refalrts::link_brackets( context[43], context[45] );
  res = refalrts::splice_elem( res, context[45] );
  res = refalrts::splice_elem( res, context[44] );
  res = refalrts::splice_elem( res, context[43] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[42] );
  res = refalrts::splice_elem( res, context[41] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[40] );
  refalrts::link_brackets( context[37], context[39] );
  res = refalrts::splice_elem( res, context[39] );
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_elem( res, context[37] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[34] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_evar( res, context[61], context[62] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_elem( res, context[34] );
  refalrts::link_brackets( context[31], context[33] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::link_brackets( context[28], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::link_brackets( context[25], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::link_brackets( context[22], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[19], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[12], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[9], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[63] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[59], context[60] );
  res = refalrts::splice_stvar( res, context[58] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" },
    { ConvertInterpretCommand, "ConvertInterpretCommand" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //9: e.Commands#1/1
    // e.Commands#1
    {refalrts::icContextSet, 0, 9, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  //9: e.Commands#1/1
  // e.Commands#1
  context[9] = context[0];
  context[10] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], ConvertInterpretCommand, "ConvertInterpretCommand" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PrepareInterpretCommands_Linearize_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiOnFailGoTo<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Tail#1/1
    //12: s.Length#2/1
    //13: e.SubCommands#2/1
    // ( e.Tail#1 ) s.Length#2 e.SubCommands#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 12},
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
  //10: e.Tail#1/1
  //12: s.Length#2/1
  //13: e.SubCommands#2/1
  // ( e.Tail#1 ) s.Length#2 e.SubCommands#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = context[2];
  context[11] = context[3];
  if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[0];
  context[14] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdiOnFailGoTo<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" },
    { lambda_PrepareInterpretCommands_Linearize_0, "lambda_PrepareInterpretCommands_Linearize_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Length_T, "Length_T" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiEStart<int>::name,
    & ident_CmdiEPrepare<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //19: e.SubCommands#1/1
    //21: e.Tail#1/1
    // ( # CmdSentence e.SubCommands#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icContextSet, 0, 19, 2},
    {refalrts::icContextSet, 0, 21, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Tail#1/1
    //18: s.BracketNum#1/1
    //19: s.VarNumber#1/1
    //20: e.SubCommands#1/1
    //22: s.BracketNum#1/2
    //23: s.VarNumber#1/2
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1 s.VarNumber#1 e.SubCommands#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 22, 18, 0},
    {refalrts::icCopySTVar, 23, 19, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.Command#1/1
    //6: e.Tail#1/1
    // t.Command#1 e.Tail#1
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
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
    //19: e.SubCommands#1/1
    //21: e.Tail#1/1
    // ( # CmdSentence e.SubCommands#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[0];
    context[22] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Length_T, "Length_T" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], lambda_PrepareInterpretCommands_Linearize_0, "lambda_PrepareInterpretCommands_Linearize_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //16: e.Tail#1/1
    //18: s.BracketNum#1/1
    //19: s.VarNumber#1/1
    //20: e.SubCommands#1/1
    //22: s.BracketNum#1/2
    //23: s.VarNumber#1/2
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1 s.VarNumber#1 e.SubCommands#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    context[16] = context[0];
    context[17] = context[1];
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    context[20] = context[2];
    context[21] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[22], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEPrepare<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //5: t.Command#1/1
    //6: e.Tail#1/1
    // t.Command#1 e.Tail#1
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = context[0];
    context[7] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

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
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoLength, "DoLength" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Expr#1/1
    // e.Expr#1
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
  //6: e.Expr#1/1
  // e.Expr#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoLength, "DoLength" ) )
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

static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { DoLength, "DoLength" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Text#1/1
    //12: s.Count#1/1
    //13: e.Expr#1/1
    // s.Count#1 e.Expr#1 ( # CmdComment e.Text#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Count#1/1
    //9: t.Last#1/1
    //10: e.Expr#1/1
    // s.Count#1 e.Expr#1 t.Last#1
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::ictVarRight, 0, 9, 0},
    {refalrts::icContextSet, 0, 10, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icSpliceSTVar, 0, 0, 9},
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
    //2: s.Count#1/1
    // s.Count#1
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
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
    //10: e.Text#1/1
    //12: s.Count#1/1
    //13: e.Expr#1/1
    // s.Count#1 e.Expr#1 ( # CmdComment e.Text#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[2], context[3] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
      continue;
    context[13] = context[0];
    context[14] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], DoLength, "DoLength" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdComment<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //8: s.Count#1/1
    //9: t.Last#1/1
    //10: e.Expr#1/1
    // s.Count#1 e.Expr#1 t.Last#1
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_right( context[9], context[0], context[1] ) )
      continue;
    context[10] = context[0];
    context[11] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], DoLength, "DoLength" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[9] );
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
  //2: s.Count#1/1
  // s.Count#1
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ConvertInterpretCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiHugeNum<int>::name,
    & ident_CmdiNum<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Direction#1/1
    //6: s.BracketNumber#1/1
    //7: s.Number#1/1
    // s.Direction#1 s.BracketNumber#1 s.Number#1 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Direction#1/1
    //6: s.BracketNumber#1/1
    //7: s.Number#1/1
    //8: s.Other#2/1
    // s.Direction#1 s.BracketNumber#1 s.Number#1 s.Other#2
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    //5: s.Direction#1/1
    //6: s.BracketNumber#1/1
    //7: s.Number#1/1
    // s.Direction#1 s.BracketNumber#1 s.Number#1 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_CmdiNum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[4] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
  //5: s.Direction#1/1
  //6: s.BracketNumber#1/1
  //7: s.Number#1/1
  //8: s.Other#2/1
  // s.Direction#1 s.BracketNumber#1 s.Number#1 s.Other#2
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[3], & ident_CmdiHugeNum<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[4] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ConvertInterpretCommand_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElHugeNumber<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_ElNumber<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.ElemNo#1/1
    //7: s.Number#1/1
    // s.ElemNo#1 s.Number#1 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 1, 3},
    {refalrts::icIdent, 0, 2, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.ElemNo#1/1
    //7: s.Number#1/1
    //8: s.Other#2/1
    // s.ElemNo#1 s.Number#1 s.Other#2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 1, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 7},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //6: s.ElemNo#1/1
    //7: s.Number#1/1
    // s.ElemNo#1 s.Number#1 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[5] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[6] );
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
  //6: s.ElemNo#1/1
  //7: s.Number#1/1
  //8: s.Other#2/1
  // s.ElemNo#1 s.Number#1 s.Other#2
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[3], & ident_CmdiAllocateElem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[4], & ident_ElHugeNumber<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ConvertInterpretCommand_1, "lambda_ConvertInterpretCommand_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Compare, "Compare" },
    { Fetch, "Fetch" },
    { lambda_ConvertInterpretCommand_0, "lambda_ConvertInterpretCommand_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiInitB0<int>::name,
    & ident_CmdInitB0<int>::name,
    & ident_CmdiReturnResult<int>::name,
    & ident_CmdReturnResult<int>::name,
    & ident_CmdiFail<int>::name,
    & ident_CmdFail<int>::name,
    & ident_CmdiOnFailGoTo<int>::name,
    & ident_CmdArrCopy<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_CmdiPushStack<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_CmdiLinkBrackets<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_CmdArrSplice<int>::name,
    & ident_CmdInsertVar<int>::name,
    & ident_CmdSpliceRange<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_CmdSpliceElem<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_ElNumber<int>::name,
    & ident_CmdiEmptyResult<int>::name,
    & ident_CmdEmptyResult<int>::name,
    & ident_CmdComment<int>::name,
    & ident_CmdiVar<int>::name,
    & ident_CmdVar<int>::name,
    & ident_CmdiEmpty<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdiRepeat<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdiADT<int>::name,
    & ident_CmdADT<int>::name,
    & ident_CmdiName<int>::name,
    & ident_CmdName<int>::name,
    & ident_CmdiChar<int>::name,
    & ident_CmdChar<int>::name,
    & ident_CmdiEStart<int>::name,
    & ident_CmdiEPrepare<int>::name,
    & ident_CmdiSave<int>::name,
    & ident_CmdSave<int>::name,
    & ident_CmdiIdent<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_CmdiContextSet<int>::name,
    & ident_CmdClosedE<int>::name,
    & ident_CmdiBracket<int>::name,
    & ident_CmdBrackets<int>::name
  };
  static const refalrts::RefalNumber numbers[] = {
    256UL
  };
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.Num#1/1
    //9: s.NumRanges#1/1
    // ( # CmdBrackets s.Direction#1 s.Num#1 s.NumRanges#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 48, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 47, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.BracketNumber#1/1
    //8: s.VarNumber#1/1
    // ( # CmdClosedE # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 46, 2},
    {refalrts::icIdentLeft, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 45, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Number#1/1
    //18: s.Number#1/2
    // ( # CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 44, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icsVarLeft, 0, 16, 2},
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 18, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icHugeInt, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 4, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: e.Name#1/1
    // ( # CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 43, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 42, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.OldBracketNumber#1/1
    //8: s.NewBracketNumber#1/1
    // ( # CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 41, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 40, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.BracketNum#1/1
    //8: s.VarNumber#1/1
    // ( # CmdiEPrepare s.BracketNum#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 39, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 39, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.BracketNum#1/1
    //8: s.VarNumber#1/1
    // ( # CmdiEStart s.BracketNum#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 38, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 38, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Char#1/1
    // ( # CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 37, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 36, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: e.Name#1/1
    // ( # CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 35, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 34, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.InnerBrackets#1/1
    //10: e.Name#1/1
    // ( # CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 33, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 32, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Mode#1/1
    //10: s.VarNum#1/1
    //11: s.SampleNum#1/1
    // ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNum#1 s.SampleNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 31, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 30, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.BracketNumber#1/1
    // ( # CmdEmpty # AlgLeft s.BracketNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 29, 2},
    {refalrts::icIdentLeft, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 27, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Mode#1/1
    //10: s.VarNumber#1/1
    // ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 26, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 25, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: e.Text#1/1
    // ( # CmdComment e.Text#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 24, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 24, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdEmptyResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 23, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 22, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: s.ElemNo#1/1
    //16: s.Number#1/1
    //17: s.Number#1/2
    // ( # CmdAllocateElem s.ElemNo#1 # ElNumber s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 20, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icIdentLeft, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 17, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icHugeInt, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ElemNo#1/1
    //8: s.Type#1/1
    //9: e.Info#1/1
    // ( # CmdAllocateElem s.ElemNo#1 s.Type#1 e.Info#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 20, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 19, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ElemNo#1/1
    // ( # CmdInsertElem s.ElemNo#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 18, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 17, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ElemNo#1/1
    // ( # CmdInsertRange s.ElemNo#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 15, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Mode#1/1
    //8: s.Number#1/1
    // ( # CmdInsertVar s.Mode#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 13, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Left#1/1
    //8: s.Right#1/1
    // ( # CmdLinkBrackets s.Left#1 s.Right#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 12, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 11, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ElemNo#1/1
    // ( # CmdPushStack s.ElemNo#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 9, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Mode#1/1
    //8: s.Number#1/1
    //9: s.Sample#1/1
    // ( # CmdCopyVar s.Mode#1 s.Number#1 s.Sample#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 7, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Offset#1/1
    // ( # CmdiOnFailGoTo s.Offset#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 6, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdFail )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdReturnResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdInitB0 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[26];
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
    //7: s.Direction#1/1
    //8: s.Num#1/1
    //9: s.NumRanges#1/1
    // ( # CmdBrackets s.Direction#1 s.Num#1 s.NumRanges#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.BracketNumber#1/1
    //8: s.VarNumber#1/1
    // ( # CmdClosedE # AlgLeft s.BracketNumber#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiContextSet<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //15: s.Direction#1/1
    //16: s.BracketNumber#1/1
    //17: s.Number#1/1
    //18: s.Number#1/2
    // ( # CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdNumber<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[18], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[8], 256UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], lambda_ConvertInterpretCommand_0, "lambda_ConvertInterpretCommand_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: e.Name#1/1
    // ( # CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdIdent<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.OldBracketNumber#1/1
    //8: s.NewBracketNumber#1/1
    // ( # CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiSave<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.BracketNum#1/1
    //8: s.VarNumber#1/1
    // ( # CmdiEPrepare s.BracketNum#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEPrepare<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEPrepare<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.BracketNum#1/1
    //8: s.VarNumber#1/1
    // ( # CmdiEStart s.BracketNum#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Char#1/1
    // ( # CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdChar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: e.Name#1/1
    // ( # CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdName<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.InnerBrackets#1/1
    //10: e.Name#1/1
    // ( # CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Mode#1/1
    //10: s.VarNum#1/1
    //11: s.SampleNum#1/1
    // ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNum#1 s.SampleNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiRepeat<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.BracketNumber#1/1
    // ( # CmdEmpty # AlgLeft s.BracketNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEmpty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Direction#1/1
    //8: s.BracketNumber#1/1
    //9: s.Mode#1/1
    //10: s.VarNumber#1/1
    // ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 s.VarNumber#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiVar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: e.Text#1/1
    // ( # CmdComment e.Text#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[7] = context[2];
    context[8] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdComment<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    // ( # CmdEmptyResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmptyResult<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEmptyResult<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //15: s.ElemNo#1/1
    //16: s.Number#1/1
    //17: s.Number#1/2
    // ( # CmdAllocateElem s.ElemNo#1 # ElNumber s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[17], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[8], 256UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], lambda_ConvertInterpretCommand_1, "lambda_ConvertInterpretCommand_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ElemNo#1/1
    //8: s.Type#1/1
    //9: e.Info#1/1
    // ( # CmdAllocateElem s.ElemNo#1 s.Type#1 e.Info#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ElemNo#1/1
    // ( # CmdInsertElem s.ElemNo#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdSpliceElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ElemNo#1/1
    // ( # CmdInsertRange s.ElemNo#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertRange<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdSpliceRange<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Mode#1/1
    //8: s.Number#1/1
    // ( # CmdInsertVar s.Mode#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdArrSplice<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Left#1/1
    //8: s.Right#1/1
    // ( # CmdLinkBrackets s.Left#1 s.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.ElemNo#1/1
    // ( # CmdPushStack s.ElemNo#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Mode#1/1
    //8: s.Number#1/1
    //9: s.Sample#1/1
    // ( # CmdCopyVar s.Mode#1 s.Number#1 s.Sample#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdArrCopy<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //7: s.Offset#1/1
    // ( # CmdiOnFailGoTo s.Offset#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiOnFailGoTo<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    // ( # CmdFail )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFail<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiFail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    // ( # CmdReturnResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdReturnResult<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiReturnResult<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
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
  // ( # CmdInitB0 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdInitB0<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdiInitB0<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.Number#1/1
    //7: e.Name#1/1
    // ( s.Number#1 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 7},
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
  //6: s.Number#1/1
  //7: e.Name#1/1
  // ( s.Number#1 e.Name#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = context[2];
  context[8] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_OutlineConstants_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //4: s.Id#2/1
    //5: s.Value#2/1
    // ( s.Id#2 s.Value#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
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
  //4: s.Id#2/1
  //5: s.Value#2/1
  // ( s.Id#2 s.Value#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { OutlineConstants, "OutlineConstants" },
    { Inc, "Inc" },
    { RemoveNumber, "RemoveNumber" },
    { Map, "Map" },
    { lambda_OutlineConstants_0, "lambda_OutlineConstants_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElString<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_ElHugeNumber<int>::name,
    & ident_CmdiHugeNum<int>::name,
    & ident_ElIdent<int>::name,
    & ident_CmdiIdent<int>::name,
    & ident_CmdiADT<int>::name,
    & ident_ElName<int>::name,
    & ident_CmdiName<int>::name,
    & ident_CmdiStringArray<int>::name,
    & ident_CmdiNumberArray<int>::name,
    & ident_CmdiLabelArray<int>::name,
    & ident_CmdiFuncArray<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +88, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //38: s.NextFunc#1/1
    //39: e.Funcs#1/1
    //41: s.NextLabel#1/1
    //42: e.Labels#1/1
    //44: s.NextNumber#1/1
    //45: e.Numbers#1/1
    //47: s.NextString#1/1
    //48: e.Strings#1/1
    // ( s.NextFunc#1 e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( s.NextNumber#1 e.Numbers#1 ) ( s.NextString#1 e.Strings#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 38, 2},
    {refalrts::icContextSet, 0, 39, 2},
    {refalrts::icsVarLeft, 0, 41, 4},
    {refalrts::icContextSet, 0, 42, 4},
    {refalrts::icsVarLeft, 0, 44, 6},
    {refalrts::icContextSet, 0, 45, 6},
    {refalrts::icsVarLeft, 0, 47, 8},
    {refalrts::icContextSet, 0, 48, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 12, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 3, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 11, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 3, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 10, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 3, 27},
    {refalrts::icFunc, 0, 4, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 9, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icFunc, 0, 3, 34},
    {refalrts::icFunc, 0, 2, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icLinkBrackets, 31, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 24, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 17, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 10, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: e.Func#1/1
    //45: e.Func#1/2
    //47: e.Funcs_B#1/1
    //49: e.Funcs_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 8, 10},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 2},
    {refalrts::icsVarLeft, 0, 41, 10},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 47, 2},
    {refalrts::icEStart, 0, 47, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 45, 43, 12},
    {refalrts::icContextSet, 0, 49, 14},
    {refalrts::icsVarLeft, 0, 51, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 8, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //31: e.Labels#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextFunc#1/1
    //40: e.Funcs#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: e.Func#1/1
    //46: s.NextFunc#1/2
    //47: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 8, 10},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::icsVarLeft, 0, 39, 2},
    {refalrts::icContextSet, 0, 40, 2},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 39, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 8, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 14, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Labels#1/1
    //35: e.Numbers#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextFunc#1/1
    //42: s.ElemNo#1/1
    //43: e.Func#1/1
    //45: e.Func#1/2
    //47: e.Funcs_B#1/1
    //49: e.Funcs_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElName e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 33, 4},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 2},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icIdentLeft, 0, 7, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 47, 2},
    {refalrts::icEStart, 0, 47, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 45, 43, 12},
    {refalrts::icContextSet, 0, 49, 14},
    {refalrts::icsVarLeft, 0, 51, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icIdent, 0, 7, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: e.Funcs#1/1
    //43: s.ElemNo#1/1
    //44: e.Func#1/1
    //46: s.NextFunc#1/2
    //47: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElName e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 2},
    {refalrts::icContextSet, 0, 41, 2},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icIdentLeft, 0, 7, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 40, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 1, 29},
    {refalrts::icIdent, 0, 7, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 14, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: s.InnerBrackets#1/1
    //44: e.Func#1/1
    //46: e.Func#1/2
    //48: e.Funcs_B#1/1
    //50: e.Funcs_E#1/1
    //52: s.Num#1/1
    //53: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 2},
    {refalrts::icsVarLeft, 0, 41, 10},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEPrepare, 0, 48, 2},
    {refalrts::icEStart, 0, 48, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 46, 44, 12},
    {refalrts::icContextSet, 0, 50, 14},
    {refalrts::icsVarLeft, 0, 52, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 53, 52, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 6, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 50},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 48},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //31: e.Labels#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextFunc#1/1
    //40: e.Funcs#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: s.InnerBrackets#1/1
    //45: e.Func#1/1
    //47: s.NextFunc#1/2
    //48: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::icsVarLeft, 0, 39, 2},
    {refalrts::icContextSet, 0, 40, 2},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icsVarLeft, 0, 44, 10},
    {refalrts::icContextSet, 0, 45, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 47, 39, 0},
    {refalrts::icCopySTVar, 48, 47, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 6, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 14, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Funcs#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextLabel#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: e.Label#1/1
    //45: e.Label#1/2
    //47: e.Labels_B#1/1
    //49: e.Labels_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 5, 10},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 4},
    {refalrts::icsVarLeft, 0, 41, 10},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 47, 4},
    {refalrts::icEStart, 0, 47, 4},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 45, 43, 12},
    {refalrts::icContextSet, 0, 49, 14},
    {refalrts::icsVarLeft, 0, 51, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 5, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //31: e.Funcs#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextLabel#1/1
    //40: e.Labels#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: e.Label#1/1
    //46: s.NextLabel#1/2
    //47: s.NextLabel#1/3
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 5, 10},
    {refalrts::icContextSet, 0, 31, 2},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::icsVarLeft, 0, 39, 4},
    {refalrts::icContextSet, 0, 40, 4},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 39, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 5, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 16, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Funcs#1/1
    //35: e.Numbers#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextLabel#1/1
    //42: s.ElemNo#1/1
    //43: e.Label#1/1
    //45: e.Label#1/2
    //47: e.Labels_B#1/1
    //49: e.Labels_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElIdent e.Label#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 4},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icIdentLeft, 0, 4, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 47, 4},
    {refalrts::icEStart, 0, 47, 4},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 45, 43, 12},
    {refalrts::icContextSet, 0, 49, 14},
    {refalrts::icsVarLeft, 0, 51, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icIdent, 0, 4, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Funcs#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextLabel#1/1
    //41: e.Labels#1/1
    //43: s.ElemNo#1/1
    //44: e.Label#1/1
    //46: s.NextLabel#1/2
    //47: s.NextLabel#1/3
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElIdent e.Label#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 4},
    {refalrts::icContextSet, 0, 41, 4},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icIdentLeft, 0, 4, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 40, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 1, 29},
    {refalrts::icIdent, 0, 4, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 16, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextNumId#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: s.Number#1/1
    //44: s.Number#1/2
    //45: e.Numbers_B#1/1
    //47: e.Numbers_E#1/1
    //49: s.Id#1/1
    //50: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 3, 10},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 6},
    {refalrts::icsVarLeft, 0, 41, 10},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEPrepare, 0, 45, 6},
    {refalrts::icEStart, 0, 45, 6},
    {refalrts::icSave, 0, 14, 6},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::icsRepeatRight, 44, 43, 12},
    {refalrts::icContextSet, 0, 47, 14},
    {refalrts::icsVarLeft, 0, 49, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 50, 49, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 3, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //31: e.Funcs#1/1
    //33: e.Labels#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextNumId#1/1
    //40: e.Numbers#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: s.Number#1/1
    //45: s.NextNumId#1/2
    //46: s.NextNumId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 3, 10},
    {refalrts::icContextSet, 0, 31, 2},
    {refalrts::icContextSet, 0, 33, 4},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icContextSet, 0, 40, 6},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icsVarLeft, 0, 44, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 45, 39, 0},
    {refalrts::icCopySTVar, 46, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 3, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 18, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Funcs#1/1
    //35: e.Labels#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextNumId#1/1
    //42: s.ElemNo#1/1
    //43: s.Number#1/1
    //44: s.Number#1/2
    //45: e.Numbers_B#1/1
    //47: e.Numbers_E#1/1
    //49: s.Id#1/1
    //50: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElHugeNumber s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 6},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icIdentLeft, 0, 2, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEPrepare, 0, 45, 6},
    {refalrts::icEStart, 0, 45, 6},
    {refalrts::icSave, 0, 14, 6},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::icsRepeatRight, 44, 43, 12},
    {refalrts::icContextSet, 0, 47, 14},
    {refalrts::icsVarLeft, 0, 49, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 50, 49, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icIdent, 0, 2, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextNumId#1/1
    //41: e.Numbers#1/1
    //43: s.ElemNo#1/1
    //44: s.Number#1/1
    //45: s.NextNumId#1/2
    //46: s.NextNumId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElHugeNumber s.Number#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 6},
    {refalrts::icContextSet, 0, 41, 6},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icIdentLeft, 0, 2, 10},
    {refalrts::icsVarLeft, 0, 44, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 45, 40, 0},
    {refalrts::icCopySTVar, 46, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 1, 29},
    {refalrts::icIdent, 0, 2, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 18, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Funcs#1/1
    //35: e.Labels#1/1
    //37: e.Numbers#1/1
    //39: e.Commands#1/1
    //41: s.NextStringId#1/1
    //42: s.ElemNo#1/1
    //43: e.String#1/1
    //45: e.String#1/2
    //47: e.Strings_B#1/1
    //49: e.Strings_E#1/1
    //51: s.Id#1/1
    //52: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( s.NextStringId#1 e.Strings_B#1 ( s.Id#1 e.String#1 ) e.Strings_E#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElString e.String#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icIdentLeft, 0, 0, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 47, 8},
    {refalrts::icEStart, 0, 47, 8},
    {refalrts::icSave, 0, 14, 8},
    {refalrts::icBracketLeft, 0, 12, 14},
    {refalrts::iceRepeatRight, 45, 43, 12},
    {refalrts::icContextSet, 0, 49, 14},
    {refalrts::icsVarLeft, 0, 51, 12},
    {refalrts::icEmpty, 0, 0, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icIdent, 0, 0, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Numbers#1/1
    //38: e.Commands#1/1
    //40: s.NextStringId#1/1
    //41: e.Strings#1/1
    //43: s.ElemNo#1/1
    //44: e.String#1/1
    //46: s.NextStringId#1/2
    //47: s.NextStringId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( s.NextStringId#1 e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElString e.String#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 8},
    {refalrts::icContextSet, 0, 41, 8},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icIdentLeft, 0, 0, 10},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 40, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 1, 29},
    {refalrts::icIdent, 0, 0, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 20, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.Funcs#1/1
    //23: e.Labels#1/1
    //25: e.Numbers#1/1
    //27: e.Strings#1/1
    //29: t.OtherCommand#1/1
    //30: e.Commands#1/1
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 t.OtherCommand#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 4},
    {refalrts::icContextSet, 0, 25, 6},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::ictVarRight, 0, 29, 0},
    {refalrts::icContextSet, 0, 30, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[25];
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
    //38: s.NextFunc#1/1
    //39: e.Funcs#1/1
    //41: s.NextLabel#1/1
    //42: e.Labels#1/1
    //44: s.NextNumber#1/1
    //45: e.Numbers#1/1
    //47: s.NextString#1/1
    //48: e.Strings#1/1
    // ( s.NextFunc#1 e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( s.NextNumber#1 e.Numbers#1 ) ( s.NextString#1 e.Strings#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[38], context[2], context[3] ) )
      continue;
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::svar_left( context[41], context[4], context[5] ) )
      continue;
    context[42] = context[4];
    context[43] = context[5];
    if( ! refalrts::svar_left( context[44], context[6], context[7] ) )
      continue;
    context[45] = context[6];
    context[46] = context[7];
    if( ! refalrts::svar_left( context[47], context[8], context[9] ) )
      continue;
    context[48] = context[8];
    context[49] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_CmdiFuncArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdiLabelArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_CmdiNumberArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], lambda_OutlineConstants_0, "lambda_OutlineConstants_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdiStringArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[31], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[33] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[24], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[26] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[17], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[10], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
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
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: e.Func#1/1
    //45: e.Func#1/2
    //47: e.Funcs_B#1/1
    //49: e.Funcs_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[12], context[13] ) )
        continue;
      context[49] = context[14];
      context[50] = context[15];
      if( ! refalrts::svar_left( context[51], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[18], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[47], context[48], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //31: e.Labels#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextFunc#1/1
    //40: e.Funcs#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: e.Func#1/1
    //46: s.NextFunc#1/2
    //47: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[10], context[11] ) )
      continue;
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    context[35] = context[8];
    context[36] = context[9];
    context[37] = context[0];
    context[38] = context[1];
    if( ! refalrts::svar_left( context[39], context[2], context[3] ) )
      continue;
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[14], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //33: e.Labels#1/1
    //35: e.Numbers#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextFunc#1/1
    //42: s.ElemNo#1/1
    //43: e.Func#1/1
    //45: e.Func#1/2
    //47: e.Funcs_B#1/1
    //49: e.Funcs_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElName e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[33] = context[4];
    context[34] = context[5];
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[9];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[12], context[13] ) )
        continue;
      context[49] = context[14];
      context[50] = context[15];
      if( ! refalrts::svar_left( context[51], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_ElName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[18], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[47], context[48], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: e.Funcs#1/1
    //43: s.ElemNo#1/1
    //44: e.Func#1/1
    //46: s.NextFunc#1/2
    //47: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElName e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[2], context[3] ) )
      continue;
    context[41] = context[2];
    context[42] = context[3];
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[14], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //32: e.Labels#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextFunc#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: s.InnerBrackets#1/1
    //44: e.Func#1/1
    //46: e.Func#1/2
    //48: e.Funcs_B#1/1
    //50: e.Funcs_E#1/1
    //52: s.Num#1/1
    //53: s.Num#1/2
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];
    context[48] = 0;
    context[49] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[46], context[47], context[44], context[45], context[12], context[13] ) )
        continue;
      context[50] = context[14];
      context[51] = context[15];
      if( ! refalrts::svar_left( context[52], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[53], context[52]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[53] );
      res = refalrts::splice_stvar( res, context[43] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[18], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[48], context[49], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //31: e.Labels#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextFunc#1/1
    //40: e.Funcs#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: s.InnerBrackets#1/1
    //45: e.Func#1/1
    //47: s.NextFunc#1/2
    //48: s.NextFunc#1/3
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[10], context[11] ) )
      continue;
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    context[35] = context[8];
    context[36] = context[9];
    context[37] = context[0];
    context[38] = context[1];
    if( ! refalrts::svar_left( context[39], context[2], context[3] ) )
      continue;
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[10], context[11] ) )
      continue;
    context[45] = context[10];
    context[46] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[47], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[48], context[47]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[48] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[14], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //32: e.Funcs#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextLabel#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: e.Label#1/1
    //45: e.Label#1/2
    //47: e.Labels_B#1/1
    //49: e.Labels_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[4];
      context[15] = context[5];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[12], context[13] ) )
        continue;
      context[49] = context[14];
      context[50] = context[15];
      if( ! refalrts::svar_left( context[51], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[20], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[47], context[48], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //31: e.Funcs#1/1
    //33: e.Numbers#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextLabel#1/1
    //40: e.Labels#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: e.Label#1/1
    //46: s.NextLabel#1/2
    //47: s.NextLabel#1/3
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[10], context[11] ) )
      continue;
    context[31] = context[2];
    context[32] = context[3];
    context[33] = context[6];
    context[34] = context[7];
    context[35] = context[8];
    context[36] = context[9];
    context[37] = context[0];
    context[38] = context[1];
    if( ! refalrts::svar_left( context[39], context[4], context[5] ) )
      continue;
    context[40] = context[4];
    context[41] = context[5];
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[16], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //33: e.Funcs#1/1
    //35: e.Numbers#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextLabel#1/1
    //42: s.ElemNo#1/1
    //43: e.Label#1/1
    //45: e.Label#1/2
    //47: e.Labels_B#1/1
    //49: e.Labels_E#1/1
    //51: s.Num#1/1
    //52: s.Num#1/2
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElIdent e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[33] = context[2];
    context[34] = context[3];
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[9];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[4];
      context[15] = context[5];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[12], context[13] ) )
        continue;
      context[49] = context[14];
      context[50] = context[15];
      if( ! refalrts::svar_left( context[51], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_ElIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[20], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[47], context[48], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Funcs#1/1
    //34: e.Numbers#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextLabel#1/1
    //41: e.Labels#1/1
    //43: s.ElemNo#1/1
    //44: e.Label#1/1
    //46: s.NextLabel#1/2
    //47: s.NextLabel#1/3
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElIdent e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[4], context[5] ) )
      continue;
    context[41] = context[4];
    context[42] = context[5];
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[16], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextNumId#1/1
    //41: s.Direction#1/1
    //42: s.BracketNum#1/1
    //43: s.Number#1/1
    //44: s.Number#1/2
    //45: e.Numbers_B#1/1
    //47: e.Numbers_E#1/1
    //49: s.Id#1/1
    //50: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    context[45] = 0;
    context[46] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[6];
      context[15] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[44], context[43], context[12], context[13] ) )
        continue;
      context[47] = context[14];
      context[48] = context[15];
      if( ! refalrts::svar_left( context[49], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[50], context[49]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiHugeNum<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[22], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[43] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[45], context[46], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //31: e.Funcs#1/1
    //33: e.Labels#1/1
    //35: e.Strings#1/1
    //37: e.Commands#1/1
    //39: s.NextNumId#1/1
    //40: e.Numbers#1/1
    //42: s.Direction#1/1
    //43: s.BracketNum#1/1
    //44: s.Number#1/1
    //45: s.NextNumId#1/2
    //46: s.NextNumId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[10], context[11] ) )
      continue;
    context[31] = context[2];
    context[32] = context[3];
    context[33] = context[4];
    context[34] = context[5];
    context[35] = context[8];
    context[36] = context[9];
    context[37] = context[0];
    context[38] = context[1];
    if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
      continue;
    context[40] = context[6];
    context[41] = context[7];
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[45], context[39]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[46], context[45]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiHugeNum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[18], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //33: e.Funcs#1/1
    //35: e.Labels#1/1
    //37: e.Strings#1/1
    //39: e.Commands#1/1
    //41: s.NextNumId#1/1
    //42: s.ElemNo#1/1
    //43: s.Number#1/1
    //44: s.Number#1/2
    //45: e.Numbers_B#1/1
    //47: e.Numbers_E#1/1
    //49: s.Id#1/1
    //50: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElHugeNumber s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[33] = context[2];
    context[34] = context[3];
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[8];
    context[38] = context[9];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    context[45] = 0;
    context[46] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[6];
      context[15] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[44], context[43], context[12], context[13] ) )
        continue;
      context[47] = context[14];
      context[48] = context[15];
      if( ! refalrts::svar_left( context[49], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[50], context[49]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_ElHugeNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[22], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[43] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[45], context[46], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Strings#1/1
    //38: e.Commands#1/1
    //40: s.NextNumId#1/1
    //41: e.Numbers#1/1
    //43: s.ElemNo#1/1
    //44: s.Number#1/1
    //45: s.NextNumId#1/2
    //46: s.NextNumId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElHugeNumber s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[6], context[7] ) )
      continue;
    context[41] = context[6];
    context[42] = context[7];
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[44], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[45], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[46], context[45]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_ElHugeNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[18], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    //33: e.Funcs#1/1
    //35: e.Labels#1/1
    //37: e.Numbers#1/1
    //39: e.Commands#1/1
    //41: s.NextStringId#1/1
    //42: s.ElemNo#1/1
    //43: e.String#1/1
    //45: e.String#1/2
    //47: e.Strings_B#1/1
    //49: e.Strings_E#1/1
    //51: s.Id#1/1
    //52: s.Id#1/2
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( s.NextStringId#1 e.Strings_B#1 ( s.Id#1 e.String#1 ) e.Strings_E#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElString e.String#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[33] = context[2];
    context[34] = context[3];
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[8];
      context[15] = context[9];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[12], context[13] ) )
        continue;
      context[49] = context[14];
      context[50] = context[15];
      if( ! refalrts::svar_left( context[51], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_ElString<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[24], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[47], context[48], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Funcs#1/1
    //34: e.Labels#1/1
    //36: e.Numbers#1/1
    //38: e.Commands#1/1
    //40: s.NextStringId#1/1
    //41: e.Strings#1/1
    //43: s.ElemNo#1/1
    //44: e.String#1/1
    //46: s.NextStringId#1/2
    //47: s.NextStringId#1/3
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( s.NextStringId#1 e.Strings#1 ) e.Commands#1 ( # CmdiAllocateElem s.ElemNo#1 # ElString e.String#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[8], context[9] ) )
      continue;
    context[41] = context[8];
    context[42] = context[9];
    if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[10], context[11] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[40]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_ElString<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[20], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //21: e.Funcs#1/1
  //23: e.Labels#1/1
  //25: e.Numbers#1/1
  //27: e.Strings#1/1
  //29: t.OtherCommand#1/1
  //30: e.Commands#1/1
  // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) ( e.Strings#1 ) e.Commands#1 t.OtherCommand#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[2];
  context[22] = context[3];
  context[23] = context[4];
  context[24] = context[5];
  context[25] = context[6];
  context[26] = context[7];
  context[27] = context[8];
  context[28] = context[9];
  if( ! refalrts::tvar_right( context[29], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = context[0];
  context[31] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], OutlineConstants, "OutlineConstants" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[29] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareOpenEStack, "PrepareOpenEStack" },
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiReserveStack<int>::name,
    & ident_CmdiOnFailGoTo<int>::name,
    & ident_CmdiEStart<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.VarInfo#1/1
    //15: s.Depth#1/1
    //16: e.Commands#1/1
    // ( # CmdiEStart e.VarInfo#1 ) e.Commands#1 s.Depth#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarRight, 0, 15, 0},
    {refalrts::icContextSet, 0, 16, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: s.Offset#1/1
    //14: s.Depth#1/1
    //15: e.Commands#1/1
    // ( # CmdiOnFailGoTo s.Offset#1 ) e.Commands#1 s.Depth#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarRight, 0, 14, 0},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.OtherCommand#1/1
    //6: s.Depth#1/1
    //7: e.Commands#1/1
    // t.OtherCommand#1 e.Commands#1 s.Depth#1
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icsVarRight, 0, 6, 0},
    {refalrts::icContextSet, 0, 7, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: s.Depth#1/1
    // s.Depth#1
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
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
    //13: e.VarInfo#1/1
    //15: s.Depth#1/1
    //16: e.Commands#1/1
    // ( # CmdiEStart e.VarInfo#1 ) e.Commands#1 s.Depth#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[2], context[3] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_right( context[15], context[0], context[1] ) )
      continue;
    context[16] = context[0];
    context[17] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //13: s.Offset#1/1
    //14: s.Depth#1/1
    //15: e.Commands#1/1
    // ( # CmdiOnFailGoTo s.Offset#1 ) e.Commands#1 s.Depth#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[0], context[1] ) )
      continue;
    context[15] = context[0];
    context[16] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiOnFailGoTo<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //5: t.OtherCommand#1/1
    //6: s.Depth#1/1
    //7: e.Commands#1/1
    // t.OtherCommand#1 e.Commands#1 s.Depth#1
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_right( context[6], context[0], context[1] ) )
      continue;
    context[7] = context[0];
    context[8] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: s.Depth#1/1
  // s.Depth#1
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[3], & ident_CmdiReserveStack<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[4] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateResult_Sentences, "GenerateResult_Sentences" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE_End<int>::name,
    & ident_CmdOpenedE_Start<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdEndSentence<int>::name,
    & ident_CmdStartSentence<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.SubCommands#1/1
    //18: e.Tail#1/1
    // ( # CmdSentence e.SubCommands#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 5, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Tail#1/1
    //20: s.BracketNum#1/1
    //21: s.VarNumber#1/1
    //22: e.SubCommands#1/1
    //24: s.BracketNum#1/2
    //25: s.VarNumber#1/2
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1 s.VarNumber#1 e.SubCommands#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 24, 20, 0},
    {refalrts::icCopySTVar, 25, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 1, 12},
    {refalrts::icIdent, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.Command#1/1
    //6: e.Tail#1/1
    // t.Command#1 e.Tail#1
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
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
    //16: e.SubCommands#1/1
    //18: e.Tail#1/1
    // ( # CmdSentence e.SubCommands#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[0];
    context[19] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdStartSentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_CmdEndSentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //18: e.Tail#1/1
    //20: s.BracketNum#1/1
    //21: s.VarNumber#1/1
    //22: e.SubCommands#1/1
    //24: s.BracketNum#1/2
    //25: s.VarNumber#1/2
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1 s.VarNumber#1 e.SubCommands#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    context[18] = context[0];
    context[19] = context[1];
    if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[24], context[20]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdOpenedE_Start<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_AlgLeft<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_CmdOpenedE_End<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_AlgLeft<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[11], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    //5: t.Command#1/1
    //6: e.Tail#1/1
    // t.Command#1 e.Tail#1
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = context[0];
    context[7] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    res = refalrts::splice_stvar( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

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
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
