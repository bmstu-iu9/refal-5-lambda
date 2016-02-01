// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HightLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HightLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HightLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PatchVariableNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PatchVariableNumbers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetOffsetForCmdInsertVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

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

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CallBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

// identifier #CloseCall
template <typename SREFAL_PARAM_INT>
struct ident_CloseCall {
  static const char *name() {
    return "CloseCall";
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

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
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

// identifier #CmdOpenedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE {
  static const char *name() {
    return "CmdOpenedE";
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

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
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

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #Separator
template <typename SREFAL_PARAM_INT>
struct ident_Separator {
  static const char *name() {
    return "Separator";
  }
};

// identifier #Stub
template <typename SREFAL_PARAM_INT>
struct ident_Stub {
  static const char *name() {
    return "Stub";
  }
};

// identifier #Swap
template <typename SREFAL_PARAM_INT>
struct ident_Swap {
  static const char *name() {
    return "Swap";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseADT {
  static const char *name() {
    return "TkCloseADT";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkString
template <typename SREFAL_PARAM_INT>
struct ident_TkString {
  static const char *name() {
    return "TkString";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_HightLevelRASL_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HightLevelRASL_Function, "HightLevelRASL_Function" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSeparator<int>::name,
    & ident_Separator<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_Ident<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_Declaration<int>::name,
    & ident_Stub<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_Swap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_Enum<int>::name,
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.ScopeClass#2/1
    //12: e.Name#2/1
    //14: e.Sentences#2/1
    // ( # Function s.ScopeClass#2 ( e.Name#2 ) e.Sentences#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 11, 2},
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
    // ( # Enum s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 9, 5},
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
    // ( # Swap s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 7, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: s.ScopeClass#2/1
    // ( # Stub s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // Unused closed variable e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( # Declaration s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
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
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: e.Name#2/1
    // ( # Ident e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Separator )
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
  int open_e_stack[6];
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
    //14: e.Sentences#2/1
    // ( # Function s.ScopeClass#2 ( e.Name#2 ) e.Sentences#2 )
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
    if( ! refalrts::alloc_name( context[7], HightLevelRASL_Function, "HightLevelRASL_Function" ) )
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
    // ( # Enum s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Enum<int>::name, context[2], context[3] ) )
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
    // ( # Swap s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Swap<int>::name, context[2], context[3] ) )
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
    //4: s.ScopeClass#2/1
    // ( # Stub s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Stub<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // Unused closed variable e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    // ( # Declaration s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Declaration<int>::name, context[2], context[3] ) )
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
    // ( # Ident e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] ) )
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
  // ( # Separator )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Separator<int>::name, context[2], context[3] ) )
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

refalrts::FnResult HightLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_0, "lambda_HightLevelRASL_0" },
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
  if( ! refalrts::alloc_name( context[4], lambda_HightLevelRASL_0, "lambda_HightLevelRASL_0" ) )
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

static refalrts::FnResult lambda_HightLevelRASL_Function_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HightLevelRASL_Sentence, "HightLevelRASL_Sentence" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Pattern#2/1
    //19: e.Result#2/1
    // ( ( e.Pattern#2 ) ( e.Result#2 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icContextSet, 0, 19, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //17: e.Pattern#2/1
  //19: e.Result#2/1
  // ( ( e.Pattern#2 ) ( e.Result#2 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[4];
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[7];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], HightLevelRASL_Sentence, "HightLevelRASL_Sentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +8, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: s.MaxMemory#2/1
    //3: s.Memory#2/1
    // s.MaxMemory#2 s.Memory#2 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: s.MaxMemory#2/1
    //3: s.Memory#2/1
    //4: s.Other#3/1
    // s.MaxMemory#2 s.Memory#2 s.Other#3
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    //2: s.MaxMemory#2/1
    //3: s.Memory#2/1
    // s.MaxMemory#2 s.Memory#2 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: s.MaxMemory#2/1
  //3: s.Memory#2/1
  //4: s.Other#3/1
  // s.MaxMemory#2 s.Memory#2 s.Other#3
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
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

static refalrts::FnResult lambda_HightLevelRASL_Function_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_1, "lambda_HightLevelRASL_Function_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Compare, "Compare" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSentence<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //19: e.Sentence#2/1
    //21: s.MaxMemory#2/1
    //22: s.Memory#2/1
    //23: s.MaxMemory#2/2
    //24: s.Memory#2/2
    // s.MaxMemory#2 ( ( # CmdIssueMem s.Memory#2 ) e.Sentence#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icContextSet, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 22, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 23, 21, 0},
    {refalrts::icCopySTVar, 24, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //19: e.Sentence#2/1
  //21: s.MaxMemory#2/1
  //22: s.Memory#2/1
  //23: s.MaxMemory#2/2
  //24: s.Memory#2/2
  // s.MaxMemory#2 ( ( # CmdIssueMem s.Memory#2 ) e.Sentence#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[2];
  context[20] = context[3];
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[23], context[21]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[24], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_HightLevelRASL_Function_1, "lambda_HightLevelRASL_Function_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_CmdSentence<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[16], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[24] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdFail<int>::name,
    & ident_CmdOpenELoop<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Commands#3/1
    //12: e.OpenELoop#3/1
    // e.Commands#3 ( # CmdOpenELoop e.OpenELoop#3 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icContextSet, 0, 10, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: e.LastSentence#3/1
    // e.LastSentence#3
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
    //10: e.Commands#3/1
    //12: e.OpenELoop#3/1
    // e.Commands#3 ( # CmdOpenELoop e.OpenELoop#3 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    context[10] = context[0];
    context[11] = context[1];
    context[12] = context[2];
    context[13] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdOpenELoop<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdFail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: e.LastSentence#3/1
  // e.LastSentence#3
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

static refalrts::FnResult lambda_HightLevelRASL_Function_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_3, "lambda_HightLevelRASL_Function_3" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdIssueMem<int>::name,
    & ident_Function<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.LastSentence#2/1
    //20: s.ScopeClass#1/1
    //21: e.Name#1/1
    //23: s.MaxMemory#2/1
    //24: e.Sentences#2/1
    // s.ScopeClass#1 ( e.Name#1 ) s.MaxMemory#2 e.Sentences#2 ( # CmdSentence e.LastSentence#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icsVarLeft, 0, 23, 0},
    {refalrts::icContextSet, 0, 24, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 6, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 20},
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
  //18: e.LastSentence#2/1
  //20: s.ScopeClass#1/1
  //21: e.Name#1/1
  //23: s.MaxMemory#2/1
  //24: e.Sentences#2/1
  // s.ScopeClass#1 ( e.Name#1 ) s.MaxMemory#2 e.Sentences#2 ( # CmdSentence e.LastSentence#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[2];
  context[19] = context[3];
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[4];
  context[22] = context[5];
  if( ! refalrts::svar_left( context[23], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = context[0];
  context[25] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_Function<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_HightLevelRASL_Function_3, "lambda_HightLevelRASL_Function_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  refalrts::link_brackets( context[10], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HightLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_4, "lambda_HightLevelRASL_Function_4" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_HightLevelRASL_Function_2, "lambda_HightLevelRASL_Function_2" },
    { MapReduce, "MapReduce" },
    { lambda_HightLevelRASL_Function_0, "lambda_HightLevelRASL_Function_0" },
    { Map, "Map" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //25: s.ScopeClass#1/1
    //26: e.Name#1/1
    //28: e.Sentences#1/1
    // s.ScopeClass#1 ( e.Name#1 ) e.Sentences#1
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icContextSet, 0, 28, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 7, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 6, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icFunc, 0, 5, 9},
    {refalrts::icFunc, 0, 4, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icFunc, 0, 3, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icInt, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 28},
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
  //25: s.ScopeClass#1/1
  //26: e.Name#1/1
  //28: e.Sentences#1/1
  // s.ScopeClass#1 ( e.Name#1 ) e.Sentences#1
  if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[26] = context[2];
  context[27] = context[3];
  context[28] = context[0];
  context[29] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_HightLevelRASL_Function_0, "lambda_HightLevelRASL_Function_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_HightLevelRASL_Function_2, "lambda_HightLevelRASL_Function_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[15], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_HightLevelRASL_Function_4, "lambda_HightLevelRASL_Function_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_stvar( res, context[25] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[12], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Sentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenResult, "GenResult" },
    { GeneralizeResult, "GeneralizeResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Result#1/1
    //20: e.PatternVars#2/1
    //22: e.PatternCommands#2/1
    //24: s.ContextItems#2/1
    // ( e.Result#1 ) ( e.PatternVars#2 ) s.ContextItems#2 ( e.PatternCommands#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icContextSet, 0, 20, 4},
    {refalrts::icContextSet, 0, 22, 6},
    {refalrts::icsVarLeft, 0, 24, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //18: e.Result#1/1
  //20: e.PatternVars#2/1
  //22: e.PatternCommands#2/1
  //24: s.ContextItems#2/1
  // ( e.Result#1 ) ( e.PatternVars#2 ) s.ContextItems#2 ( e.PatternCommands#2 )
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
  if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[2];
  context[19] = context[3];
  context[20] = context[4];
  context[21] = context[5];
  context[22] = context[6];
  context[23] = context[7];
  if( ! refalrts::svar_left( context[24], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], GeneralizeResult, "GeneralizeResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_stvar( res, context[24] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HightLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Sentence_0, "lambda_HightLevelRASL_Sentence_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { GenPattern, "GenPattern" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.Pattern#1/1
    //20: e.Result#1/1
    // ( e.Pattern#1 ) ( e.Result#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icContextSet, 0, 20, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //18: e.Pattern#1/1
  //20: e.Result#1/1
  // ( e.Pattern#1 ) ( e.Result#1 )
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
  context[18] = context[2];
  context[19] = context[3];
  context[20] = context[4];
  context[21] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], GenPattern, "GenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_HightLevelRASL_Sentence_0, "lambda_HightLevelRASL_Sentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GeneralizeResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { VarSetDifference, "VarSetDifference" },
    { VarSetUnion, "VarSetUnion" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.PatternVars#2/1
    //35: e.ResultVars#2/1
    //37: e.RepeatedEs#2/1
    //39: e.ClosedEs#2/1
    //41: e.PatternVars#2/2
    //43: e.ResultVars#2/2
    //45: e.ResultVars#2/3
    // ( e.PatternVars#2 ) ( e.ResultVars#2 ) ( e.RepeatedEs#2 ) e.ClosedEs#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 41, 33, 0},
    {refalrts::icCopyEVar, 43, 35, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 17, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //33: e.PatternVars#2/1
  //35: e.ResultVars#2/1
  //37: e.RepeatedEs#2/1
  //39: e.ClosedEs#2/1
  //41: e.PatternVars#2/2
  //43: e.ResultVars#2/2
  //45: e.ResultVars#2/3
  // ( e.PatternVars#2 ) ( e.ResultVars#2 ) ( e.RepeatedEs#2 ) e.ClosedEs#2
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
  context[33] = context[2];
  context[34] = context[3];
  context[35] = context[4];
  context[36] = context[5];
  context[37] = context[6];
  context[38] = context[7];
  context[39] = context[0];
  context[40] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[41], context[42], context[33], context[34]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[43], context[44], context[35], context[36]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], VarSetUnion, "VarSetUnion" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], VarSetDifference, "VarSetDifference" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], VarSetDifference, "VarSetDifference" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[26] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::link_brackets( context[30], context[31] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[28], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::link_brackets( context[17], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[22], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GeneralizeResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" },
    { Map, "Map" },
    { VarSetDifference, "VarSetDifference" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.PatternCommands#1/1
    //27: e.CommonVars#2/1
    //29: e.CopiedVars#2/1
    //31: e.UnusedClosedEs#2/1
    //33: e.UnusedClosedEs#2/2
    // ( e.PatternCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.UnusedClosedEs#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 33, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //25: e.PatternCommands#1/1
  //27: e.CommonVars#2/1
  //29: e.CopiedVars#2/1
  //31: e.UnusedClosedEs#2/1
  //33: e.UnusedClosedEs#2/2
  // ( e.PatternCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.UnusedClosedEs#2
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
  context[25] = context[2];
  context[26] = context[3];
  context[27] = context[4];
  context[28] = context[5];
  context[29] = context[6];
  context[30] = context[7];
  context[31] = context[0];
  context[32] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[33], context[34], context[31], context[32]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], VarSetDifference, "VarSetDifference" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[19] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::link_brackets( context[21], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GeneralizeResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Add, "Add" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.Number#3/1
    //12: s.Usings#3/1
    //13: e.Index#3/1
    //15: s.Number#3/2
    // s.Number#3 ( s.Usings#3 'e e.Index#3 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 15, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icInt, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icChar, 0, 'e', 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: s.Number#3/1
    //10: s.Usings#3/1
    //11: s.Mode#3/1
    //12: e.Index#3/1
    //14: s.Number#3/2
    // s.Number#3 ( s.Usings#3 s.Mode#3 e.Index#3 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 14, 9, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
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
    //11: s.Number#3/1
    //12: s.Usings#3/1
    //13: e.Index#3/1
    //15: s.Number#3/2
    // s.Number#3 ( s.Usings#3 'e e.Index#3 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[15], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Add, "Add" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[6], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[11] );
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
  //9: s.Number#3/1
  //10: s.Usings#3/1
  //11: s.Mode#3/1
  //12: e.Index#3/1
  //14: s.Number#3/2
  // s.Number#3 ( s.Usings#3 s.Mode#3 e.Index#3 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = context[2];
  context[13] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[14], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GeneralizeResult_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.ContextCount#1/1
    //15: e.CommonVars#2/1
    //17: e.CopiedVars#2/1
    //19: e.FilteredPatternCommands#2/1
    // s.ContextCount#1 ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.FilteredPatternCommands#2
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //14: s.ContextCount#1/1
  //15: e.CommonVars#2/1
  //17: e.CopiedVars#2/1
  //19: e.FilteredPatternCommands#2/1
  // s.ContextCount#1 ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.FilteredPatternCommands#2
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[2];
  context[16] = context[3];
  context[17] = context[4];
  context[18] = context[5];
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[6], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GeneralizeResult_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetOffsetForCmdInsertVar, "SetOffsetForCmdInsertVar" },
    { Map, "Map" },
    { MakeCopyVar, "MakeCopyVar" },
    { PatchVariableNumbers, "PatchVariableNumbers" },
    { FoldOpenELoops, "FoldOpenELoops" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdReturnResult<int>::name,
    & ident_CmdEmptyResult<int>::name,
    & ident_CmdInitB0<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //40: e.ResultCommands#1/1
    //42: e.CopiedVars#2/1
    //44: e.FilteredPatternCommands#2/1
    //46: s.Number#2/1
    //47: e.CommonVars#2/1
    //49: e.CommonVars#2/2
    //51: e.CommonVars#2/3
    // ( e.ResultCommands#1 ) ( s.Number#2 e.CommonVars#2 ) ( e.CopiedVars#2 ) e.FilteredPatternCommands#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 40, 2},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icContextSet, 0, 44, 0},
    {refalrts::icsVarLeft, 0, 46, 4},
    {refalrts::icContextSet, 0, 47, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 49, 47, 0},
    {refalrts::icCopyEVar, 51, 49, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 4, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 3, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 1, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icFunc, 0, 2, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icFunc, 0, 0, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 0, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 36, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //40: e.ResultCommands#1/1
  //42: e.CopiedVars#2/1
  //44: e.FilteredPatternCommands#2/1
  //46: s.Number#2/1
  //47: e.CommonVars#2/1
  //49: e.CommonVars#2/2
  //51: e.CommonVars#2/3
  // ( e.ResultCommands#1 ) ( s.Number#2 e.CommonVars#2 ) ( e.CopiedVars#2 ) e.FilteredPatternCommands#2
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
  context[40] = context[2];
  context[41] = context[3];
  context[42] = context[6];
  context[43] = context[7];
  context[44] = context[0];
  context[45] = context[1];
  if( ! refalrts::svar_left( context[46], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[47] = context[4];
  context[48] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[49], context[50], context[47], context[48]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[51], context[52], context[49], context[50]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], FoldOpenELoops, "FoldOpenELoops" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_CmdInitB0<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], PatchVariableNumbers, "PatchVariableNumbers" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_CmdEmptyResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], MakeCopyVar, "MakeCopyVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], SetOffsetForCmdInsertVar, "SetOffsetForCmdInsertVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[37], & ident_CmdReturnResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[39] );
  refalrts::link_brackets( context[36], context[38] );
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_elem( res, context[37] );
  res = refalrts::splice_elem( res, context[36] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[35] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[29] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  refalrts::link_brackets( context[31], context[33] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[23] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  refalrts::link_brackets( context[25], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[20], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[13], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[10], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[46] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" },
    { lambda_GeneralizeResult_1, "lambda_GeneralizeResult_1" },
    { lambda_GeneralizeResult_0, "lambda_GeneralizeResult_0" },
    { Seq, "Seq" },
    { ClosedEVariables, "ClosedEVariables" },
    { Map, "Map" },
    { RepeatedEVariables, "RepeatedEVariables" },
    { ReplicateVars, "ReplicateVars" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //53: e.PatternVars#1/1
    //55: e.PatternCommands#1/1
    //57: e.ResultVars#1/1
    //59: e.ResultCommands#1/1
    //61: s.ContextCount#1/1
    //62: e.PatternCommands#1/2
    //64: e.PatternCommands#1/3
    // ( e.PatternVars#1 ) ( e.PatternCommands#1 ) s.ContextCount#1 ( e.ResultVars#1 ) ( e.ResultCommands#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icBracketRight, 0, 8, 0},
    {refalrts::icContextSet, 0, 53, 2},
    {refalrts::icContextSet, 0, 55, 4},
    {refalrts::icContextSet, 0, 57, 8},
    {refalrts::icContextSet, 0, 59, 6},
    {refalrts::icsVarLeft, 0, 61, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 62, 55, 0},
    {refalrts::icCopyEVar, 64, 62, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 10, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 9, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 9, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 7, 24},
    {refalrts::icFunc, 0, 8, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 7, 29},
    {refalrts::icFunc, 0, 6, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 5, 33},
    {refalrts::icFunc, 0, 4, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icFunc, 0, 1, 36},
    {refalrts::icFunc, 0, 3, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 41},
    {refalrts::icFunc, 0, 1, 42},
    {refalrts::icFunc, 0, 2, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 45},
    {refalrts::icFunc, 0, 1, 46},
    {refalrts::icFunc, 0, 0, 47},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 52},
    {refalrts::icPushStack, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 51},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icLinkBrackets, 48, 49, 0},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 59},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 44},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 61},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 38, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 64},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 62},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 57},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  //53: e.PatternVars#1/1
  //55: e.PatternCommands#1/1
  //57: e.ResultVars#1/1
  //59: e.ResultCommands#1/1
  //61: s.ContextCount#1/1
  //62: e.PatternCommands#1/2
  //64: e.PatternCommands#1/3
  // ( e.PatternVars#1 ) ( e.PatternCommands#1 ) s.ContextCount#1 ( e.ResultVars#1 ) ( e.ResultCommands#1 )
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
  if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[53] = context[2];
  context[54] = context[3];
  context[55] = context[4];
  context[56] = context[5];
  context[57] = context[8];
  context[58] = context[9];
  context[59] = context[6];
  context[60] = context[7];
  if( ! refalrts::svar_left( context[61], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[62], context[63], context[55], context[56]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[64], context[65], context[62], context[63]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ReplicateVars, "ReplicateVars" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ReplicateVars, "ReplicateVars" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], RepeatedEVariables, "RepeatedEVariables" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], ClosedEVariables, "ClosedEVariables" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], lambda_GeneralizeResult_0, "lambda_GeneralizeResult_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], lambda_GeneralizeResult_1, "lambda_GeneralizeResult_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[43], lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[46], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[47], lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[52] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[52] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[52] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[32] );
  res = refalrts::splice_elem( res, context[51] );
  refalrts::push_stack( context[50] );
  refalrts::push_stack( context[45] );
  res = refalrts::splice_elem( res, context[50] );
  refalrts::link_brackets( context[48], context[49] );
  res = refalrts::splice_elem( res, context[49] );
  res = refalrts::splice_evar( res, context[59], context[60] );
  res = refalrts::splice_elem( res, context[48] );
  res = refalrts::splice_elem( res, context[47] );
  res = refalrts::splice_elem( res, context[46] );
  res = refalrts::splice_elem( res, context[45] );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[41] );
  res = refalrts::splice_elem( res, context[44] );
  res = refalrts::splice_stvar( res, context[61] );
  res = refalrts::splice_elem( res, context[43] );
  res = refalrts::splice_elem( res, context[42] );
  res = refalrts::splice_elem( res, context[41] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[35] );
  res = refalrts::splice_elem( res, context[40] );
  refalrts::link_brackets( context[38], context[39] );
  res = refalrts::splice_elem( res, context[39] );
  res = refalrts::splice_evar( res, context[64], context[65] );
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_elem( res, context[37] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[28] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[62], context[63] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::link_brackets( context[22], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[23] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[55], context[56] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[17], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[57], context[58] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[12], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldOpenELoops, "FoldOpenELoops" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdOpenedE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Commands_B#1/1
    //15: e.Commands_E#1/1
    //17: s.BracketNum#1/1
    //18: s.VarNumber#1/1
    // e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.BracketNum#1 s.VarNumber#1 ) e.Commands_E#1
    {refalrts::icEPrepare, 0, 13, 0},
    {refalrts::icEStart, 0, 13, 0},
    {refalrts::icSave, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 2, 4},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 15, 4},
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 18, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 6, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: e.Commands#1/1
    // e.Commands#1
    {refalrts::icContextSet, 0, 2, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    //13: e.Commands_B#1/1
    //15: e.Commands_E#1/1
    //17: s.BracketNum#1/1
    //18: s.VarNumber#1/1
    // e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.BracketNum#1 s.VarNumber#1 ) e.Commands_E#1
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[4] = context[0];
      context[5] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[2], context[3] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
        continue;
      context[15] = context[4];
      context[16] = context[5];
      if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
        continue;
      if( ! refalrts::empty_seq( context[2], context[3] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[6] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[7], & ident_CmdOpenELoop<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[8], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[9] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[10], FoldOpenELoops, "FoldOpenELoops" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[12] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[6], context[12] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[9] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_stvar( res, context[18] );
      res = refalrts::splice_stvar( res, context[17] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[6] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: e.Commands#1/1
  // e.Commands#1
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

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Dec, "Dec" },
    { ReplicateVar, "ReplicateVar" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Mode#1/1
    //8: e.Index#1/1
    // ( 1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icNumLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icInt, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.Using#1/1
    //15: s.Mode#1/1
    //16: e.Index#1/1
    //18: s.Using#1/2
    //19: s.Mode#1/2
    //20: e.Index#1/2
    // ( s.Using#1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 18, 14, 0},
    {refalrts::icCopySTVar, 19, 15, 0},
    {refalrts::icCopyEVar, 20, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
    //7: s.Mode#1/1
    //8: e.Index#1/1
    // ( 1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::number_left( 1UL, context[2], context[3] ) )
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
    if( ! refalrts::alloc_number( context[5], 1UL ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //14: s.Using#1/1
  //15: s.Mode#1/1
  //16: e.Index#1/1
  //18: s.Using#1/2
  //19: s.Mode#1/2
  //20: e.Index#1/2
  // ( s.Using#1 s.Mode#1 e.Index#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = context[2];
  context[17] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[18], context[14]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[19], context[15]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ReplicateVar, "ReplicateVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_stvar( res, context[19] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[6], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_stvar( res, context[15] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ReplicateVar, "ReplicateVar" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Vars#1/1
    // e.Vars#1
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
  //6: e.Vars#1/1
  // e.Vars#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], ReplicateVar, "ReplicateVar" ) )
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

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { VarSetUnion, "VarSetUnion" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: t.Common#1/1
    //16: t.Common#1/2
    //17: e.Set1#1/1
    //19: e.Set2_B#1/1
    //21: e.Set2_E#1/1
    // ( t.Common#1 e.Set1#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEPrepare, 0, 19, 4},
    {refalrts::icEStart, 0, 19, 4},
    {refalrts::icSave, 0, 6, 4},
    {refalrts::ictRepeatLeft, 16, 15, 6},
    {refalrts::icContextSet, 0, 21, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Set2#1/1
    //15: t.OnlyInSet1#1/1
    //16: e.Set1#1/1
    // ( t.OnlyInSet1#1 e.Set1#1 ) ( e.Set2#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::ictVarLeft, 0, 15, 2},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Set2#1/1
    // ( ) ( e.Set2#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 6, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
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
    //15: t.Common#1/1
    //16: t.Common#1/2
    //17: e.Set1#1/1
    //19: e.Set2_B#1/1
    //21: e.Set2_E#1/1
    // ( t.Common#1 e.Set1#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[15], context[2], context[3] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[4];
      context[7] = context[5];
      if( ! refalrts::repeated_stvar_left( context[16], context[15], context[6], context[7] ) )
        continue;
      context[21] = context[6];
      context[22] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], VarSetUnion, "VarSetUnion" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[8] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::link_brackets( context[12], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::link_brackets( context[10], context[11] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_stvar( res, context[15] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Set2#1/1
    //15: t.OnlyInSet1#1/1
    //16: e.Set1#1/1
    // ( t.OnlyInSet1#1 e.Set1#1 ) ( e.Set2#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[4];
    context[14] = context[5];
    if( ! refalrts::tvar_left( context[15], context[2], context[3] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], VarSetUnion, "VarSetUnion" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.Set2#1/1
  // ( ) ( e.Set2#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = context[4];
  context[7] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { VarSetDifference, "VarSetDifference" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: t.Common#1/1
    //16: t.Common#1/2
    //17: e.Set1#1/1
    //19: e.Set2_B#1/1
    //21: e.Set2_E#1/1
    // ( t.Common#1 e.Set1#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEPrepare, 0, 19, 4},
    {refalrts::icEStart, 0, 19, 4},
    {refalrts::icSave, 0, 6, 4},
    {refalrts::ictRepeatLeft, 16, 15, 6},
    {refalrts::icContextSet, 0, 21, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Set2#1/1
    //15: t.OnlyInSet1#1/1
    //16: e.Set1#1/1
    // ( t.OnlyInSet1#1 e.Set1#1 ) ( e.Set2#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::ictVarLeft, 0, 15, 2},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) ( e.Set2#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // Unused closed variable e.Set2#1
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
    //15: t.Common#1/1
    //16: t.Common#1/2
    //17: e.Set1#1/1
    //19: e.Set2_B#1/1
    //21: e.Set2_E#1/1
    // ( t.Common#1 e.Set1#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[15], context[2], context[3] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[4];
      context[7] = context[5];
      if( ! refalrts::repeated_stvar_left( context[16], context[15], context[6], context[7] ) )
        continue;
      context[21] = context[6];
      context[22] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], VarSetDifference, "VarSetDifference" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[8] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::link_brackets( context[12], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::link_brackets( context[10], context[11] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //13: e.Set2#1/1
    //15: t.OnlyInSet1#1/1
    //16: e.Set1#1/1
    // ( t.OnlyInSet1#1 e.Set1#1 ) ( e.Set2#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[13] = context[4];
    context[14] = context[5];
    if( ! refalrts::tvar_left( context[15], context[2], context[3] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( ) ( e.Set2#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Set2#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdClosedE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Num#1/1
    //9: e.Index#1/1
    // ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icInt, 0, 1, 5},
    {refalrts::icChar, 0, 'e', 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: t.Other#1/1
    // t.Other#1
    {refalrts::ictVarLeft, 0, 2, 0},
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
    //8: s.Num#1/1
    //9: e.Index#1/1
    // ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 )
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
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[5], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
  //2: t.Other#1/1
  // t.Other#1
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
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

static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdRepeated<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Direction#1/1
    //9: s.Num#1/1
    //10: s.Count#1/1
    //11: e.Index#1/1
    // ( # CmdRepeated s.Direction#1 s.Num#1 s.Count#1 'e e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icInt, 0, 1, 5},
    {refalrts::icChar, 0, 'e', 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: t.Other#1/1
    // t.Other#1
    {refalrts::ictVarLeft, 0, 2, 0},
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
    //8: s.Direction#1/1
    //9: s.Num#1/1
    //10: s.Count#1/1
    //11: e.Index#1/1
    // ( # CmdRepeated s.Direction#1 s.Num#1 s.Count#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[5], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
  //2: t.Other#1/1
  // t.Other#1
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
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

static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdClosedE<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" Unused closed variable e.", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: s.Num#1/1
    //18: s.Depth#1/1
    //19: s.Depth#1/2
    //20: e.Index#1/1
    //22: e.Index#1/2
    //24: e.Unuseds_B#1/1
    // e.Unuseds_B#1 ( 1 'e e.Index#1 s.Depth#1 ) e.Unuseds_E#1 ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 s.Depth#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icsVarRight, 0, 18, 2},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icEPrepare, 0, 24, 0},
    {refalrts::icEStart, 0, 24, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icNumLeft, 0, 1, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::iceRepeatLeft, 22, 20, 4},
    {refalrts::icsRepeatLeft, 19, 18, 4},
    {refalrts::icEmpty, 0, 0, 4},
    // Unused closed variable e.Unuseds_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icChar, 0, '#', 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: t.OtherCommand#1/1
    // e.Unuseds#1 t.OtherCommand#1
    {refalrts::ictVarRight, 0, 2, 0},
    // Unused closed variable e.Unuseds#1
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
    //17: s.Num#1/1
    //18: s.Depth#1/1
    //19: s.Depth#1/2
    //20: e.Index#1/1
    //22: e.Index#1/2
    //24: e.Unuseds_B#1/1
    // e.Unuseds_B#1 ( 1 'e e.Index#1 s.Depth#1 ) e.Unuseds_E#1 ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 s.Depth#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[2], context[3] ) )
      continue;
    context[20] = context[2];
    context[21] = context[3];
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::number_left( 1UL, context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[22], context[23], context[20], context[21], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[19], context[18], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      // Unused closed variable e.Unuseds_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[9], & ident_CmdComment<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[10], context[11], " Unused closed variable e.", 26 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[12], '#' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[14], StrFromInt, "StrFromInt" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[8], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[13] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[18] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: t.OtherCommand#1/1
  // e.Unuseds#1 t.OtherCommand#1
  if( ! refalrts::tvar_right( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Unuseds#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetOffsetForCmdInsertVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInsertVar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.Usings#1/1
    //12: s.Usings#1/2
    //13: s.Mode#1/1
    //14: s.Mode#1/2
    //15: e.Index#1/1
    //17: e.Index#1/2
    //19: e.Vars_B#1/1
    //21: s.Number#1/1
    // e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::icEPrepare, 0, 19, 0},
    {refalrts::icEStart, 0, 19, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::iceRepeatRight, 17, 15, 4},
    {refalrts::icsRepeatRight, 14, 13, 4},
    {refalrts::icsRepeatRight, 12, 11, 4},
    // Unused closed variable e.Vars_E#1
    {refalrts::icsVarLeft, 0, 21, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: t.OtherCommand#1/1
    // e.Vars#1 t.OtherCommand#1
    {refalrts::ictVarRight, 0, 2, 0},
    // Unused closed variable e.Vars#1
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
    //11: s.Usings#1/1
    //12: s.Usings#1/2
    //13: s.Mode#1/1
    //14: s.Mode#1/2
    //15: e.Index#1/1
    //17: e.Index#1/2
    //19: e.Vars_B#1/1
    //21: s.Number#1/1
    // e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[15] = context[2];
    context[16] = context[3];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[17], context[18], context[15], context[16], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[14], context[13], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[12], context[11], context[4], context[5] ) )
        continue;
      // Unused closed variable e.Vars_E#1
      if( ! refalrts::svar_left( context[21], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[9], & ident_CmdInsertVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[10] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[8], context[10] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: t.OtherCommand#1/1
  // e.Vars#1 t.OtherCommand#1
  if( ! refalrts::tvar_right( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Vars#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_MakeCopyVar_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdCopyVar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.Mode#1/1
    //12: s.Mode#1/2
    //13: e.Index#1/1
    //15: e.Index#1/2
    //17: s.Number#1/1
    //18: s.Usings_1#2/1
    //19: s.Usings_1#2/2
    //20: e.Vars_B#2/1
    //22: s.Sample#2/1
    // s.Mode#1 ( e.Index#1 ) s.Number#1 e.Vars_B#2 ( s.Sample#2 s.Usings_1#2 s.Mode#1 e.Index#1 ) e.Vars_E#2 s.Usings_1#2
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::icsVarRight, 0, 18, 0},
    {refalrts::icEPrepare, 0, 20, 0},
    {refalrts::icEStart, 0, 20, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::iceRepeatRight, 15, 13, 4},
    {refalrts::icsRepeatRight, 12, 11, 4},
    {refalrts::icsRepeatRight, 19, 18, 4},
    // Unused closed variable e.Vars_E#2
    {refalrts::icsVarLeft, 0, 22, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
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
  //11: s.Mode#1/1
  //12: s.Mode#1/2
  //13: e.Index#1/1
  //15: e.Index#1/2
  //17: s.Number#1/1
  //18: s.Usings_1#2/1
  //19: s.Usings_1#2/2
  //20: e.Vars_B#2/1
  //22: s.Sample#2/1
  // s.Mode#1 ( e.Index#1 ) s.Number#1 e.Vars_B#2 ( s.Sample#2 s.Usings_1#2 s.Mode#1 e.Index#1 ) e.Vars_E#2 s.Usings_1#2
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  refalrts::start_e_loop();
  do {
    context[6] = context[0];
    context[7] = context[1];
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
      continue;
    if( ! refalrts::repeated_evar_right( context[15], context[16], context[13], context[14], context[4], context[5] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[12], context[11], context[4], context[5] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[19], context[18], context[4], context[5] ) )
      continue;
    // Unused closed variable e.Vars_E#2
    if( ! refalrts::svar_left( context[22], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdCopyVar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[20], context[21], context[0], context[1] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_MakeCopyVar_0, "lambda_MakeCopyVar_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Dec, "Dec" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //20: s.Usings#1/1
    //21: s.Usings#1/2
    //22: s.Mode#1/1
    //23: s.Mode#1/2
    //24: e.Index#1/1
    //26: e.Index#1/2
    //28: e.Vars_B#1/1
    //30: e.Vars_E#1/1
    //32: s.Number#1/1
    // e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ( s.Usings#1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 20, 2},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::icEPrepare, 0, 28, 0},
    {refalrts::icEStart, 0, 28, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::iceRepeatRight, 26, 24, 4},
    {refalrts::icsRepeatRight, 23, 22, 4},
    {refalrts::icsRepeatRight, 21, 20, 4},
    {refalrts::icContextSet, 0, 30, 6},
    {refalrts::icsVarLeft, 0, 32, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
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
  //20: s.Usings#1/1
  //21: s.Usings#1/2
  //22: s.Mode#1/1
  //23: s.Mode#1/2
  //24: e.Index#1/1
  //26: e.Index#1/2
  //28: e.Vars_B#1/1
  //30: e.Vars_E#1/1
  //32: s.Number#1/1
  // e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ( s.Usings#1 s.Mode#1 e.Index#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = context[2];
  context[25] = context[3];
  context[28] = 0;
  context[29] = 0;
  refalrts::start_e_loop();
  do {
    context[6] = context[0];
    context[7] = context[1];
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
      continue;
    if( ! refalrts::repeated_evar_right( context[26], context[27], context[24], context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[23], context[22], context[4], context[5] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[21], context[20], context[4], context[5] ) )
      continue;
    context[30] = context[6];
    context[31] = context[7];
    if( ! refalrts::svar_left( context[32], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_MakeCopyVar_0, "lambda_MakeCopyVar_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[32] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[28], context[29], context[0], context[1] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PatchVariableNumbers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MakeVariableComment, "MakeVariableComment" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //8: e.CommonVars#2/1
    //10: e.Commands#2/1
    // ( e.CommonVars#2 ) e.Commands#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icContextSet, 0, 10, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 8},
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
  //8: e.CommonVars#2/1
  //10: e.Commands#2/1
  // ( e.CommonVars#2 ) e.Commands#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = context[2];
  context[9] = context[3];
  context[10] = context[0];
  context[11] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MakeVariableComment, "MakeVariableComment" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PatchVariableNumbers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PatchVariableNumbers_0, "lambda_PatchVariableNumbers_0" },
    { PatchVariableNumber, "PatchVariableNumber" },
    { MapReduce, "MapReduce" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.CommonVars#1/1
    //19: e.Commands#1/1
    // ( e.CommonVars#1 ) e.Commands#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 19},
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
  //17: e.CommonVars#1/1
  //19: e.Commands#1/1
  // ( e.CommonVars#1 ) e.Commands#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], PatchVariableNumber, "PatchVariableNumber" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_PatchVariableNumbers_0, "lambda_PatchVariableNumbers_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[8], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //21: s.Number#1/1
    //22: s.Usings#1/1
    //23: s.Mode#1/1
    //24: s.Depth#1/1
    //25: e.Index#1/1
    // ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 s.Depth#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 23, 2},
    {refalrts::icsVarRight, 0, 24, 2},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icChar, 0, '.', 11},
    {refalrts::icChar, 0, '#', 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icChar, 0, '/', 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 4, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  //21: s.Number#1/1
  //22: s.Usings#1/1
  //23: s.Mode#1/1
  //24: s.Depth#1/1
  //25: e.Index#1/1
  // ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 s.Depth#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = context[2];
  context[26] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], ": ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[24] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PatchVariableNumber_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdRepeated<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //19: s.Mode#1/1
    //20: s.Mode#1/2
    //21: e.Index#1/1
    //23: e.Index#1/2
    //25: s.Number#1/1
    //26: s.Usings#1/1
    //27: e.Vars_E#1/1
    //29: s.Direction#1/1
    //30: s.BracketNumber#1/1
    //31: s.SampleUsings#2/1
    //32: s.SampleUsings#2/2
    //33: e.Vars_BB#2/1
    //35: e.Vars_BE#2/1
    //37: s.SampleNumber#2/1
    //38: s.SampleNumber#2/2
    //39: s.Mode#1/3
    //40: s.Number#1/2
    // s.Mode#1 ( e.Index#1 ) s.Number#1 s.Usings#1 ( e.Vars_E#1 ) s.Direction#1 s.BracketNumber#1 s.SampleUsings#2 e.Vars_BB#2 ( s.SampleNumber#2 s.SampleUsings#2 s.Mode#1 e.Index#1 ) e.Vars_BE#2
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icsVarLeft, 0, 30, 0},
    {refalrts::icsVarLeft, 0, 31, 0},
    {refalrts::icEPrepare, 0, 33, 0},
    {refalrts::icEStart, 0, 33, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::iceRepeatRight, 23, 21, 6},
    {refalrts::icsRepeatRight, 20, 19, 6},
    {refalrts::icsRepeatRight, 32, 31, 6},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icsVarLeft, 0, 37, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 37, 0},
    {refalrts::icCopySTVar, 39, 20, 0},
    {refalrts::icCopySTVar, 40, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
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
  //19: s.Mode#1/1
  //20: s.Mode#1/2
  //21: e.Index#1/1
  //23: e.Index#1/2
  //25: s.Number#1/1
  //26: s.Usings#1/1
  //27: e.Vars_E#1/1
  //29: s.Direction#1/1
  //30: s.BracketNumber#1/1
  //31: s.SampleUsings#2/1
  //32: s.SampleUsings#2/2
  //33: e.Vars_BB#2/1
  //35: e.Vars_BE#2/1
  //37: s.SampleNumber#2/1
  //38: s.SampleNumber#2/2
  //39: s.Mode#1/3
  //40: s.Number#1/2
  // s.Mode#1 ( e.Index#1 ) s.Number#1 s.Usings#1 ( e.Vars_E#1 ) s.Direction#1 s.BracketNumber#1 s.SampleUsings#2 e.Vars_BB#2 ( s.SampleNumber#2 s.SampleUsings#2 s.Mode#1 e.Index#1 ) e.Vars_BE#2
  if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[2];
  context[22] = context[3];
  if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[27] = context[4];
  context[28] = context[5];
  if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[30], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[31], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[33] = 0;
  context[34] = 0;
  refalrts::start_e_loop();
  do {
    context[8] = context[0];
    context[9] = context[1];
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
      continue;
    if( ! refalrts::repeated_evar_right( context[23], context[24], context[21], context[22], context[6], context[7] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[20], context[19], context[6], context[7] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[32], context[31], context[6], context[7] ) )
      continue;
    context[35] = context[8];
    context[36] = context[9];
    if( ! refalrts::svar_left( context[37], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[38], context[37]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[20]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdRepeated<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[16], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[10], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[33], context[34], context[0], context[1] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PatchVariableNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PatchVariableNumber_0, "lambda_PatchVariableNumber_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Dec, "Dec" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdVar<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name,
    & ident_CmdClosedE<int>::name,
    & ident_CmdRepeated<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +67, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: s.Direction#1/1
    //25: s.BracketNumber#1/1
    //26: s.Usings#1/1
    //27: s.Usings#1/2
    //28: s.Mode#1/1
    //29: s.Mode#1/2
    //30: e.Index#1/1
    //32: e.Index#1/2
    //34: e.Vars_B#1/1
    //36: e.Vars_E#1/1
    //38: s.Number#1/1
    // ( e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Usings#1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 4, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icsVarLeft, 0, 26, 4},
    {refalrts::icsVarLeft, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icEPrepare, 0, 34, 2},
    {refalrts::icEStart, 0, 34, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::iceRepeatRight, 32, 30, 6},
    {refalrts::icsRepeatRight, 29, 28, 6},
    {refalrts::icsRepeatRight, 27, 26, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icsVarLeft, 0, 38, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //20: s.BracketNumber#1/1
    //21: e.Index#1/1
    //23: e.Index#1/2
    //25: e.Vars_B#1/1
    //27: e.Vars_E#1/1
    //29: s.VarNumber#1/1
    //30: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 'e e.Index#1 ) e.Vars_E#1 ) ( # CmdClosedE # AlgLeft s.BracketNumber#1 'e e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icEPrepare, 0, 25, 2},
    {refalrts::icEStart, 0, 25, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::iceRepeatRight, 23, 21, 6},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 6},
    {refalrts::icNumRight, 0, 1, 6},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::icsVarLeft, 0, 29, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 30, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icInt, 0, 1, 12},
    {refalrts::icChar, 0, 'e', 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 3, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //20: s.BracketNumber#1/1
    //21: e.Index#1/1
    //23: e.Index#1/2
    //25: e.Vars_B#1/1
    //27: e.Vars_E#1/1
    //29: s.VarNumber#1/1
    //30: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 'e e.Index#1 ) e.Vars_E#1 ) ( # CmdOpenedE # AlgLeft s.BracketNumber#1 'e e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icEPrepare, 0, 25, 2},
    {refalrts::icEStart, 0, 25, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::iceRepeatRight, 23, 21, 6},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 6},
    {refalrts::icNumRight, 0, 1, 6},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::icsVarLeft, 0, 29, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 30, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icInt, 0, 1, 12},
    {refalrts::icChar, 0, 'e', 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 2, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Vars_B#1/1
    //28: e.Vars_E#1/1
    //30: s.VarNumber#1/1
    //31: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 e.Index#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icContextSet, 0, 22, 4},
    {refalrts::icEPrepare, 0, 26, 2},
    {refalrts::icEStart, 0, 26, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::iceRepeatRight, 24, 22, 6},
    {refalrts::icsRepeatRight, 21, 20, 6},
    {refalrts::icNumRight, 0, 1, 6},
    {refalrts::icContextSet, 0, 28, 8},
    {refalrts::icsVarLeft, 0, 30, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 31, 30, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icInt, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Vars#1/1
    //8: t.NextCommand#1/1
    // ( e.Vars#1 ) t.NextCommand#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 6, 2},
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[8];
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
    //24: s.Direction#1/1
    //25: s.BracketNumber#1/1
    //26: s.Usings#1/1
    //27: s.Usings#1/2
    //28: s.Mode#1/1
    //29: s.Mode#1/2
    //30: e.Index#1/1
    //32: e.Index#1/2
    //34: e.Vars_B#1/1
    //36: e.Vars_E#1/1
    //38: s.Number#1/1
    // ( e.Vars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( # CmdRepeated s.Direction#1 s.BracketNumber#1 s.Usings#1 s.Mode#1 e.Index#1 )
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
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[4], context[5] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[32], context[33], context[30], context[31], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[29], context[28], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[27], context[26], context[6], context[7] ) )
        continue;
      context[36] = context[8];
      context[37] = context[9];
      if( ! refalrts::svar_left( context[38], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], Dec, "Dec" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], lambda_PatchVariableNumber_0, "lambda_PatchVariableNumber_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[23] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[10] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[15] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_stvar( res, context[24] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_stvar( res, context[27] );
      res = refalrts::splice_stvar( res, context[38] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[34], context[35], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //20: s.BracketNumber#1/1
    //21: e.Index#1/1
    //23: e.Index#1/2
    //25: e.Vars_B#1/1
    //27: e.Vars_E#1/1
    //29: s.VarNumber#1/1
    //30: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 'e e.Index#1 ) e.Vars_E#1 ) ( # CmdClosedE # AlgLeft s.BracketNumber#1 'e e.Index#1 )
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
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    context[21] = context[4];
    context[22] = context[5];
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[23], context[24], context[21], context[22], context[6], context[7] ) )
        continue;
      if( ! refalrts::char_right( 'e', context[6], context[7] ) )
        continue;
      if( ! refalrts::number_right( 1UL, context[6], context[7] ) )
        continue;
      context[27] = context[8];
      context[28] = context[9];
      if( ! refalrts::svar_left( context[29], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[30], context[29]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[12], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[13], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_CmdClosedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[16], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::link_brackets( context[10], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::link_brackets( context[11], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[25], context[26], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //20: s.BracketNumber#1/1
    //21: e.Index#1/1
    //23: e.Index#1/2
    //25: e.Vars_B#1/1
    //27: e.Vars_E#1/1
    //29: s.VarNumber#1/1
    //30: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 'e e.Index#1 ) e.Vars_E#1 ) ( # CmdOpenedE # AlgLeft s.BracketNumber#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    context[21] = context[4];
    context[22] = context[5];
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[23], context[24], context[21], context[22], context[6], context[7] ) )
        continue;
      if( ! refalrts::char_right( 'e', context[6], context[7] ) )
        continue;
      if( ! refalrts::number_right( 1UL, context[6], context[7] ) )
        continue;
      context[27] = context[8];
      context[28] = context[9];
      if( ! refalrts::svar_left( context[29], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[30], context[29]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[12], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[13], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[16], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::link_brackets( context[10], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::link_brackets( context[11], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[25], context[26], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //18: s.Direction#1/1
    //19: s.BracketNumber#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Vars_B#1/1
    //28: e.Vars_E#1/1
    //30: s.VarNumber#1/1
    //31: s.VarNumber#1/2
    // ( e.Vars_B#1 ( s.VarNumber#1 1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 e.Index#1 )
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
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    context[22] = context[4];
    context[23] = context[5];
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[24], context[25], context[22], context[23], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[21], context[20], context[6], context[7] ) )
        continue;
      if( ! refalrts::number_right( 1UL, context[6], context[7] ) )
        continue;
      context[28] = context[8];
      context[29] = context[9];
      if( ! refalrts::svar_left( context[30], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[31], context[30]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[12], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_stvar( res, context[18] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[10], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::link_brackets( context[11], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.Vars#1/1
  //8: t.NextCommand#1/1
  // ( e.Vars#1 ) t.NextCommand#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SaveBrackets, "SaveBrackets" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //9: s.NumRanges#2/1
    //10: e.Vars#2/1
    //12: e.Commands#2/1
    // s.NumRanges#2 ( e.Vars#2 ) e.Commands#2
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icContextSet, 0, 12, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 10},
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
  //9: s.NumRanges#2/1
  //10: e.Vars#2/1
  //12: e.Commands#2/1
  // s.NumRanges#2 ( e.Vars#2 ) e.Commands#2
  if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = context[2];
  context[11] = context[3];
  context[12] = context[0];
  context[13] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SaveBrackets, "SaveBrackets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Pattern#1/1
    //18: e.Vars#2/1
    //20: s.NumRanges#2/1
    //21: e.Commands#2/1
    // ( e.Pattern#1 ) ( e.Vars#2 ) s.NumRanges#2 e.Commands#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icContextSet, 0, 18, 4},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icContextSet, 0, 21, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 8, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 9, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 18},
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
  //16: e.Pattern#1/1
  //18: e.Vars#2/1
  //20: s.NumRanges#2/1
  //21: e.Commands#2/1
  // ( e.Pattern#1 ) ( e.Vars#2 ) s.NumRanges#2 e.Commands#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = context[2];
  context[17] = context[3];
  context[18] = context[4];
  context[19] = context[5];
  if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[0];
  context[22] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], TextFromPattern, "TextFromPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::link_brackets( context[9], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[20] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenPattern_1, "lambda_GenPattern_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_GenPattern_0, "lambda_GenPattern_0" },
    { Seq, "Seq" },
    { DoGenPattern, "DoGenPattern" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //26: e.Pattern#1/1
    //28: e.Pattern#1/2
    // e.Pattern#1
    {refalrts::icContextSet, 0, 26, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 28, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 5, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icInt, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icInt, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  //26: e.Pattern#1/1
  //28: e.Pattern#1/2
  // e.Pattern#1
  context[26] = context[0];
  context[27] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[28], context[29], context[26], context[27]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DoGenPattern, "DoGenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[6], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 0UL ) )
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
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], lambda_GenPattern_0, "lambda_GenPattern_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_GenPattern_1, "lambda_GenPattern_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[7], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
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

static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Add, "Add" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.Num#1/1
    // s.Num#1
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icInt, 0, 2, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
  //6: s.Num#1/1
  // s.Num#1
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Add, "Add" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[4], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoGenPattern, "DoGenPattern" },
    { Inc, "Inc" },
    { Inc2, "Inc2" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name,
    & ident_TkVariable<int>::name,
    & ident_AlgRight<int>::name,
    & ident_CmdVar<int>::name,
    & ident_CmdClosedE<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_CmdBrackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_CmdName<int>::name,
    & ident_TkName<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_CmdChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Char#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkChar s.Char#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 19, 8},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icsVarLeft, 0, 37, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 18, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Number#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkNumber s.Number#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 17, 8},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icsVarLeft, 0, 37, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 16, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Name#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkName e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 15, 8},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 14, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Name#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkIdentifier e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 13, 8},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 12, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Char#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkChar s.Char#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 19, 8},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icsVarLeft, 0, 37, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 18, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Number#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkNumber s.Number#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 17, 8},
    {refalrts::icContextSet, 0, 32, 10},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icsVarLeft, 0, 37, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 16, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Name#1/1
    //34: e.Ranges_E#1/1
    //36: s.Num#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkName e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 15, 8},
    {refalrts::icContextSet, 0, 32, 8},
    {refalrts::icContextSet, 0, 34, 10},
    {refalrts::icsVarLeft, 0, 36, 6},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 14, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Name#1/1
    //34: e.Ranges_E#1/1
    //36: s.Num#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkIdentifier e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icEPrepare, 0, 30, 0},
    {refalrts::icEStart, 0, 30, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 13, 8},
    {refalrts::icContextSet, 0, 32, 8},
    {refalrts::icContextSet, 0, 34, 10},
    {refalrts::icsVarLeft, 0, 36, 6},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 12, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.SubRange#1/1
    //42: e.Range#1/1
    //44: s.NumRanges#1/2
    //45: s.NumRanges#1/3
    //46: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # Brackets e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 37, 10},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 11, 8},
    {refalrts::icContextSet, 0, 40, 8},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 34, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icCopySTVar, 46, 39, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 10, 25},
    {refalrts::icIdent, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.SubRange#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.NumRanges#1/2
    //45: s.NumRanges#1/3
    //46: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # Brackets e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 11, 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 10},
    {refalrts::icsVarLeft, 0, 41, 6},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 34, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icCopySTVar, 46, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 10, 25},
    {refalrts::icIdent, 0, 3, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.Commands#1/1
    //36: s.NumRanges#1/1
    //37: e.Ranges_B#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Name#1/1
    //44: e.SubRange#1/1
    //46: e.Range#1/1
    //48: s.NumRanges#1/2
    //49: s.NumRanges#1/3
    //50: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icsVarLeft, 0, 36, 0},
    {refalrts::icEPrepare, 0, 37, 0},
    {refalrts::icEStart, 0, 37, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 6, 12},
    {refalrts::icContextSet, 0, 39, 12},
    {refalrts::icsVarLeft, 0, 41, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 9, 8},
    {refalrts::icBracketLeft, 0, 10, 8},
    {refalrts::icContextSet, 0, 42, 10},
    {refalrts::icContextSet, 0, 44, 8},
    {refalrts::icContextSet, 0, 46, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 48, 36, 0},
    {refalrts::icCopySTVar, 49, 48, 0},
    {refalrts::icCopySTVar, 50, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 8, 27},
    {refalrts::icIdent, 0, 0, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 25, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.Commands#1/1
    //36: s.NumRanges#1/1
    //37: e.Ranges_B#1/1
    //39: e.Name#1/1
    //41: e.SubRange#1/1
    //43: e.Ranges_E#1/1
    //45: s.Num#1/1
    //46: e.Range#1/1
    //48: s.NumRanges#1/2
    //49: s.NumRanges#1/3
    //50: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icsVarLeft, 0, 36, 0},
    {refalrts::icEPrepare, 0, 37, 0},
    {refalrts::icEStart, 0, 37, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 6, 12},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 9, 8},
    {refalrts::icBracketLeft, 0, 10, 8},
    {refalrts::icContextSet, 0, 39, 10},
    {refalrts::icContextSet, 0, 41, 8},
    {refalrts::icContextSet, 0, 43, 12},
    {refalrts::icsVarLeft, 0, 45, 6},
    {refalrts::icContextSet, 0, 46, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 48, 36, 0},
    {refalrts::icCopySTVar, 49, 48, 0},
    {refalrts::icCopySTVar, 50, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 8, 27},
    {refalrts::icIdent, 0, 3, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 25, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.Vars#1/1
    //23: e.Commands#1/1
    //25: s.NumRanges#1/1
    //26: e.Ranges_B#1/1
    //28: e.Ranges_E#1/1
    //30: s.Num#1/1
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icsVarLeft, 0, 25, 0},
    {refalrts::icEPrepare, 0, 26, 0},
    {refalrts::icEStart, 0, 26, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::icContextSet, 0, 28, 8},
    {refalrts::icsVarLeft, 0, 30, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 7, 16},
    {refalrts::icIdent, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +98, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //39: e.Commands#1/1
    //41: s.NumRanges#1/1
    //42: e.Ranges_B#1/1
    //44: e.Ranges_E#1/1
    //46: s.Num#1/1
    //47: e.Range#1/1
    //49: s.Mode#1/1
    //50: s.Mode#1/2
    //51: e.Index#1/1
    //53: e.Index#1/2
    //55: e.Vars_B#1/1
    //57: e.Vars_E#1/1
    //59: s.Count#1/1
    //60: s.Num#1/2
    //61: s.Count#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 39, 2},
    {refalrts::icsVarLeft, 0, 41, 0},
    {refalrts::icEPrepare, 0, 42, 0},
    {refalrts::icEStart, 0, 42, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icBracketLeft, 0, 6, 12},
    {refalrts::icContextSet, 0, 44, 12},
    {refalrts::icsVarLeft, 0, 46, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icContextSet, 0, 47, 6},
    {refalrts::icsVarLeft, 0, 49, 8},
    {refalrts::icContextSet, 0, 51, 8},
    {refalrts::icEPrepare, 0, 55, 14},
    {refalrts::icEStart, 0, 55, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icBracketLeft, 0, 10, 16},
    {refalrts::iceRepeatRight, 53, 51, 10},
    {refalrts::icsRepeatRight, 50, 49, 10},
    {refalrts::icContextSet, 0, 57, 16},
    {refalrts::icsVarLeft, 0, 59, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 60, 46, 0},
    {refalrts::icCopySTVar, 61, 59, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 1, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 6, 31},
    {refalrts::icIdent, 0, 0, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icFunc, 0, 1, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 29, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 30, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 61},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 57},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 59},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +98, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //39: e.Commands#1/1
    //41: s.NumRanges#1/1
    //42: e.Ranges_B#1/1
    //44: e.Ranges_E#1/1
    //46: s.Num#1/1
    //47: e.Range#1/1
    //49: s.Mode#1/1
    //50: s.Mode#1/2
    //51: e.Index#1/1
    //53: e.Index#1/2
    //55: e.Vars_B#1/1
    //57: e.Vars_E#1/1
    //59: s.Count#1/1
    //60: s.Num#1/2
    //61: s.Count#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable s.Mode#1 e.Index#1 ) ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 39, 2},
    {refalrts::icsVarLeft, 0, 41, 0},
    {refalrts::icEPrepare, 0, 42, 0},
    {refalrts::icEStart, 0, 42, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icBracketLeft, 0, 6, 12},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icContextSet, 0, 44, 12},
    {refalrts::icsVarLeft, 0, 46, 6},
    {refalrts::icContextSet, 0, 47, 6},
    {refalrts::icsVarLeft, 0, 49, 8},
    {refalrts::icContextSet, 0, 51, 8},
    {refalrts::icEPrepare, 0, 55, 14},
    {refalrts::icEStart, 0, 55, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icBracketLeft, 0, 10, 16},
    {refalrts::iceRepeatRight, 53, 51, 10},
    {refalrts::icsRepeatRight, 50, 49, 10},
    {refalrts::icContextSet, 0, 57, 16},
    {refalrts::icsVarLeft, 0, 59, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 60, 46, 0},
    {refalrts::icCopySTVar, 61, 59, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 1, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 6, 31},
    {refalrts::icIdent, 0, 3, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icFunc, 0, 1, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 29, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 30, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 61},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 57},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 59},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: e.Vars#1/1
    //30: e.Commands#1/1
    //32: s.NumRanges#1/1
    //33: e.Ranges_B#1/1
    //35: e.Index#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icsVarLeft, 0, 32, 0},
    {refalrts::icEPrepare, 0, 33, 0},
    {refalrts::icEStart, 0, 33, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 8},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icContextSet, 0, 37, 10},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 40, 35, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icInt, 0, 1, 16},
    {refalrts::icChar, 0, 'e', 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 5, 22},
    {refalrts::icIdent, 0, 0, 23},
    {refalrts::icChar, 0, 'e', 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 20, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 21, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 's e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 37, 10},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('s'), 8},
    {refalrts::icContextSet, 0, 40, 8},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 39, 0},
    {refalrts::icCopyEVar, 45, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icInt, 0, 1, 18},
    {refalrts::icChar, 0, 's', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 4, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icChar, 0, 's', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 't e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 37, 10},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 8},
    {refalrts::icContextSet, 0, 40, 8},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 39, 0},
    {refalrts::icCopyEVar, 45, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icInt, 0, 1, 18},
    {refalrts::icChar, 0, 't', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 4, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icChar, 0, 't', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Index#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 's e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('s'), 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 10},
    {refalrts::icsVarLeft, 0, 41, 6},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 41, 0},
    {refalrts::icCopyEVar, 45, 37, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icInt, 0, 1, 18},
    {refalrts::icChar, 0, 's', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 4, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icChar, 0, 's', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Index#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 't e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icBracketRight, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 10},
    {refalrts::icsVarLeft, 0, 41, 6},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 41, 0},
    {refalrts::icCopyEVar, 45, 37, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icInt, 0, 1, 18},
    {refalrts::icChar, 0, 't', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 4, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icChar, 0, 't', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icEPrepare, 0, 35, 0},
    {refalrts::icEStart, 0, 35, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 37, 10},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 8},
    {refalrts::icContextSet, 0, 40, 8},
    {refalrts::icContextSet, 0, 42, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 39, 0},
    {refalrts::icCopyEVar, 45, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icInt, 0, 1, 18},
    {refalrts::icChar, 0, 'e', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 1, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icChar, 0, 'e', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 23, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: e.Vars#1/1
    //10: e.Commands#1/1
    //12: s.NumRanges#1/1
    // s.NumRanges#1 ( e.Vars#1 ) ( e.Commands#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 8, 4},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[44];
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
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Char#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkChar s.Char#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
        continue;
      context[35] = context[6];
      context[36] = context[7];
      if( ! refalrts::svar_left( context[37], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[38], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Number#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkNumber s.Number#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
        continue;
      context[35] = context[6];
      context[36] = context[7];
      if( ! refalrts::svar_left( context[37], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[38], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Name#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkName e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
        continue;
      context[35] = context[8];
      context[36] = context[9];
      context[37] = context[6];
      context[38] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[39], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Name#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkIdentifier e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[8], context[9] ) )
        continue;
      context[35] = context[8];
      context[36] = context[9];
      context[37] = context[6];
      context[38] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[39], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Char#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkChar s.Char#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[35] = context[6];
      context[36] = context[7];
      if( ! refalrts::svar_left( context[37], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[38], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Ranges_E#1/1
    //34: s.Num#1/1
    //35: e.Range#1/1
    //37: s.Number#1/1
    //38: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkNumber s.Number#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
        continue;
      context[32] = context[10];
      context[33] = context[11];
      if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
        continue;
      context[35] = context[6];
      context[36] = context[7];
      if( ! refalrts::svar_left( context[37], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[38], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Name#1/1
    //34: e.Ranges_E#1/1
    //36: s.Num#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkName e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
        continue;
      context[32] = context[8];
      context[33] = context[9];
      context[34] = context[10];
      context[35] = context[11];
      if( ! refalrts::svar_left( context[36], context[6], context[7] ) )
        continue;
      context[37] = context[6];
      context[38] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[39], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.Vars#1/1
    //27: e.Commands#1/1
    //29: s.NumRanges#1/1
    //30: e.Ranges_B#1/1
    //32: e.Name#1/1
    //34: e.Ranges_E#1/1
    //36: s.Num#1/1
    //37: e.Range#1/1
    //39: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkIdentifier e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[8], context[9] ) )
        continue;
      context[32] = context[8];
      context[33] = context[9];
      context[34] = context[10];
      context[35] = context[11];
      if( ! refalrts::svar_left( context[36], context[6], context[7] ) )
        continue;
      context[37] = context[6];
      context[38] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[39], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[18], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[30], context[31], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.SubRange#1/1
    //42: e.Range#1/1
    //44: s.NumRanges#1/2
    //45: s.NumRanges#1/3
    //46: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # Brackets e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[37] = context[10];
      context[38] = context[11];
      if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[40] = context[8];
      context[41] = context[9];
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[34]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[44]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[39]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[23], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[24], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_stvar( res, context[45] );
      res = refalrts::splice_stvar( res, context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[17], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.SubRange#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.NumRanges#1/2
    //45: s.NumRanges#1/3
    //46: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # Brackets e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[37] = context[8];
      context[38] = context[9];
      context[39] = context[10];
      context[40] = context[11];
      if( ! refalrts::svar_left( context[41], context[6], context[7] ) )
        continue;
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[34]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[44]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[23], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[24], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_stvar( res, context[45] );
      res = refalrts::splice_stvar( res, context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[17], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Vars#1/1
    //34: e.Commands#1/1
    //36: s.NumRanges#1/1
    //37: e.Ranges_B#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Name#1/1
    //44: e.SubRange#1/1
    //46: e.Range#1/1
    //48: s.NumRanges#1/2
    //49: s.NumRanges#1/3
    //50: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_left( context[36], context[0], context[1] ) )
      continue;
    context[37] = 0;
    context[38] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[39] = context[12];
      context[40] = context[13];
      if( ! refalrts::svar_left( context[41], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      context[42] = context[10];
      context[43] = context[11];
      context[44] = context[8];
      context[45] = context[9];
      context[46] = context[6];
      context[47] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[48], context[36]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[48]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
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
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[25], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[37], context[38], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: e.Vars#1/1
    //34: e.Commands#1/1
    //36: s.NumRanges#1/1
    //37: e.Ranges_B#1/1
    //39: e.Name#1/1
    //41: e.SubRange#1/1
    //43: e.Ranges_E#1/1
    //45: s.Num#1/1
    //46: e.Range#1/1
    //48: s.NumRanges#1/2
    //49: s.NumRanges#1/3
    //50: s.Num#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[2];
    context[35] = context[3];
    if( ! refalrts::svar_left( context[36], context[0], context[1] ) )
      continue;
    context[37] = 0;
    context[38] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      context[39] = context[10];
      context[40] = context[11];
      context[41] = context[8];
      context[42] = context[9];
      context[43] = context[12];
      context[44] = context[13];
      if( ! refalrts::svar_left( context[45], context[6], context[7] ) )
        continue;
      context[46] = context[6];
      context[47] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[48], context[36]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[48]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[45]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
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
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[25], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_stvar( res, context[45] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[37], context[38], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //21: e.Vars#1/1
    //23: e.Commands#1/1
    //25: s.NumRanges#1/1
    //26: e.Ranges_B#1/1
    //28: e.Ranges_E#1/1
    //30: s.Num#1/1
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[21] = context[4];
    context[22] = context[5];
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::svar_left( context[25], context[0], context[1] ) )
      continue;
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      context[28] = context[8];
      context[29] = context[9];
      if( ! refalrts::svar_left( context[30], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[11], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_CmdEmpty<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[10] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[14], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[15], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::link_brackets( context[12], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //39: e.Commands#1/1
    //41: s.NumRanges#1/1
    //42: e.Ranges_B#1/1
    //44: e.Ranges_E#1/1
    //46: s.Num#1/1
    //47: e.Range#1/1
    //49: s.Mode#1/1
    //50: s.Mode#1/2
    //51: e.Index#1/1
    //53: e.Index#1/2
    //55: e.Vars_B#1/1
    //57: e.Vars_E#1/1
    //59: s.Count#1/1
    //60: s.Num#1/2
    //61: s.Count#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::svar_left( context[41], context[0], context[1] ) )
      continue;
    context[42] = 0;
    context[43] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[14] = context[4];
      context[15] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[44] = context[12];
      context[45] = context[13];
      if( ! refalrts::svar_left( context[46], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      context[47] = context[6];
      context[48] = context[7];
      if( ! refalrts::svar_left( context[49], context[8], context[9] ) )
        continue;
      context[51] = context[8];
      context[52] = context[9];
      context[55] = 0;
      context[56] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[53], context[54], context[51], context[52], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[50], context[49], context[10], context[11] ) )
          continue;
        context[57] = context[16];
        context[58] = context[17];
        if( ! refalrts::svar_left( context[59], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if (! refalrts::copy_stvar(context[60], context[46]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[61], context[59]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[25], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[31], & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[32], & ident_AlgLeft<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[38] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[38] );
        refalrts::push_stack( context[18] );
        res = refalrts::splice_elem( res, context[38] );
        refalrts::link_brackets( context[29], context[37] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::link_brackets( context[30], context[36] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_stvar( res, context[50] );
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[33] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_stvar( res, context[60] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::link_brackets( context[22], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[57], context[58] );
        refalrts::link_brackets( context[23], context[27] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_stvar( res, context[49] );
        refalrts::push_stack( context[26] );
        refalrts::push_stack( context[24] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_stvar( res, context[59] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        refalrts::link_brackets( context[20], context[21] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_stvar( res, context[46] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[55], context[56], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[42], context[43], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //39: e.Commands#1/1
    //41: s.NumRanges#1/1
    //42: e.Ranges_B#1/1
    //44: e.Ranges_E#1/1
    //46: s.Num#1/1
    //47: e.Range#1/1
    //49: s.Mode#1/1
    //50: s.Mode#1/2
    //51: e.Index#1/1
    //53: e.Index#1/2
    //55: e.Vars_B#1/1
    //57: e.Vars_E#1/1
    //59: s.Count#1/1
    //60: s.Num#1/2
    //61: s.Count#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable s.Mode#1 e.Index#1 ) ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::svar_left( context[41], context[0], context[1] ) )
      continue;
    context[42] = 0;
    context[43] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[14] = context[4];
      context[15] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      context[44] = context[12];
      context[45] = context[13];
      if( ! refalrts::svar_left( context[46], context[6], context[7] ) )
        continue;
      context[47] = context[6];
      context[48] = context[7];
      if( ! refalrts::svar_left( context[49], context[8], context[9] ) )
        continue;
      context[51] = context[8];
      context[52] = context[9];
      context[55] = 0;
      context[56] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[53], context[54], context[51], context[52], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[50], context[49], context[10], context[11] ) )
          continue;
        context[57] = context[16];
        context[58] = context[17];
        if( ! refalrts::svar_left( context[59], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if (! refalrts::copy_stvar(context[60], context[46]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[61], context[59]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[25], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[31], & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[32], & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[34], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[38] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[38] );
        refalrts::push_stack( context[18] );
        res = refalrts::splice_elem( res, context[38] );
        refalrts::link_brackets( context[29], context[37] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::link_brackets( context[30], context[36] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_stvar( res, context[50] );
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[33] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_stvar( res, context[60] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::link_brackets( context[22], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[57], context[58] );
        refalrts::link_brackets( context[23], context[27] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_stvar( res, context[49] );
        refalrts::push_stack( context[26] );
        refalrts::push_stack( context[24] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_stvar( res, context[59] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        refalrts::link_brackets( context[20], context[21] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_stvar( res, context[46] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[55], context[56], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[42], context[43], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //28: e.Vars#1/1
    //30: e.Commands#1/1
    //32: s.NumRanges#1/1
    //33: e.Ranges_B#1/1
    //35: e.Index#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[28] = context[4];
    context[29] = context[5];
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::svar_left( context[32], context[0], context[1] ) )
      continue;
    context[33] = 0;
    context[34] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[8], context[9] ) )
        continue;
      context[35] = context[8];
      context[36] = context[9];
      context[37] = context[10];
      context[38] = context[11];
      if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_evar(context[40], context[41], context[35], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[16], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[17], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_CmdClosedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[23], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[24], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[20], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[21], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[14], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[15], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[33], context[34], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 's e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[37] = context[10];
      context[38] = context[11];
      if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 's', context[8], context[9] ) )
        continue;
      context[40] = context[8];
      context[41] = context[9];
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[39]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[40], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[18], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[23], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[16], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[17], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 't e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[37] = context[10];
      context[38] = context[11];
      if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 't', context[8], context[9] ) )
        continue;
      context[40] = context[8];
      context[41] = context[9];
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[39]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[40], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[18], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[23], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[16], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[17], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Index#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 's e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 's', context[8], context[9] ) )
        continue;
      context[37] = context[8];
      context[38] = context[9];
      context[39] = context[10];
      context[40] = context[11];
      if( ! refalrts::svar_left( context[41], context[6], context[7] ) )
        continue;
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[41]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[37], context[38]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[18], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[23], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[16], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[17], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Index#1/1
    //39: e.Ranges_E#1/1
    //41: s.Num#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 't e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 't', context[8], context[9] ) )
        continue;
      context[37] = context[8];
      context[38] = context[9];
      context[39] = context[10];
      context[40] = context[11];
      if( ! refalrts::svar_left( context[41], context[6], context[7] ) )
        continue;
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[41]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[37], context[38]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[18], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[23], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[16], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[17], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //30: e.Vars#1/1
    //32: e.Commands#1/1
    //34: s.NumRanges#1/1
    //35: e.Ranges_B#1/1
    //37: e.Ranges_E#1/1
    //39: s.Num#1/1
    //40: e.Index#1/1
    //42: e.Range#1/1
    //44: s.Num#1/2
    //45: e.Index#1/2
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[2];
    context[33] = context[3];
    if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
      continue;
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[37] = context[10];
      context[38] = context[11];
      if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[8], context[9] ) )
        continue;
      context[40] = context[8];
      context[41] = context[9];
      context[42] = context[6];
      context[43] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[39]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[45], context[46], context[40], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[18], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[19], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[23], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[16], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[17], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: e.Vars#1/1
  //10: e.Commands#1/1
  //12: s.NumRanges#1/1
  // s.NumRanges#1 ( e.Vars#1 ) ( e.Commands#1 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = context[4];
  context[9] = context[5];
  context[10] = context[2];
  context[11] = context[3];
  if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoSaveBrackets, "DoSaveBrackets" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.LastBracket#1/1
    //8: e.Commands#1/1
    // s.LastBracket#1 e.Commands#1
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icContextSet, 0, 8, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 7},
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
  //7: s.LastBracket#1/1
  //8: e.Commands#1/1
  // s.LastBracket#1 e.Commands#1
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = context[0];
  context[9] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoSaveBrackets, "DoSaveBrackets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoSaveBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExtractBrackets, "ExtractBrackets" },
    { DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.LastBracket#1/1
    //15: e.Commands_E#1/1
    //17: e.CommandsBeforeEMatch#2/1
    //19: e.CommandsBeforeEMatch#2/2
    // s.LastBracket#1 ( e.Commands_E#1 ) e.CommandsBeforeEMatch#2
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 14},
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
  //14: s.LastBracket#1/1
  //15: e.Commands_E#1/1
  //17: e.CommandsBeforeEMatch#2/1
  //19: e.CommandsBeforeEMatch#2/2
  // s.LastBracket#1 ( e.Commands_E#1 ) e.CommandsBeforeEMatch#2
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[2];
  context[16] = context[3];
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[19], context[20], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ExtractBrackets, "ExtractBrackets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[6], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: s.LastBracket#1/1
    //23: e.Scanned#1/1
    //25: e.Commands_B#1/1
    //27: e.Commands_E#1/1
    //29: s.Num#1/1
    //30: e.Index#1/1
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.Num#1 'e e.Index#1 ) e.Commands_E#1
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icEPrepare, 0, 25, 0},
    {refalrts::icEStart, 0, 25, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icsVarLeft, 0, 29, 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icChar, 0, 'e', 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: s.LastBracket#1/1
    //5: e.Scanned#1/1
    //7: e.Commands#1/1
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands#1
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 5, 2},
    {refalrts::icContextSet, 0, 7, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    //22: s.LastBracket#1/1
    //23: e.Scanned#1/1
    //25: e.Commands_B#1/1
    //27: e.Commands_E#1/1
    //29: s.Num#1/1
    //30: e.Index#1/1
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.Num#1 'e e.Index#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
        continue;
      context[27] = context[6];
      context[28] = context[7];
      if( ! refalrts::svar_left( context[29], context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[4], context[5] ) )
        continue;
      context[30] = context[4];
      context[31] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[11], & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[12], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[13], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[21] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[21] );
      refalrts::push_stack( context[8] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[15] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[22] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[10], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[25], context[26], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //4: s.LastBracket#1/1
  //5: e.Scanned#1/1
  //7: e.Commands#1/1
  // s.LastBracket#1 ( e.Scanned#1 ) e.Commands#1
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = context[2];
  context[6] = context[3];
  context[7] = context[0];
  context[8] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoSaveBrackets_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.Num#1/1
    //7: s.Num#1/2
    //8: s.LastBracket#1/1
    //9: s.Command#2/1
    //10: s.Direction#2/1
    //11: e.Info#2/1
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.Num#1 e.Info#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icsRepeatLeft, 7, 6, 2},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: s.Num#1/1
    //7: s.LastBracket#1/1
    //8: s.Command#2/1
    //9: s.Direction#2/1
    //10: s.OtherNum#2/1
    //11: e.Info#2/1
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.OtherNum#2 e.Info#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
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
    //6: s.Num#1/1
    //7: s.Num#1/2
    //8: s.LastBracket#1/1
    //9: s.Command#2/1
    //10: s.Direction#2/1
    //11: e.Info#2/1
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.Num#1 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[7], context[6], context[2], context[3] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[5] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_stvar( res, context[9] );
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
  //6: s.Num#1/1
  //7: s.LastBracket#1/1
  //8: s.Command#2/1
  //9: s.Direction#2/1
  //10: s.OtherNum#2/1
  //11: e.Info#2/1
  // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.OtherNum#2 e.Info#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoSaveBrackets, "DoSaveBrackets" },
    { lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" },
    { Inc2, "Inc2" },
    { DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSave<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +95, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //36: s.LastBracket#1/1
    //37: e.Scanned#1/1
    //39: e.BoundedBrackets_B#1/1
    //41: s.Num#1/1
    //42: s.Num#1/2
    //43: e.BoundedBrackets_E#1/1
    //45: e.Commands_B#1/1
    //47: e.Commands_E#1/1
    //49: s.Command#1/1
    //50: s.Direction#1/1
    //51: e.Args#1/1
    //53: s.LastBracket#1/2
    //54: s.LastBracket#1/3
    //55: s.Num#1/3
    // s.LastBracket#1 ( e.BoundedBrackets_B#1 s.Num#1 e.BoundedBrackets_E#1 ) ( e.Scanned#1 ) e.Commands_B#1 ( s.Command#1 s.Direction#1 s.Num#1 e.Args#1 ) e.Commands_E#1
    {refalrts::icsVarLeft, 0, 36, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icEPrepare, 0, 39, 2},
    {refalrts::icEStart, 0, 39, 2},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icsVarLeft, 0, 41, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEPrepare, 0, 45, 8},
    {refalrts::icEStart, 0, 45, 8},
    {refalrts::icSave, 0, 12, 8},
    {refalrts::icBracketLeft, 0, 6, 12},
    {refalrts::icContextSet, 0, 47, 12},
    {refalrts::icsVarLeft, 0, 49, 6},
    {refalrts::icsVarLeft, 0, 50, 6},
    {refalrts::icsRepeatLeft, 42, 41, 6},
    {refalrts::icContextSet, 0, 51, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 53, 36, 0},
    {refalrts::icCopySTVar, 54, 53, 0},
    {refalrts::icCopySTVar, 55, 42, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 5, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 4, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 3, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 2, 29},
    {refalrts::icFunc, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 55},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 21, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.LastBracket#1/1
    //12: e.Scanned#1/1
    //14: e.Commands#1/1
    // s.LastBracket#1 ( e.UnusedBoundedBrackets#1 ) ( e.Scanned#1 ) e.Commands#1
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // Unused closed variable e.UnusedBoundedBrackets#1
    {refalrts::icContextSet, 0, 12, 4},
    {refalrts::icContextSet, 0, 14, 0},
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
    //36: s.LastBracket#1/1
    //37: e.Scanned#1/1
    //39: e.BoundedBrackets_B#1/1
    //41: s.Num#1/1
    //42: s.Num#1/2
    //43: e.BoundedBrackets_E#1/1
    //45: e.Commands_B#1/1
    //47: e.Commands_E#1/1
    //49: s.Command#1/1
    //50: s.Direction#1/1
    //51: e.Args#1/1
    //53: s.LastBracket#1/2
    //54: s.LastBracket#1/3
    //55: s.Num#1/3
    // s.LastBracket#1 ( e.BoundedBrackets_B#1 s.Num#1 e.BoundedBrackets_E#1 ) ( e.Scanned#1 ) e.Commands_B#1 ( s.Command#1 s.Direction#1 s.Num#1 e.Args#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[36], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[37] = context[4];
    context[38] = context[5];
    context[39] = 0;
    context[40] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[10] = context[2];
      context[11] = context[3];
      if( ! refalrts::svar_left( context[41], context[10], context[11] ) )
        continue;
      context[43] = context[10];
      context[44] = context[11];
      context[45] = 0;
      context[46] = 0;
      refalrts::start_e_loop();
      do {
        context[12] = context[8];
        context[13] = context[9];
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
          continue;
        context[47] = context[12];
        context[48] = context[13];
        if( ! refalrts::svar_left( context[49], context[6], context[7] ) )
          continue;
        if( ! refalrts::svar_left( context[50], context[6], context[7] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[42], context[41], context[6], context[7] ) )
          continue;
        context[51] = context[6];
        context[52] = context[7];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if (! refalrts::copy_stvar(context[53], context[36]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[54], context[53]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[55], context[42]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[14] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[15], DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[16] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[17], Inc2, "Inc2" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[23], & ident_CmdSave<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[27], Map, "Map" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[29], refalrts::create_closure, "refalrts::create_closure" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[30], lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[14] );
        res = refalrts::splice_elem( res, context[35] );
        refalrts::push_stack( context[34] );
        refalrts::push_stack( context[26] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        refalrts::link_brackets( context[32], context[33] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_stvar( res, context[55] );
        res = refalrts::splice_stvar( res, context[50] );
        res = refalrts::splice_stvar( res, context[49] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        refalrts::push_stack( context[31] );
        refalrts::push_stack( context[28] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_stvar( res, context[54] );
        res = refalrts::splice_stvar( res, context[42] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        refalrts::link_brackets( context[21], context[25] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::link_brackets( context[22], context[24] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_stvar( res, context[53] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_elem( res, context[21] );
        refalrts::link_brackets( context[19], context[20] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_elem( res, context[19] );
        refalrts::push_stack( context[18] );
        refalrts::push_stack( context[16] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_stvar( res, context[36] );
        res = refalrts::splice_elem( res, context[17] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_elem( res, context[14] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[45], context[46], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[39], context[40], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //11: s.LastBracket#1/1
  //12: e.Scanned#1/1
  //14: e.Commands#1/1
  // s.LastBracket#1 ( e.UnusedBoundedBrackets#1 ) ( e.Scanned#1 ) e.Commands#1
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.UnusedBoundedBrackets#1
  context[12] = context[4];
  context[13] = context[5];
  context[14] = context[0];
  context[15] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], DoSaveBrackets, "DoSaveBrackets" ) )
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
#endif
}

static refalrts::FnResult lambda_ExtractBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdADT<int>::name,
    & ident_CmdBrackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +12, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: s.Direction#2/1
    //5: s.BracketNum#2/1
    //6: s.InnerNum#2/1
    // ( # CmdBrackets s.Direction#2 s.BracketNum#2 s.InnerNum#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: s.Direction#2/1
    //5: s.BracketNum#2/1
    //6: s.InnerNum#2/1
    // ( # CmdADT s.Direction#2 s.BracketNum#2 s.InnerNum#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // Unused closed variable e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: s.Command#2/1
    //5: s.Direction#2/1
    //6: s.BracketNum#2/1
    // ( s.Command#2 s.Direction#2 s.BracketNum#2 e.Info#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // Unused closed variable e.Info#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    //4: s.Direction#2/1
    //5: s.BracketNum#2/1
    //6: s.InnerNum#2/1
    // ( # CmdBrackets s.Direction#2 s.BracketNum#2 s.InnerNum#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    //4: s.Direction#2/1
    //5: s.BracketNum#2/1
    //6: s.InnerNum#2/1
    // ( # CmdADT s.Direction#2 s.BracketNum#2 s.InnerNum#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    // Unused closed variable e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[6] );
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
  //4: s.Command#2/1
  //5: s.Direction#2/1
  //6: s.BracketNum#2/1
  // ( s.Command#2 s.Direction#2 s.BracketNum#2 e.Info#2 )
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
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Info#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" },
    { Map, "Map" },
    { Brackets_Set, "Brackets_Set" }
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
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
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
  if( ! refalrts::alloc_name( context[3], Brackets_Set, "Brackets_Set" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[4] );
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

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Brackets_Set, "Brackets_Set" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: e.Unique#1/1
    //11: s.Repeated#1/1
    //12: s.Repeated#1/2
    //13: e.Middle#1/1
    //15: e.Rest#1/1
    // e.Unique#1 s.Repeated#1 e.Middle#1 s.Repeated#1 e.Rest#1
    {refalrts::icEPrepare, 0, 9, 0},
    {refalrts::icEStart, 0, 9, 0},
    {refalrts::icSave, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icEPrepare, 0, 13, 2},
    {refalrts::icEStart, 0, 13, 2},
    {refalrts::icSave, 0, 4, 2},
    {refalrts::icsRepeatLeft, 12, 11, 4},
    {refalrts::icContextSet, 0, 15, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: e.Unique#1/1
    // e.Unique#1
    {refalrts::icContextSet, 0, 2, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    //9: e.Unique#1/1
    //11: s.Repeated#1/1
    //12: s.Repeated#1/2
    //13: e.Middle#1/1
    //15: e.Rest#1/1
    // e.Unique#1 s.Repeated#1 e.Middle#1 s.Repeated#1 e.Rest#1
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[2] = context[0];
      context[3] = context[1];
      if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[4] = context[2];
        context[5] = context[3];
        if( ! refalrts::repeated_stvar_left( context[12], context[11], context[4], context[5] ) )
          continue;
        context[15] = context[4];
        context[16] = context[5];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[6] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[7], Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[8] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[8] );
        refalrts::push_stack( context[6] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_stvar( res, context[11] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
    } while ( refalrts::open_evar_advance( context[9], context[10], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: e.Unique#1/1
  // e.Unique#1
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

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" },
    { StrFromInt, "StrFromInt" },
    { TextFromPattern_Char, "TextFromPattern_Char" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkIdentifier<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkName<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" # ", 3},
    {" & ", 3},
    {" \'", 2},
    {" ]", 2},
    {" [", 2},
    {" )", 2},
    {" (", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Inner#1/1
    //16: e.Tail#1/1
    // ( # Brackets e.Inner#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icContextSet, 0, 16, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 6, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icString, 0, 5, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Name#1/1
    //19: e.Inner#1/1
    //21: e.Tail#1/1
    // ( # ADT_Brackets ( e.Name#1 ) e.Inner#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icContextSet, 0, 17, 4},
    {refalrts::icContextSet, 0, 19, 2},
    {refalrts::icContextSet, 0, 21, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 6},
    {refalrts::icChar, 0, ' ', 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Tail#1/1
    //14: s.Char#1/1
    // ( # TkChar s.Char#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icContextSet, 0, 12, 0},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 4, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Tail#1/1
    //13: s.Number#1/1
    // ( # TkNumber s.Number#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icContextSet, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ' ', 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: e.Name#1/1
    //11: e.Tail#1/1
    // ( # TkName e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icContextSet, 0, 11, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Tail#1/1
    //15: s.Mode#1/1
    //16: s.Depth#1/1
    //17: e.Index#1/1
    // ( # TkVariable s.Mode#1 e.Index#1 s.Depth#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icsVarRight, 0, 16, 2},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ' ', 4},
    {refalrts::icChar, 0, '.', 5},
    {refalrts::icChar, 0, '#', 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: e.Name#1/1
    //11: e.Tail#1/1
    // ( # TkIdentifier e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icContextSet, 0, 11, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
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
    //14: e.Inner#1/1
    //16: e.Tail#1/1
    // ( # Brackets e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[2], context[3] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[0];
    context[17] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " (", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], " )", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    //17: e.Name#1/1
    //19: e.Inner#1/1
    //21: e.Tail#1/1
    // ( # ADT_Brackets ( e.Name#1 ) e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[17] = context[4];
    context[18] = context[5];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[0];
    context[22] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[6], context[7], " [", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], " ]", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    //12: e.Tail#1/1
    //14: s.Char#1/1
    // ( # TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    context[12] = context[0];
    context[13] = context[1];
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " \'", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    //11: e.Tail#1/1
    //13: s.Number#1/1
    // ( # TkNumber s.Number#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[2], context[3] ) )
      continue;
    context[11] = context[0];
    context[12] = context[1];
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[4], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_stvar( res, context[13] );
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
    //9: e.Name#1/1
    //11: e.Tail#1/1
    // ( # TkName e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[0];
    context[12] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " & ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    //13: e.Tail#1/1
    //15: s.Mode#1/1
    //16: s.Depth#1/1
    //17: e.Index#1/1
    // ( # TkVariable s.Mode#1 e.Index#1 s.Depth#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[2], context[3] ) )
      continue;
    context[13] = context[0];
    context[14] = context[1];
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[2], context[3] ) )
      continue;
    context[17] = context[2];
    context[18] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[4], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[5], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[6], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_stvar( res, context[15] );
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
    //9: e.Name#1/1
    //11: e.Tail#1/1
    // ( # TkIdentifier e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[2], context[3] ) )
      continue;
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[0];
    context[12] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " # ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" },
    { TextFromPattern_Char, "TextFromPattern_Char" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Tail#1/1
    //12: s.Char#1/1
    // ( # TkChar s.Char#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 10, 0},
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '\'', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: e.Other#1/1
    // e.Other#1
    {refalrts::icContextSet, 0, 5, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    //10: e.Tail#1/1
    //12: s.Char#1/1
    // ( # TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    context[10] = context[0];
    context[11] = context[1];
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
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
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '\'' ) )
      return refalrts::cNoMemory;
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
  //5: e.Other#1/1
  // e.Other#1
  context[5] = context[0];
  context[6] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], TextFromPattern, "TextFromPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { DoGenResult, "DoGenResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.BaseContextSize#1/1
    //15: e.Result#1/1
    // s.BaseContextSize#1 e.Result#1
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
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
  //14: s.BaseContextSize#1/1
  //15: e.Result#1/1
  // s.BaseContextSize#1 e.Result#1
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[0];
  context[16] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoGenResult, "DoGenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[14] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CollectStrings_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Chars#2/1
    //12: e.Tail#2/1
    // ( e.Chars#2 ) e.Tail#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icContextSet, 0, 12, 0},
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
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 10},
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
  //10: e.Chars#2/1
  //12: e.Tail#2/1
  // ( e.Chars#2 ) e.Tail#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = context[2];
  context[11] = context[3];
  context[12] = context[0];
  context[13] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TkString<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], CollectStrings, "CollectStrings" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { lambda_CollectStrings_0, "lambda_CollectStrings_0" },
    { BuildString, "BuildString" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: e.Tail#1/1
    //17: s.Value1#1/1
    //18: s.Value2#1/1
    // ( # TkChar s.Value1#1 ) ( # TkChar s.Value2#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 18, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # Brackets e.InBrackets#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # CallBrackets e.InBrackets#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # ADT_Brackets e.InBrackets#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.OtherTerm#1/1
    //6: e.Tail#1/1
    // t.OtherTerm#1 e.Tail#1
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
    //15: e.Tail#1/1
    //17: s.Value1#1/1
    //18: s.Value2#1/1
    // ( # TkChar s.Value1#1 ) ( # TkChar s.Value2#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[4], context[5] ) )
      continue;
    context[15] = context[0];
    context[16] = context[1];
    if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], BuildString, "BuildString" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], lambda_CollectStrings_0, "lambda_CollectStrings_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
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
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # Brackets e.InBrackets#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[2], context[3] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[0];
    context[16] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
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
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # CallBrackets e.InBrackets#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[2], context[3] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[0];
    context[16] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
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
    //13: e.InBrackets#1/1
    //15: e.Tail#1/1
    // ( # ADT_Brackets e.InBrackets#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[2], context[3] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[0];
    context[16] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
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
    //5: t.OtherTerm#1/1
    //6: e.Tail#1/1
    // t.OtherTerm#1 e.Tail#1
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = context[0];
    context[7] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], CollectStrings, "CollectStrings" ) )
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

static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BuildString, "BuildString" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Chars#1/1
    //13: e.Tail#1/1
    //15: s.Value#1/1
    // ( e.Chars#1 ) ( # TkChar s.Value#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Chars#1/1
    //8: e.Tail#1/1
    // ( e.Chars#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 6, 2},
    {refalrts::icContextSet, 0, 8, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 6},
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
    //11: e.Chars#1/1
    //13: e.Tail#1/1
    //15: s.Value#1/1
    // ( e.Chars#1 ) ( # TkChar s.Value#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[4], context[5] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[0];
    context[14] = context[1];
    if( ! refalrts::svar_left( context[15], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], BuildString, "BuildString" ) )
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
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
  //6: e.Chars#1/1
  //8: e.Tail#1/1
  // ( e.Chars#1 ) e.Tail#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = context[2];
  context[7] = context[3];
  context[8] = context[0];
  context[9] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoGenResult, "DoGenResult" },
    { Inc, "Inc" },
    { Add, "Add" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInsertVar<int>::name,
    & ident_TkVariable<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_CloseCall<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkName<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_ElString<int>::name,
    & ident_TkString<int>::name,
    & ident_ElIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_ElNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +72, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Result#1/1
    //38: s.Value#1/1
    //39: s.Counter#1/2
    //40: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkChar s.Value#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icsVarLeft, 0, 35, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 28, 8},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 35, 0},
    {refalrts::icCopySTVar, 40, 39, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 27, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +71, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Name#1/1
    //38: e.Result#1/1
    //40: s.Counter#1/2
    //41: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkName e.Name#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icsVarLeft, 0, 35, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 12, 8},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 40, 35, 0},
    {refalrts::icCopySTVar, 41, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 26, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +72, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Result#1/1
    //38: s.Number#1/1
    //39: s.Counter#1/2
    //40: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkNumber s.Number#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icsVarLeft, 0, 35, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 25, 8},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 35, 0},
    {refalrts::icCopySTVar, 40, 39, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 24, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +71, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Name#1/1
    //38: e.Result#1/1
    //40: s.Counter#1/2
    //41: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkIdentifier e.Name#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icsVarLeft, 0, 35, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 23, 8},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 40, 35, 0},
    {refalrts::icCopySTVar, 41, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 22, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Vars#1/1
    //32: e.AllocCommands#1/1
    //34: e.Commands#1/1
    //36: s.Counter#1/1
    //37: e.Chars#1/1
    //39: e.Result#1/1
    //41: s.Counter#1/2
    //42: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkString e.Chars#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icsVarLeft, 0, 36, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 21, 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 41, 36, 0},
    {refalrts::icCopySTVar, 42, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 20, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 19, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 2, 26},
    {refalrts::icInt, 0, 2, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.InBrackets#1/1
    //41: e.Result#1/1
    //43: s.Counter#1/2
    //44: s.Counter#1/3
    //45: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # Brackets e.InBrackets#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 18, 8},
    {refalrts::icContextSet, 0, 39, 8},
    {refalrts::icContextSet, 0, 41, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 43, 38, 0},
    {refalrts::icCopySTVar, 44, 43, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 17, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 11, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.InBrackets#1/1
    //41: e.Result#1/1
    //43: s.Counter#1/2
    //44: s.Counter#1/3
    //45: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CallBrackets e.InBrackets#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 16, 8},
    {refalrts::icContextSet, 0, 39, 8},
    {refalrts::icContextSet, 0, 41, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 43, 38, 0},
    {refalrts::icCopySTVar, 44, 43, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 15, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 6, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +90, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //37: e.Vars#1/1
    //39: e.AllocCommands#1/1
    //41: e.Commands#1/1
    //43: s.Counter#1/1
    //44: e.Name#1/1
    //46: e.InBrackets#1/1
    //48: e.Result#1/1
    //50: s.Counter#1/2
    //51: s.Counter#1/3
    //52: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # ADT_Brackets ( e.Name#1 ) e.InBrackets#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 37, 2},
    {refalrts::icContextSet, 0, 39, 4},
    {refalrts::icContextSet, 0, 41, 6},
    {refalrts::icsVarLeft, 0, 43, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 14, 8},
    {refalrts::icBracketLeft, 0, 10, 8},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icContextSet, 0, 46, 8},
    {refalrts::icContextSet, 0, 48, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 50, 43, 0},
    {refalrts::icCopySTVar, 51, 50, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 5, 18},
    {refalrts::icIdent, 0, 13, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 2, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 1, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 12, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 9, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 48},
    {refalrts::icLinkBrackets, 33, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 22, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.OpenCounter#1/1
    //42: s.Counter#1/2
    //43: s.Counter#1/3
    //44: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseBracket s.OpenCounter#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 11, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 42, 38, 0},
    {refalrts::icCopySTVar, 43, 42, 0},
    {refalrts::icCopySTVar, 44, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 10, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 7, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 2, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 1, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 20, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.OpenCounter#1/1
    //42: s.Counter#1/2
    //43: s.Counter#1/3
    //44: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseADT s.OpenCounter#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 9, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 42, 38, 0},
    {refalrts::icCopySTVar, 43, 42, 0},
    {refalrts::icCopySTVar, 44, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 8, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 7, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 2, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 1, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 20, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +88, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //35: e.Vars#1/1
    //37: e.AllocCommands#1/1
    //39: e.Commands#1/1
    //41: s.Counter#1/1
    //42: e.Result#1/1
    //44: s.OpenCounter#1/1
    //45: s.Counter#1/2
    //46: s.Counter#1/3
    //47: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CloseCall s.OpenCounter#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 35, 2},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icContextSet, 0, 39, 6},
    {refalrts::icsVarLeft, 0, 41, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 6, 8},
    {refalrts::icContextSet, 0, 42, 0},
    {refalrts::icsVarLeft, 0, 44, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 45, 41, 0},
    {refalrts::icCopySTVar, 46, 45, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 5, 16},
    {refalrts::icIdent, 0, 4, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 2, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icFunc, 0, 1, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 14, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +87, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.Mode#1/1
    //42: s.Mode#1/2
    //43: e.Index#1/1
    //45: e.Index#1/2
    //47: e.Vars_B#1/1
    //49: e.Vars_E#1/1
    //51: s.Usings#1/1
    //52: s.Usings#1/2
    // ( e.Vars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icContextSet, 0, 43, 8},
    {refalrts::icEPrepare, 0, 47, 2},
    {refalrts::icEStart, 0, 47, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatRight, 45, 43, 10},
    {refalrts::icsRepeatRight, 42, 41, 10},
    {refalrts::icContextSet, 0, 49, 12},
    {refalrts::icsVarLeft, 0, 51, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 52, 51, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 1, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 25, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 26, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 16, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: e.Vars#1/1
    //28: e.AllocCommands#1/1
    //30: e.Commands#1/1
    //32: s.Counter#1/1
    //33: e.Result#1/1
    //35: s.Mode#1/1
    //36: e.Index#1/1
    //38: s.Mode#1/2
    //39: e.Index#1/2
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 6},
    {refalrts::icsVarLeft, 0, 32, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icContextSet, 0, 33, 0},
    {refalrts::icsVarLeft, 0, 35, 8},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 35, 0},
    {refalrts::icCopyEVar, 39, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icInt, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icInt, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 19, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Vars#1/1
    //14: e.AllocCommands#1/1
    //16: e.Commands#1/1
    //18: s.Counter#1/1
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icContextSet, 0, 14, 4},
    {refalrts::icContextSet, 0, 16, 6},
    {refalrts::icsVarLeft, 0, 18, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
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
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Result#1/1
    //38: s.Value#1/1
    //39: s.Counter#1/2
    //40: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkChar s.Value#1 ) e.Result#1
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
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    if( ! refalrts::svar_left( context[35], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
      continue;
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[39], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[39]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
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
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Name#1/1
    //38: e.Result#1/1
    //40: s.Counter#1/2
    //41: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkName e.Name#1 ) e.Result#1
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
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    if( ! refalrts::svar_left( context[35], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      continue;
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[40], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[41], context[40]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
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
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Result#1/1
    //38: s.Number#1/1
    //39: s.Counter#1/2
    //40: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkNumber s.Number#1 ) e.Result#1
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
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    if( ! refalrts::svar_left( context[35], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
      continue;
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[39], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[39]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
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
    //29: e.Vars#1/1
    //31: e.AllocCommands#1/1
    //33: e.Commands#1/1
    //35: s.Counter#1/1
    //36: e.Name#1/1
    //38: e.Result#1/1
    //40: s.Counter#1/2
    //41: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkIdentifier e.Name#1 ) e.Result#1
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
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    if( ! refalrts::svar_left( context[35], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[8], context[9] ) )
      continue;
    context[36] = context[8];
    context[37] = context[9];
    context[38] = context[0];
    context[39] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[40], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[41], context[40]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
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
    //30: e.Vars#1/1
    //32: e.AllocCommands#1/1
    //34: e.Commands#1/1
    //36: s.Counter#1/1
    //37: e.Chars#1/1
    //39: e.Result#1/1
    //41: s.Counter#1/2
    //42: s.Counter#1/3
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkString e.Chars#1 ) e.Result#1
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
    context[30] = context[2];
    context[31] = context[3];
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    if( ! refalrts::svar_left( context[36], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkString<int>::name, context[8], context[9] ) )
      continue;
    context[37] = context[8];
    context[38] = context[9];
    context[39] = context[0];
    context[40] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[41], context[36]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[42], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElString<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertRange<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Add, "Add" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[27], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[30], context[31] );
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
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.InBrackets#1/1
    //41: e.Result#1/1
    //43: s.Counter#1/2
    //44: s.Counter#1/3
    //45: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # Brackets e.InBrackets#1 ) e.Result#1
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
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[8], context[9] ) )
      continue;
    context[39] = context[8];
    context[40] = context[9];
    context[41] = context[0];
    context[42] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[43], context[38]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[43]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[45], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[32], context[33] );
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
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.InBrackets#1/1
    //41: e.Result#1/1
    //43: s.Counter#1/2
    //44: s.Counter#1/3
    //45: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CallBrackets e.InBrackets#1 ) e.Result#1
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
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[8], context[9] ) )
      continue;
    context[39] = context[8];
    context[40] = context[9];
    context[41] = context[0];
    context[42] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[43], context[38]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[43]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[45], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::link_brackets( context[28], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[32], context[33] );
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
    //37: e.Vars#1/1
    //39: e.AllocCommands#1/1
    //41: e.Commands#1/1
    //43: s.Counter#1/1
    //44: e.Name#1/1
    //46: e.InBrackets#1/1
    //48: e.Result#1/1
    //50: s.Counter#1/2
    //51: s.Counter#1/3
    //52: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # ADT_Brackets ( e.Name#1 ) e.InBrackets#1 ) e.Result#1
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
    context[37] = context[2];
    context[38] = context[3];
    context[39] = context[4];
    context[40] = context[5];
    context[41] = context[6];
    context[42] = context[7];
    if( ! refalrts::svar_left( context[43], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
      continue;
    context[44] = context[10];
    context[45] = context[11];
    context[46] = context[8];
    context[47] = context[9];
    context[48] = context[0];
    context[49] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[50], context[43]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[51], context[50]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[52], context[51]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    refalrts::link_brackets( context[33], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[52] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    refalrts::link_brackets( context[30], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[51] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[22], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::link_brackets( context[23], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[50] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[37], context[38] );
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
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.OpenCounter#1/1
    //42: s.Counter#1/2
    //43: s.Counter#1/3
    //44: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseBracket s.OpenCounter#1 ) e.Result#1
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
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[8], context[9] ) )
      continue;
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[42], context[38]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[43], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[43]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[20], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[24], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[32], context[33] );
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
    //32: e.Vars#1/1
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.OpenCounter#1/1
    //42: s.Counter#1/2
    //43: s.Counter#1/3
    //44: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseADT s.OpenCounter#1 ) e.Result#1
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
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[8], context[9] ) )
      continue;
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[42], context[38]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[43], context[42]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[44], context[43]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[20], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[24], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[43] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[32], context[33] );
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
    //35: e.Vars#1/1
    //37: e.AllocCommands#1/1
    //39: e.Commands#1/1
    //41: s.Counter#1/1
    //42: e.Result#1/1
    //44: s.OpenCounter#1/1
    //45: s.Counter#1/2
    //46: s.Counter#1/3
    //47: s.Counter#1/4
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CloseCall s.OpenCounter#1 ) e.Result#1
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
    context[35] = context[2];
    context[36] = context[3];
    context[37] = context[4];
    context[38] = context[5];
    context[39] = context[6];
    context[40] = context[7];
    if( ! refalrts::svar_left( context[41], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CloseCall<int>::name, context[8], context[9] ) )
      continue;
    context[42] = context[0];
    context[43] = context[1];
    if( ! refalrts::svar_left( context[44], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[45], context[41]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[46], context[45]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ElCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[31] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[20], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::link_brackets( context[27], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[24], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[14], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[15], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[35], context[36] );
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
    //34: e.AllocCommands#1/1
    //36: e.Commands#1/1
    //38: s.Counter#1/1
    //39: e.Result#1/1
    //41: s.Mode#1/1
    //42: s.Mode#1/2
    //43: e.Index#1/1
    //45: e.Index#1/2
    //47: e.Vars_B#1/1
    //49: e.Vars_E#1/1
    //51: s.Usings#1/1
    //52: s.Usings#1/2
    // ( e.Vars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      continue;
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    context[43] = context[8];
    context[44] = context[9];
    context[47] = 0;
    context[48] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[45], context[46], context[43], context[44], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[42], context[41], context[10], context[11] ) )
        continue;
      context[49] = context[12];
      context[50] = context[13];
      if( ! refalrts::svar_left( context[51], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[52], context[51]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], DoGenResult, "DoGenResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
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
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_CmdInsertVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[29], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[33] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[33] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_stvar( res, context[38] );
      refalrts::link_brackets( context[25], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::link_brackets( context[26], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_stvar( res, context[42] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[28] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[16], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::link_brackets( context[17], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_stvar( res, context[51] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
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
    //26: e.Vars#1/1
    //28: e.AllocCommands#1/1
    //30: e.Commands#1/1
    //32: s.Counter#1/1
    //33: e.Result#1/1
    //35: s.Mode#1/1
    //36: e.Index#1/1
    //38: s.Mode#1/2
    //39: e.Index#1/2
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    context[26] = context[2];
    context[27] = context[3];
    context[28] = context[4];
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[7];
    if( ! refalrts::svar_left( context[32], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      continue;
    context[33] = context[0];
    context[34] = context[1];
    if( ! refalrts::svar_left( context[35], context[8], context[9] ) )
      continue;
    context[36] = context[8];
    context[37] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[38], context[35]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[39], context[40], context[36], context[37]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[14], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_CmdInsertVar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[22], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_stvar( res, context[32] );
    refalrts::link_brackets( context[19], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::link_brackets( context[20], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //12: e.Vars#1/1
  //14: e.AllocCommands#1/1
  //16: e.Commands#1/1
  //18: s.Counter#1/1
  // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1
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
  context[12] = context[2];
  context[13] = context[3];
  context[14] = context[4];
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[7];
  if( ! refalrts::svar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
