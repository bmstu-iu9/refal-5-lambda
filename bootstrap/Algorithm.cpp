// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindAllocForCopiedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldAllocCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenInterpretPatternCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NumerateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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

// identifier #CmdArrCADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCADT {
  static const char *name() {
    return "CmdArrCADT";
  }
};

// identifier #CmdArrCB
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCB {
  static const char *name() {
    return "CmdArrCB";
  }
};

// identifier #CmdArrCC
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCC {
  static const char *name() {
    return "CmdArrCC";
  }
};

// identifier #CmdArrChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrChar {
  static const char *name() {
    return "CmdArrChar";
  }
};

// identifier #CmdArrCopy
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCopy {
  static const char *name() {
    return "CmdArrCopy";
  }
};

// identifier #CmdArrFunc
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrFunc {
  static const char *name() {
    return "CmdArrFunc";
  }
};

// identifier #CmdArrHugeInt
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrHugeInt {
  static const char *name() {
    return "CmdArrHugeInt";
  }
};

// identifier #CmdArrIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrIdent {
  static const char *name() {
    return "CmdArrIdent";
  }
};

// identifier #CmdArrInt
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrInt {
  static const char *name() {
    return "CmdArrInt";
  }
};

// identifier #CmdArrOADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrOADT {
  static const char *name() {
    return "CmdArrOADT";
  }
};

// identifier #CmdArrOB
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrOB {
  static const char *name() {
    return "CmdArrOB";
  }
};

// identifier #CmdArrOC
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrOC {
  static const char *name() {
    return "CmdArrOC";
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

// identifier #CmdCopyEVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyEVar {
  static const char *name() {
    return "CmdCopyEVar";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdDeclareEVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclareEVar {
  static const char *name() {
    return "CmdDeclareEVar";
  }
};

// identifier #CmdDeclareVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclareVar {
  static const char *name() {
    return "CmdDeclareVar";
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

// identifier #CmdFinRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdFinRAA {
  static const char *name() {
    return "CmdFinRAA";
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

// identifier #CmdOpenedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE {
  static const char *name() {
    return "CmdOpenedE";
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

// identifier #CmdiLabelArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLabelArray {
  static const char *name() {
    return "CmdiLabelArray";
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

// identifier #CmdiVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiVar {
  static const char *name() {
    return "CmdiVar";
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

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __ePattern_1_1 = 6 };
    enum { __eResult_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenResult, "GenResult" },
      { GenPattern, "GenPattern" },
      { GeneralizeResult, "GeneralizeResult" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __ePattern_1_1, 2},
      {refalrts::icContextSet, 0, __eResult_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Pattern#1 ) ( e.Result#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__ePattern_1_1] = context[2];
    context[__ePattern_1_1 + 1] = context[3];
    context[__eResult_1_1] = context[4];
    context[__eResult_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GeneralizeResult, "GeneralizeResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sNumRanges_2_1 = 4 };
    enum { __eVars_2_1 = 5 };
    enum { __eCommands_2_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SaveBrackets, "SaveBrackets" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumRanges_2_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eVars_2_1, 2},
      {refalrts::icContextSet, 0, __eCommands_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#2 ( e.Vars#2 ) e.Commands#2
    if( ! refalrts::svar_left( context[__sNumRanges_2_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eVars_2_1] = context[2];
    context[__eVars_2_1 + 1] = context[3];
    context[__eCommands_2_1] = context[0];
    context[__eCommands_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_2_1], context[__eCommands_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumRanges_2_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_2_1], context[__eVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __ePattern_1_1 = 6 };
    enum { __eVars_2_1 = 8 };
    enum { __sNumRanges_2_1 = 10 };
    enum { __eCommands_2_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdComment<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __ePattern_1_1, 2},
      {refalrts::icContextSet, 0, __eVars_2_1, 4},
      {refalrts::icsVarLeft, 0, __sNumRanges_2_1, 0},
      {refalrts::icContextSet, 0, __eCommands_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Pattern#1 ) ( e.Vars#2 ) s.NumRanges#2 e.Commands#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__ePattern_1_1] = context[2];
    context[__ePattern_1_1 + 1] = context[3];
    context[__eVars_2_1] = context[4];
    context[__eVars_2_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNumRanges_2_1], context[0], context[1] ) )
      break;
    context[__eCommands_2_1] = context[0];
    context[__eCommands_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_ident( n4, & ident_CmdComment<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eCommands_2_1], context[__eCommands_2_1 + 1] );
    refalrts::link_brackets( n3, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_2_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_2_1], context[__eVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __ePattern_1_1 = 2 };
    enum { __ePattern_1_2 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
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
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __ePattern_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icInt, 0, 2 , 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icSpliceEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Pattern#1
    context[__ePattern_1_1] = context[0];
    context[__ePattern_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePattern_1_2], context[__ePattern_1_2 + 1], context[__ePattern_1_1], context[__ePattern_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, DoGenPattern, "DoGenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_number( n6, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, lambda_GenPattern_0, "lambda_GenPattern_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, lambda_GenPattern_1, "lambda_GenPattern_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__ePattern_1_2], context[__ePattern_1_2 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNum_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Add, "Add" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icInt, 0, 2 , 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sChar_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdChar<int>::name,
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkChar s.Char#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sChar_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sChar_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sNumber_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdNumber<int>::name,
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkNumber s.Number#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eName_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdName<int>::name,
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkName e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eName_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdIdent<int>::name,
      & idents_TkIdentifier<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkIdentifier e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sChar_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdChar<int>::name,
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkChar s.Char#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sChar_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sChar_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sNumber_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdNumber<int>::name,
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkNumber s.Number#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eName_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdName<int>::name,
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkName e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eName_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdIdent<int>::name,
      & idents_TkIdentifier<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkIdentifier e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_ident( n8, & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eSubRange_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNumRanges_1_2 = 26 };
    enum { __sNumRanges_1_3 = 27 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc2, "Inc2" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdBrackets<int>::name,
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # Brackets e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_ident( n14, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eSubRange_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNumRanges_1_2 = 26 };
    enum { __sNumRanges_1_3 = 27 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc2, "Inc2" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdBrackets<int>::name,
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # Brackets e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_ident( n14, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eVars_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sNumRanges_1_1 = 18 };
    enum { __eRanges_B_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eName_1_1 = 24 };
    enum { __eSubRange_1_1 = 26 };
    enum { __eRange_1_1 = 28 };
    enum { __sNumRanges_1_2 = 30 };
    enum { __sNumRanges_1_3 = 31 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc2, "Inc2" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdADT<int>::name,
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 6, 12},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icBracketLeft, 0, 10, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
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
      context[__eName_1_1] = context[10];
      context[__eName_1_1 + 1] = context[11];
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_ident( n14, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eVars_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sNumRanges_1_1 = 18 };
    enum { __eRanges_B_1_1 = 19 };
    enum { __eName_1_1 = 21 };
    enum { __eSubRange_1_1 = 23 };
    enum { __eRanges_E_1_1 = 25 };
    enum { __sNum_1_1 = 27 };
    enum { __eRange_1_1 = 28 };
    enum { __sNumRanges_1_2 = 30 };
    enum { __sNumRanges_1_3 = 31 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc2, "Inc2" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdADT<int>::name,
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 6, 12},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icBracketLeft, 0, 10, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eName_1_1] = context[10];
      context[__eName_1_1 + 1] = context[11];
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_ident( n14, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eVars_1_1 = 10 };
    enum { __eCommands_1_1 = 12 };
    enum { __sNumRanges_1_1 = 14 };
    enum { __eRanges_B_1_1 = 15 };
    enum { __eRanges_E_1_1 = 17 };
    enum { __sNum_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & idents_CmdEmpty<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 6, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      context[__eRanges_E_1_1] = context[8];
      context[__eRanges_E_1_1 + 1] = context[9];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_ident( n6, & ident_CmdEmpty<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_ident( n7, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 41 elems
    refalrts::Iter context[41];
    refalrts::zeros( context, 41 );
    enum { __eCommands_1_1 = 18 };
    enum { __sNumRanges_1_1 = 20 };
    enum { __eRanges_B_1_1 = 21 };
    enum { __eRanges_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eRange_1_1 = 26 };
    enum { __sMode_1_1 = 28 };
    enum { __sMode_1_2 = 29 };
    enum { __eIndex_1_1 = 30 };
    enum { __eIndex_1_2 = 32 };
    enum { __eVars_B_1_1 = 34 };
    enum { __eVars_E_1_1 = 36 };
    enum { __sCount_1_1 = 38 };
    enum { __sNum_1_2 = 39 };
    enum { __sCount_1_2 = 40 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdRepeated<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icSave, 0, 14, 4},
      {refalrts::icBracketLeft, 0, 6, 12},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, __eVars_B_1_1, 14},
      {refalrts::icEStart, 0, __eVars_B_1_1, 14},
      {refalrts::icSave, 0, 16, 14},
      {refalrts::icBracketLeft, 0, 10, 16},
      {refalrts::iceRepeatRight, __eIndex_1_2, __eIndex_1_1, 10},
      {refalrts::icsRepeatRight, __sMode_1_2, __sMode_1_1, 10},
      {refalrts::icContextSet, 0, __eVars_E_1_1, 16},
      {refalrts::icsVarLeft, 0, __sCount_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eVars_B_1_1] = 0;
      context[__eVars_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
          continue;
        context[__eVars_E_1_1] = context[16];
        context[__eVars_E_1_1 + 1] = context[17];
        if( ! refalrts::svar_left( context[__sCount_1_1], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sCount_1_2], context[__sCount_1_1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_close_bracket( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_open_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_name( n7, Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_ident( n13, & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_ident( n14, & ident_AlgLeft<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_2] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sCount_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_1] );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, context[__sCount_1_1] );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 41 elems
    refalrts::Iter context[41];
    refalrts::zeros( context, 41 );
    enum { __eCommands_1_1 = 18 };
    enum { __sNumRanges_1_1 = 20 };
    enum { __eRanges_B_1_1 = 21 };
    enum { __eRanges_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eRange_1_1 = 26 };
    enum { __sMode_1_1 = 28 };
    enum { __sMode_1_2 = 29 };
    enum { __eIndex_1_1 = 30 };
    enum { __eIndex_1_2 = 32 };
    enum { __eVars_B_1_1 = 34 };
    enum { __eVars_E_1_1 = 36 };
    enum { __sCount_1_1 = 38 };
    enum { __sNum_1_2 = 39 };
    enum { __sCount_1_2 = 40 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdRepeated<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icSave, 0, 14, 4},
      {refalrts::icBracketLeft, 0, 6, 12},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, __eVars_B_1_1, 14},
      {refalrts::icEStart, 0, __eVars_B_1_1, 14},
      {refalrts::icSave, 0, 16, 14},
      {refalrts::icBracketLeft, 0, 10, 16},
      {refalrts::iceRepeatRight, __eIndex_1_2, __eIndex_1_1, 10},
      {refalrts::icsRepeatRight, __sMode_1_2, __sMode_1_1, 10},
      {refalrts::icContextSet, 0, __eVars_E_1_1, 16},
      {refalrts::icsVarLeft, 0, __sCount_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable s.Mode#1 e.Index#1 ) ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eVars_B_1_1] = 0;
      context[__eVars_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
          continue;
        context[__eVars_E_1_1] = context[16];
        context[__eVars_E_1_1 + 1] = context[17];
        if( ! refalrts::svar_left( context[__sCount_1_1], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sCount_1_2], context[__sCount_1_1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_close_bracket( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_open_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_name( n7, Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_ident( n13, & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_ident( n14, & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_2] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sCount_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_1] );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, context[__sCount_1_1] );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eIndex_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdClosedE<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'e', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_number( n4, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_ident( n10, & ident_CmdClosedE<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n15 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n8, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n9, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n2, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n3, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'s', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 's e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 's', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'t', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 't e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 't', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'s', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 's e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgRight<int>::name,
      & ident_CmdVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icBracketRight, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'t', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # TkVariable 't e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
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
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenPattern, "DoGenPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdOpenedE<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, __eRanges_B_1_1, 0},
      {refalrts::icSave, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 6},
      {refalrts::icBracketLeft, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icCharLeft, 0, (int)'e', 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, __eRange_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # TkVariable 'e e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eVars_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sNumRanges_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLastBracket_1_1 = 2 };
    enum { __eCommands_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoSaveBrackets, "DoSaveBrackets" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_DoSaveBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __eCommands_E_1_1 = 5 };
    enum { __eCommandsBeforeEMatch_2_1 = 7 };
    enum { __eCommandsBeforeEMatch_2_2 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ExtractBrackets, "ExtractBrackets" },
      { DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eCommands_E_1_1, 2},
      {refalrts::icContextSet, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Commands_E#1 ) e.CommandsBeforeEMatch#2
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eCommands_E_1_1] = context[2];
    context[__eCommands_E_1_1 + 1] = context[3];
    context[__eCommandsBeforeEMatch_2_1] = context[0];
    context[__eCommandsBeforeEMatch_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eCommandsBeforeEMatch_2_2], context[__eCommandsBeforeEMatch_2_2 + 1], context[__eCommandsBeforeEMatch_2_1], context[__eCommandsBeforeEMatch_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eCommandsBeforeEMatch_2_2], context[__eCommandsBeforeEMatch_2_2 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommandsBeforeEMatch_2_1], context[__eCommandsBeforeEMatch_2_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __sLastBracket_1_1 = 8 };
    enum { __eScanned_1_1 = 9 };
    enum { __eCommands_B_1_1 = 11 };
    enum { __eCommands_E_1_1 = 13 };
    enum { __sNum_1_1 = 15 };
    enum { __eIndex_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & idents_CmdOpenedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eScanned_1_1, 2},
      {refalrts::icEPrepare, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, __eCommands_B_1_1, 0},
      {refalrts::icSave, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icIdentLeft, 0, 1, 4},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eCommands_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 4},
      {refalrts::icCharLeft, 0, (int)'e', 4},
      {refalrts::icContextSet, 0, __eIndex_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.Num#1 'e e.Index#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
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
      context[__eCommands_E_1_1] = context[6];
      context[__eCommands_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[4], context[5] ) )
        continue;
      context[__eIndex_1_1] = context[4];
      context[__eIndex_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_ident( n3, & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_ident( n4, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n13 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::push_stack( n12 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n2, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __eScanned_1_1 = 5 };
    enum { __eCommands_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eScanned_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_DoSaveBrackets_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __sCommand_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    enum { __eInfo_2_1 = 7 };
    enum { __sNum_1_1 = 9 };
    enum { __sNum_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sCommand_2_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_2_1, 2},
      {refalrts::icsRepeatLeft, __sNum_1_2, __sNum_1_1, 2},
      {refalrts::icContextSet, 0, __eInfo_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sCommand_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInfo_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.Num#1 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::repeated_stvar_left( context[__sNum_1_2], context[__sNum_1_1], context[2], context[3] ) )
      break;
    context[__eInfo_2_1] = context[2];
    context[__eInfo_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eInfo_2_1], context[__eInfo_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_2_1] );
    res = refalrts::splice_stvar( res, context[__sCommand_2_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sCommand_2_1 = 4 };
    enum { __sDirection_2_1 = 5 };
    enum { __sOtherNum_2_1 = 6 };
    enum { __eInfo_2_1 = 7 };
    enum { __sNum_1_1 = 9 };
    enum { __sLastBracket_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sCommand_2_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_2_1, 2},
      {refalrts::icsVarLeft, 0, __sOtherNum_2_1, 2},
      {refalrts::icContextSet, 0, __eInfo_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sCommand_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sOtherNum_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eInfo_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.OtherNum#2 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sOtherNum_2_1], context[2], context[3] ) )
      break;
    context[__eInfo_2_1] = context[2];
    context[__eInfo_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eInfo_2_1], context[__eInfo_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sOtherNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_2_1] );
    res = refalrts::splice_stvar( res, context[__sCommand_2_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __sLastBracket_1_1 = 14 };
    enum { __eScanned_1_1 = 15 };
    enum { __eBoundedBrackets_B_1_1 = 17 };
    enum { __sNum_1_1 = 19 };
    enum { __sNum_1_2 = 20 };
    enum { __eBoundedBrackets_E_1_1 = 21 };
    enum { __eCommands_B_1_1 = 23 };
    enum { __eCommands_E_1_1 = 25 };
    enum { __sCommand_1_1 = 27 };
    enum { __sDirection_1_1 = 28 };
    enum { __eArgs_1_1 = 29 };
    enum { __sLastBracket_1_2 = 31 };
    enum { __sLastBracket_1_3 = 32 };
    enum { __sNum_1_3 = 33 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Map, "Map" },
      { Inc2, "Inc2" },
      { DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdSave<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icEPrepare, 0, __eBoundedBrackets_B_1_1, 2},
      {refalrts::icEStart, 0, __eBoundedBrackets_B_1_1, 2},
      {refalrts::icSave, 0, 8, 0},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icContextSet, 0, __eBoundedBrackets_E_1_1, 10},
      {refalrts::icEPrepare, 0, __eCommands_B_1_1, 8},
      {refalrts::icEStart, 0, __eCommands_B_1_1, 8},
      {refalrts::icSave, 0, 12, 8},
      {refalrts::icBracketLeft, 0, 6, 12},
      {refalrts::icContextSet, 0, __eCommands_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sCommand_1_1, 6},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 6},
      {refalrts::icsRepeatLeft, __sNum_1_2, __sNum_1_1, 6},
      {refalrts::icContextSet, 0, __eArgs_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eBoundedBrackets_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eBoundedBrackets_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_2, 0},
      {refalrts::icCopySTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sCommand_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eArgs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.BoundedBrackets_B#1 s.Num#1 e.BoundedBrackets_E#1 ) ( e.Scanned#1 ) e.Commands_B#1 ( s.Command#1 s.Direction#1 s.Num#1 e.Args#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eBoundedBrackets_B_1_1] = 0;
    context[__eBoundedBrackets_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[10] = context[2];
      context[11] = context[3];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      context[__eBoundedBrackets_E_1_1] = context[10];
      context[__eBoundedBrackets_E_1_1 + 1] = context[11];
      context[__eCommands_B_1_1] = 0;
      context[__eCommands_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[12] = context[8];
        context[13] = context[9];
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
          continue;
        context[__eCommands_E_1_1] = context[12];
        context[__eCommands_E_1_1 + 1] = context[13];
        if( ! refalrts::svar_left( context[__sCommand_1_1], context[6], context[7] ) )
          continue;
        if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[__sNum_1_2], context[__sNum_1_1], context[6], context[7] ) )
          continue;
        context[__eArgs_1_1] = context[6];
        context[__eArgs_1_1 + 1] = context[7];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sLastBracket_1_2], context[__sLastBracket_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sLastBracket_1_3], context[__sLastBracket_1_2] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sNum_1_3], context[__sNum_1_2] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, Inc2, "Inc2" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_call( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_bracket( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_open_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_ident( n9, & ident_CmdSave<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_close_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_call( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, Map, "Map" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, refalrts::create_closure, "refalrts::create_closure" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_open_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n21 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n21 );
        refalrts::push_stack( n20 );
        refalrts::push_stack( n12 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
        refalrts::link_brackets( n18, n19 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, context[__eArgs_1_1], context[__eArgs_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_3] );
        res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
        res = refalrts::splice_stvar( res, context[__sCommand_1_1] );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n14 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_3] );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        refalrts::link_brackets( n7, n11 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_2] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n5, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, context[__eBoundedBrackets_E_1_1], context[__eBoundedBrackets_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eBoundedBrackets_B_1_1], context[__eBoundedBrackets_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n5 );
        refalrts::push_stack( n4 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eBoundedBrackets_B_1_1], context[__eBoundedBrackets_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 6 };
    enum { __eScanned_1_1 = 7 };
    enum { __eCommands_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoSaveBrackets, "DoSaveBrackets" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.UnusedBoundedBrackets#1 ) ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    // Unused closed variable e.UnusedBoundedBrackets#1
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_ExtractBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sInnerNum_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDirection_2_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNum_2_1, 2},
      {refalrts::icsVarLeft, 0, __sInnerNum_2_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdBrackets s.Direction#2 s.BracketNum#2 s.InnerNum#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sInnerNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sInnerNum_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDirection_2_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNum_2_1, 2},
      {refalrts::icsVarLeft, 0, __sInnerNum_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdADT s.Direction#2 s.BracketNum#2 s.InnerNum#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerNum_2_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sInnerNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sCommand_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sCommand_2_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_2_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNum_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Command#2 s.Direction#2 s.BracketNum#2 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.Info#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eCommands_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" },
      { Map, "Map" },
      { Brackets_Set, "Brackets_Set" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eUnique_1_1 = 6 };
    enum { __sRepeated_1_1 = 8 };
    enum { __eMiddle_1_1 = 9 };
    enum { __eRest_1_1 = 11 };
    enum { __sRepeated_1_2 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Brackets_Set, "Brackets_Set" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEPrepare, 0, __eUnique_1_1, 0},
      {refalrts::icEStart, 0, __eUnique_1_1, 0},
      {refalrts::icSave, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sRepeated_1_1, 2},
      {refalrts::icEPrepare, 0, __eMiddle_1_1, 2},
      {refalrts::icEStart, 0, __eMiddle_1_1, 2},
      {refalrts::icSave, 0, 4, 2},
      {refalrts::icsRepeatLeft, __sRepeated_1_2, __sRepeated_1_1, 4},
      {refalrts::icContextSet, 0, __eRest_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eUnique_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sRepeated_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eMiddle_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eRest_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unique#1 s.Repeated#1 e.Middle#1 s.Repeated#1 e.Rest#1
    context[__eUnique_1_1] = 0;
    context[__eUnique_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[2] = context[0];
      context[3] = context[1];
      if( ! refalrts::svar_left( context[__sRepeated_1_1], context[2], context[3] ) )
        continue;
      context[__eMiddle_1_1] = 0;
      context[__eMiddle_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[4] = context[2];
        context[5] = context[3];
        if( ! refalrts::repeated_stvar_left( context[__sRepeated_1_2], context[__sRepeated_1_1], context[4], context[5] ) )
          continue;
        context[__eRest_1_1] = context[4];
        context[__eRest_1_1 + 1] = context[5];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRest_1_1], context[__eRest_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eMiddle_1_1], context[__eMiddle_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sRepeated_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, context[__eUnique_1_1], context[__eUnique_1_1 + 1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eMiddle_1_1], context[__eMiddle_1_1 + 1], context[2], context[3] ) );
    } while ( refalrts::open_evar_advance( context[__eUnique_1_1], context[__eUnique_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eUnique_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eUnique_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eUnique_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unique#1
    context[__eUnique_1_1] = context[0];
    context[__eUnique_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eUnique_1_1], context[__eUnique_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eInner_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eInner_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '(', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eInner_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, ')', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # Brackets e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[2], context[3] ) )
      break;
    context[__eInner_1_1] = context[2];
    context[__eInner_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eInner_1_1], context[__eInner_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eName_1_1 = 6 };
    enum { __eInner_1_1 = 8 };
    enum { __eTail_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icBracketLeft, 0, 4, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eInner_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '[', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eInner_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, ']', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # ADT_Brackets ( e.Name#1 ) e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];
    context[__eInner_1_1] = context[2];
    context[__eInner_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ']' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eInner_1_1], context[__eInner_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sChar_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern_Char, "TextFromPattern_Char" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\'', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_ident( n5, & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" },
      { StrFromInt, "StrFromInt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkNumber s.Number#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eName_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '&', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkName e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eTail_1_1 = 4 };
    enum { __sMode_1_1 = 6 };
    enum { __sDepth_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" },
      { StrFromInt, "StrFromInt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icsVarRight, 0, __sDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkVariable s.Mode#1 e.Index#1 s.Depth#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eName_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkIdentifier<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkIdentifier e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 2 elems
    refalrts::Iter context[2];
    refalrts::zeros( context, 2 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sChar_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EscapeChar, "EscapeChar" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Char#1
    if( ! refalrts::svar_left( context[__sChar_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EscapeChar, "EscapeChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sChar_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern_Char, "TextFromPattern_Char" },
      { Escape, "Escape" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 2 elems
    refalrts::Iter context[2];
    refalrts::zeros( context, 2 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '\'', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { TextFromPattern, "TextFromPattern" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eOther_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eOther_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Other#1
    context[__eOther_1_1] = context[0];
    context[__eOther_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eOther_1_1], context[__eOther_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eResult_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenResult, "DoGenResult" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Result#1
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_number( n8, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sValue_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_ElChar<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 3, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sValue_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sValue_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkChar s.Value#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sValue_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sValue_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eName_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_ElName<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 3, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkName e.Name#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sNumber_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_ElNumber<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 3, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkNumber s.Number#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eName_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_ElIdent<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkIdentifier<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 3, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkIdentifier e.Name#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eInBrackets_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    enum { __sCounter_1_4 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseBracket<int>::name,
      & ident_CmdInsertElem<int>::name,
      & ident_ElOpenBracket<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icContextSet, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # Brackets e.InBrackets#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[8], context[9] ) )
      break;
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_ident( n19, & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eInBrackets_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    enum { __sCounter_1_4 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CloseCall<int>::name,
      & ident_CmdInsertElem<int>::name,
      & ident_ElOpenCall<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_CallBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icContextSet, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CallBrackets e.InBrackets#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[8], context[9] ) )
      break;
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_ident( n19, & ident_CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __eVars_1_1 = 12 };
    enum { __eAllocCommands_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sCounter_1_1 = 18 };
    enum { __eName_1_1 = 19 };
    enum { __eInBrackets_1_1 = 21 };
    enum { __eResult_1_1 = 23 };
    enum { __sCounter_1_2 = 25 };
    enum { __sCounter_1_3 = 26 };
    enum { __sCounter_1_4 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & ident_TkName<int>::name,
      & ident_CmdInsertElem<int>::name,
      & ident_ElOpenADT<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 5, 8},
      {refalrts::icBracketLeft, 0, 10, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # ADT_Brackets ( e.Name#1 ) e.InBrackets#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[8], context[9] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[10];
    context[__eName_1_1 + 1] = context[11];
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_ident( n19, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_ident( n22, & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_CmdLinkBrackets<int>::name,
      & ident_ElCloseBracket<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkCloseBracket<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOpenCounter_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sOpenCounter_1_1, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseBracket s.OpenCounter#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_CmdLinkBrackets<int>::name,
      & ident_ElCloseADT<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_TkCloseADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOpenCounter_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sOpenCounter_1_1, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkCloseADT s.OpenCounter#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & ident_CmdPushStack<int>::name,
      & ident_ElCloseCall<int>::name,
      & ident_CmdAllocateElem<int>::name,
      & idents_CloseCall<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOpenCounter_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sOpenCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CloseCall s.OpenCounter#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CloseCall<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ElCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_ident( n12, & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_ident( n18, & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n10, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eAllocCommands_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sCounter_1_1 = 18 };
    enum { __eResult_1_1 = 19 };
    enum { __sMode_1_1 = 21 };
    enum { __sMode_1_2 = 22 };
    enum { __eIndex_1_1 = 23 };
    enum { __eIndex_1_2 = 25 };
    enum { __eVars_B_1_1 = 27 };
    enum { __eVars_E_1_1 = 29 };
    enum { __sUsings_1_1 = 31 };
    enum { __sUsings_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, __eVars_B_1_1, 2},
      {refalrts::icEStart, 0, __eVars_B_1_1, 2},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eIndex_1_2, __eIndex_1_1, 10},
      {refalrts::icsRepeatRight, __sMode_1_2, __sMode_1_1, 10},
      {refalrts::icContextSet, 0, __eVars_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sUsings_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
      break;
    context[__eIndex_1_1] = context[8];
    context[__eIndex_1_1 + 1] = context[9];
    context[__eVars_B_1_1] = 0;
    context[__eVars_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
        continue;
      context[__eVars_E_1_1] = context[12];
      context[__eVars_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sUsings_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sUsings_1_2], context[__sUsings_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_ident( n13, & ident_CmdInsertVar<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n19 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
      refalrts::link_brackets( n11, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n12, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_2] );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, context[__sUsings_1_2] );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sMode_1_1 = 19 };
    enum { __eIndex_1_1 = 20 };
    enum { __sMode_1_2 = 22 };
    enum { __eIndex_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { DoGenResult, "DoGenResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertVar<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 1, 8},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sCounter_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # TkVariable s.Mode#1 e.Index#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
      break;
    context[__eIndex_1_1] = context[8];
    context[__eIndex_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & ident_CmdInsertVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_number( n12, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eVars_1_1 = 8 };
    enum { __eAllocCommands_1_1 = 10 };
    enum { __eCommands_1_1 = 12 };
    enum { __sCounter_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult NumerateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sNumber_1_1 = 4 };
    enum { __eEtc_1_1 = 5 };
    enum { __sUsings_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
    enum { __sNumber_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Add, "Add" },
      { NumerateVars, "NumerateVars" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icInt, 0, 2 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 ( s.Usings#1 'e e.Index#1 ) e.Etc#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_number( n7, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __sNumber_1_1 = 4 };
    enum { __eEtc_1_1 = 5 };
    enum { __sUsings_1_1 = 7 };
    enum { __sMode_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sNumber_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { NumerateVars, "NumerateVars" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Etc#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNumber_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FindAllocForCopiedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eSet1_B_1_1 = 16 };
    enum { __eSet1_E_1_1 = 18 };
    enum { __sNumber_1_1 = 20 };
    enum { __eCommon_1_1 = 21 };
    enum { __eSet2_B_1_1 = 23 };
    enum { __eSet2_E_1_1 = 25 };
    enum { __eCommon_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FindAllocForCopiedVars, "FindAllocForCopiedVars" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEPrepare, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, __eSet1_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icSave, 0, 12, 4},
      {refalrts::icBracketLeft, 0, 6, 10},
      {refalrts::icContextSet, 0, __eSet1_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 6},
      {refalrts::icContextSet, 0, __eCommon_1_1, 6},
      {refalrts::icEPrepare, 0, __eSet2_B_1_1, 12},
      {refalrts::icEStart, 0, __eSet2_B_1_1, 12},
      {refalrts::icSave, 0, 14, 12},
      {refalrts::icBracketLeft, 0, 8, 14},
      {refalrts::iceRepeatLeft, __eCommon_1_2, __eCommon_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icContextSet, 0, __eSet2_E_1_1, 14},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eCommon_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 ( s.Number#1 e.Common#1 ) e.Set1_E#1 ) ( e.Set2_B#1 ( e.Common#1 ) e.Set2_E#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[12] = context[4];
      context[13] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eSet1_E_1_1] = context[10];
      context[__eSet1_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[6], context[7] ) )
        continue;
      context[__eCommon_1_1] = context[6];
      context[__eCommon_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[14] = context[12];
        context[15] = context[13];
        context[8] = 0;
        context[9] = 0;
        if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eCommon_1_2], context[__eCommon_1_2 + 1], context[__eCommon_1_1], context[__eCommon_1_1 + 1], context[8], context[9] ) )
          continue;
        if( ! refalrts::empty_seq( context[8], context[9] ) )
          continue;
        context[__eSet2_E_1_1] = context[14];
        context[__eSet2_E_1_1 + 1] = context[15];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_bracket( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_close_bracket( n1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, FindAllocForCopiedVars, "FindAllocForCopiedVars" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_open_bracket( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n8 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n6, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        refalrts::link_brackets( n0, n1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, context[__eCommon_1_1], context[__eCommon_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[12], context[13] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Set1#1
    // Unused closed variable e.Set2#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GenInterpretPatternCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sDirection_1_1 = 2 };
    enum { __sBracketNumber_1_1 = 3 };
    enum { __sNumber_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiNum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, (int)'<', 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Direction#1 s.BracketNumber#1 s.Number#1 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiNum<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sDirection_1_1 = 2 };
    enum { __sBracketNumber_1_1 = 3 };
    enum { __sNumber_1_1 = 4 };
    enum { __sOther_2_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiHugeNum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOther_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Direction#1 s.BracketNumber#1 s.Number#1 s.Other#2
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOther_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiHugeNum<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenInterpretPatternCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sNum_1_1 = 7 };
    enum { __sNumRanges_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiBracket<int>::name,
      & idents_CmdBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumRanges_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdBrackets s.Direction#1 s.Num#1 s.NumRanges#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiContextSet<int>::name,
      & ident_AlgLeft<int>::name,
      & idents_CmdClosedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdClosedE # AlgLeft s.BracketNumber#1 'e e.Index#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiContextSet<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sNumber_1_1 = 8 };
    enum { __sNumber_1_2 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { lambda_GenInterpretPatternCommand_0, "lambda_GenInterpretPatternCommand_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Compare, "Compare" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdNumber<int>::name
    };
    static const refalrts::RefalNumber numbers[] = {
      256UL
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icHugeInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdNumber<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Compare, "Compare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 256UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, lambda_GenInterpretPatternCommand_0, "lambda_GenInterpretPatternCommand_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiIdent<int>::name,
      & idents_CmdIdent<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdIdent<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eEtc_1_1 = 4 };
    enum { __sOldBracketNumber_1_1 = 6 };
    enum { __sNewBracketNumber_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiSave<int>::name,
      & idents_CmdSave<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOldBracketNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNewBracketNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sOldBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNewBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOldBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNewBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiSave<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNewBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sOldBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNum_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __sBracketNum_1_2 = 9 };
    enum { __eIndex_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiEStart<int>::name,
      & ident_CmdiEPrepare<int>::name,
      & ident_AlgLeft<int>::name,
      & idents_CmdOpenedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 3, 2},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdOpenedE # AlgLeft s.BracketNum#1 'e e.Index#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketNum_1_2], context[__sBracketNum_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiEPrepare<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_ident( n5, & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_2] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sChar_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiChar<int>::name,
      & idents_CmdChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdChar<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiName<int>::name,
      & idents_CmdName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdName<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sInnerBrackets_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiADT<int>::name,
      & idents_CmdADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sInnerBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eVarInfo_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiRepeat<int>::name,
      & idents_CmdRepeated<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eVarInfo_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eVarInfo_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdRepeated s.Direction#1 s.BracketNumber#1 e.VarInfo#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eVarInfo_1_1] = context[2];
    context[__eVarInfo_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiRepeat<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eVarInfo_1_1], context[__eVarInfo_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiEmpty<int>::name,
      & ident_AlgLeft<int>::name,
      & idents_CmdEmpty<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdEmpty # AlgLeft s.BracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiEmpty<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sMode_1_1 = 8 };
    enum { __eInfo_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiVar<int>::name,
      & idents_CmdVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eInfo_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInfo_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 e.Info#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdVar<int>::name, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eInfo_1_1] = context[2];
    context[__eInfo_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eInfo_1_1], context[__eInfo_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sDirection_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { WriteLine, "WriteLine" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdEmpty<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sBracketNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icChar, 0, 'C', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ':', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, ':', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdEmpty s.Direction#1 s.BracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.Etc#1
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __ePatternCommands_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __ePatternCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Command#1 ) e.PatternCommands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Command#1
    context[__ePatternCommands_1_1] = context[0];
    context[__ePatternCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 2 elems
    refalrts::Iter context[2];
    refalrts::zeros( context, 2 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GeneralizeResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __ePatternVars_2_1 = 8 };
    enum { __eResultVars_2_1 = 10 };
    enum { __eRepeatedEs_2_1 = 12 };
    enum { __eClosedEs_2_1 = 14 };
    enum { __ePatternVars_2_2 = 16 };
    enum { __eResultVars_2_2 = 18 };
    enum { __eResultVars_2_3 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { VarSetDifference, "VarSetDifference" },
      { VarSetUnion, "VarSetUnion" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __ePatternVars_2_1, 2},
      {refalrts::icContextSet, 0, __eResultVars_2_1, 4},
      {refalrts::icContextSet, 0, __eRepeatedEs_2_1, 6},
      {refalrts::icContextSet, 0, __eClosedEs_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePatternVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __ePatternVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eClosedEs_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRepeatedEs_2_1, 0},
      {refalrts::icCopyEVar, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternVars#2 ) ( e.ResultVars#2 ) ( e.RepeatedEs#2 ) e.ClosedEs#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__ePatternVars_2_1] = context[2];
    context[__ePatternVars_2_1 + 1] = context[3];
    context[__eResultVars_2_1] = context[4];
    context[__eResultVars_2_1 + 1] = context[5];
    context[__eRepeatedEs_2_1] = context[6];
    context[__eRepeatedEs_2_1 + 1] = context[7];
    context[__eClosedEs_2_1] = context[0];
    context[__eClosedEs_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternVars_2_2], context[__ePatternVars_2_2 + 1], context[__ePatternVars_2_1], context[__ePatternVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultVars_2_2], context[__eResultVars_2_2 + 1], context[__eResultVars_2_1], context[__eResultVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultVars_2_3], context[__eResultVars_2_3 + 1], context[__eResultVars_2_2], context[__eResultVars_2_2 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, VarSetUnion, "VarSetUnion" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_3], context[__eResultVars_2_3 + 1] );
    res = refalrts::splice_evar( res, context[__eRepeatedEs_2_1], context[__eRepeatedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eClosedEs_2_1], context[__eClosedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n9, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__ePatternVars_2_2], context[__ePatternVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_2], context[__eResultVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_1], context[__eResultVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__ePatternVars_2_1], context[__ePatternVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GeneralizeResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __ePatternCommands_1_1 = 8 };
    enum { __eCommonVars_2_1 = 10 };
    enum { __eCopiedVars_2_1 = 12 };
    enum { __eUnusedClosedEs_2_1 = 14 };
    enum { __eUnusedClosedEs_2_2 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" },
      { Map, "Map" },
      { VarSetDifference, "VarSetDifference" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __ePatternCommands_1_1, 2},
      {refalrts::icContextSet, 0, __eCommonVars_2_1, 4},
      {refalrts::icContextSet, 0, __eCopiedVars_2_1, 6},
      {refalrts::icContextSet, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommonVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.UnusedClosedEs#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__ePatternCommands_1_1] = context[2];
    context[__ePatternCommands_1_1 + 1] = context[3];
    context[__eCommonVars_2_1] = context[4];
    context[__eCommonVars_2_1 + 1] = context[5];
    context[__eCopiedVars_2_1] = context[6];
    context[__eCopiedVars_2_1 + 1] = context[7];
    context[__eUnusedClosedEs_2_1] = context[0];
    context[__eUnusedClosedEs_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eUnusedClosedEs_2_2], context[__eUnusedClosedEs_2_2 + 1], context[__eUnusedClosedEs_2_1], context[__eUnusedClosedEs_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eUnusedClosedEs_2_2], context[__eUnusedClosedEs_2_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eUnusedClosedEs_2_1], context[__eUnusedClosedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommonVars_2_1], context[__eCommonVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GeneralizeResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sNumBrackets_1_1 = 6 };
    enum { __eCommonVars_2_1 = 7 };
    enum { __eCopiedVars_2_1 = 9 };
    enum { __eEtc_2_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { NumerateVars, "NumerateVars" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumBrackets_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eCommonVars_2_1, 2},
      {refalrts::icContextSet, 0, __eCopiedVars_2_1, 4},
      {refalrts::icContextSet, 0, __eEtc_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumBrackets_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eCommonVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumBrackets#1 ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.Etc#2
    if( ! refalrts::svar_left( context[__sNumBrackets_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommonVars_2_1] = context[2];
    context[__eCommonVars_2_1 + 1] = context[3];
    context[__eCopiedVars_2_1] = context[4];
    context[__eCopiedVars_2_1 + 1] = context[5];
    context[__eEtc_2_1] = context[0];
    context[__eEtc_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eEtc_2_1], context[__eEtc_2_1 + 1] );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eCommonVars_2_1], context[__eCommonVars_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumBrackets_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GeneralizeResult_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __eNCommonVars_2_1 = 8 };
    enum { __eCopiedVars_2_1 = 10 };
    enum { __eEtc_2_1 = 12 };
    enum { __sNumber_2_1 = 14 };
    enum { __eNCommonVars_2_2 = 15 };
    enum { __eCopiedVars_2_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FindAllocForCopiedVars, "FindAllocForCopiedVars" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNCommonVars_2_1, 2},
      {refalrts::icContextSet, 0, __eCopiedVars_2_1, 4},
      {refalrts::icContextSet, 0, __eEtc_2_1, 0},
      {refalrts::icsVarLeft, 0, __sNumber_2_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eEtc_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.NCommonVars#2 ( s.Number#2 ) ) ( e.CopiedVars#2 ) e.Etc#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNCommonVars_2_1] = context[2];
    context[__eNCommonVars_2_1 + 1] = context[3];
    context[__eCopiedVars_2_1] = context[4];
    context[__eCopiedVars_2_1 + 1] = context[5];
    context[__eEtc_2_1] = context[0];
    context[__eEtc_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_2_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eNCommonVars_2_2], context[__eNCommonVars_2_2 + 1], context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eCopiedVars_2_2], context[__eCopiedVars_2_2 + 1], context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, FindAllocForCopiedVars, "FindAllocForCopiedVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eEtc_2_1], context[__eEtc_2_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_2], context[__eCopiedVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_2], context[__eNCommonVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_2_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GeneralizeResult_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eResultAllocCommands_1_1 = 12 };
    enum { __eResultCommands_1_1 = 14 };
    enum { __eNCommonVars_2_1 = 16 };
    enum { __sNumber_2_1 = 18 };
    enum { __eMCopiedVars_2_1 = 19 };
    enum { __eCopiedVars_2_1 = 21 };
    enum { __ePatternCommands_2_1 = 23 };
    enum { __ePatternCommands_2_2 = 25 };
    enum { __eResultAllocCommands_1_2 = 27 };
    enum { __eResultCommands_1_2 = 29 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { MakeCopyVar, "MakeCopyVar" },
      { Map, "Map" },
      { GenerateResult_OpenELoops, "GenerateResult_OpenELoops" },
      { FoldAllocCommands, "FoldAllocCommands" },
      { MakeInterpCommands, "MakeInterpCommands" },
      { GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { OutlineConstants, "OutlineConstants" },
      { PrepareOpenEStack, "PrepareOpenEStack" },
      { MakeDeclaration, "MakeDeclaration" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdEndIf<int>::name,
      & ident_CmdReturnResult<int>::name,
      & ident_CmdEmptyResult<int>::name,
      & ident_CmdElse<int>::name,
      & ident_CmdiRunInterpret<int>::name,
      & ident_CmdFinRAA<int>::name,
      & ident_CmdiEmptyResult<int>::name,
      & ident_CmdInitRAA<int>::name,
      & ident_CmdIfDef<int>::name,
      & ident_CmdInitB0<int>::name,
      & idents_CmdIssueMem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eResultAllocCommands_1_1, 2},
      {refalrts::icContextSet, 0, __eResultCommands_1_1, 4},
      {refalrts::icContextSet, 0, __eNCommonVars_2_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_2_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icContextSet, 0, __eMCopiedVars_2_1, 8},
      {refalrts::icContextSet, 0, __eCopiedVars_2_1, 10},
      {refalrts::icContextSet, 0, __ePatternCommands_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 10, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 8, 0},
      {refalrts::icSpliceEVar, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 9, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 8, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 7, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 6, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 7, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icSpliceEVar, 0, __ePatternCommands_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 6, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, __eMCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 5, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icCopyEVar, 0, __ePatternCommands_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopyEVar, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icCopyEVar, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 ) ( e.NCommonVars#2 ) s.Number#2 ( e.MCopiedVars#2 ) ( e.CopiedVars#2 ) e.PatternCommands#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eResultAllocCommands_1_1] = context[2];
    context[__eResultAllocCommands_1_1 + 1] = context[3];
    context[__eResultCommands_1_1] = context[4];
    context[__eResultCommands_1_1 + 1] = context[5];
    context[__eNCommonVars_2_1] = context[6];
    context[__eNCommonVars_2_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNumber_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eMCopiedVars_2_1] = context[8];
    context[__eMCopiedVars_2_1 + 1] = context[9];
    context[__eCopiedVars_2_1] = context[10];
    context[__eCopiedVars_2_1 + 1] = context[11];
    context[__ePatternCommands_2_1] = context[0];
    context[__ePatternCommands_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternCommands_2_2], context[__ePatternCommands_2_2 + 1], context[__ePatternCommands_2_1], context[__ePatternCommands_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultAllocCommands_1_2], context[__eResultAllocCommands_1_2 + 1], context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultCommands_1_2], context[__eResultCommands_1_2 + 1], context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdIssueMem<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_ident( n8, & ident_CmdInitB0<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & ident_CmdIfDef<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_number( n18, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_number( n21, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_number( n24, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_ident( n27, & ident_CmdInitRAA<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_ident( n33, & ident_CmdiEmptyResult<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_name( n36, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_ident( n47, & ident_CmdFinRAA<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_number( n50, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_ident( n53, & ident_CmdiRunInterpret<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_ident( n56, & ident_CmdElse<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_call( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_name( n59, GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_ident( n61, & ident_CmdEmptyResult<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_bracket( n62 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_open_call( n63 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_name( n64, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_name( n65, MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_call( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_open_bracket( n67 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_ident( n68, & ident_CmdReturnResult<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_close_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_close_call( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_open_bracket( n71 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_ident( n72, & ident_CmdEndIf<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_close_bracket( n73 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n71, n73 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    refalrts::push_stack( n70 );
    refalrts::push_stack( n58 );
    res = refalrts::splice_elem( res, n70 );
    refalrts::link_brackets( n67, n69 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_2], context[__eResultCommands_1_2 + 1] );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_2], context[__eResultAllocCommands_1_2 + 1] );
    refalrts::push_stack( n66 );
    refalrts::push_stack( n63 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::link_brackets( n60, n62 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_2_2], context[__ePatternCommands_2_2 + 1] );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    refalrts::link_brackets( n55, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::link_brackets( n52, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::push_stack( n51 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    refalrts::push_stack( n49 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::link_brackets( n46, n48 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n35 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n40 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] );
    refalrts::link_brackets( n42, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n37, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, context[__eMCopiedVars_2_1], context[__eMCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n32, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n29 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_2_1], context[__ePatternCommands_2_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n26, n28 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n23, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n20, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_2_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __ePatternVars_1_1 = 12 };
    enum { __ePatternCommands_1_1 = 14 };
    enum { __eResultVars_1_1 = 16 };
    enum { __eResultAllocCommands_1_1 = 18 };
    enum { __eResultCommands_1_1 = 20 };
    enum { __sNumBrackets_1_1 = 22 };
    enum { __ePatternCommands_1_2 = 23 };
    enum { __ePatternCommands_1_3 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" },
      { lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" },
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
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icBracketRight, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icBracketRight, 0, 10, 0},
      {refalrts::icContextSet, 0, __ePatternVars_1_1, 2},
      {refalrts::icContextSet, 0, __ePatternCommands_1_1, 10},
      {refalrts::icContextSet, 0, __eResultVars_1_1, 8},
      {refalrts::icContextSet, 0, __eResultAllocCommands_1_1, 6},
      {refalrts::icContextSet, 0, __eResultCommands_1_1, 4},
      {refalrts::icsVarLeft, 0, __sNumBrackets_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 11, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 10, 0},
      {refalrts::icSpliceEVar, 0, __ePatternVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 10, 0},
      {refalrts::icSpliceEVar, 0, __eResultVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 8, 0},
      {refalrts::icFunc, 0, 9, 0},
      {refalrts::icSpliceEVar, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 8, 0},
      {refalrts::icFunc, 0, 7, 0},
      {refalrts::icCopyEVar, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 6, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sNumBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternVars#1 ) s.NumBrackets#1 ( e.PatternCommands#1 ) ( e.ResultVars#1 ) ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      break;
    context[__ePatternVars_1_1] = context[2];
    context[__ePatternVars_1_1 + 1] = context[3];
    context[__ePatternCommands_1_1] = context[10];
    context[__ePatternCommands_1_1 + 1] = context[11];
    context[__eResultVars_1_1] = context[8];
    context[__eResultVars_1_1 + 1] = context[9];
    context[__eResultAllocCommands_1_1] = context[6];
    context[__eResultAllocCommands_1_1 + 1] = context[7];
    context[__eResultCommands_1_1] = context[4];
    context[__eResultCommands_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNumBrackets_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1], context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__ePatternCommands_1_3], context[__ePatternCommands_1_3 + 1], context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, RepeatedEVariables, "RepeatedEVariables" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, ClosedEVariables, "ClosedEVariables" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, lambda_GeneralizeResult_0, "lambda_GeneralizeResult_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, lambda_GeneralizeResult_1, "lambda_GeneralizeResult_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n45 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::push_stack( n43 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n41, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n41 );
    refalrts::link_brackets( n39, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, context[__sNumBrackets_1_1] );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_3], context[__ePatternCommands_1_3 + 1] );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1] );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n12, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eResultVars_1_1], context[__eResultVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__ePatternVars_1_1], context[__ePatternVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sMode_1_1 = 4 };
    enum { __eIndex_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icNumLeft, 0, 1, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( 1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::number_left( 1UL, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __sUsing_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    enum { __sUsing_1_2 = 8 };
    enum { __sMode_1_2 = 9 };
    enum { __eIndex_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Dec, "Dec" },
      { ReplicateVar, "ReplicateVar" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sUsing_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsing_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sUsing_1_1, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Using#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsing_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sUsing_1_2], context[__sUsing_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_stvar( res, context[__sUsing_1_2] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sUsing_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eVars_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ReplicateVar, "ReplicateVar" },
      { Map, "Map" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eVars_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Vars#1
    context[__eVars_1_1] = context[0];
    context[__eVars_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eSet1_B_1_1 = 12 };
    enum { __tCommon_1_1 = 14 };
    enum { __eSet1_E_1_1 = 15 };
    enum { __eSet2_B_1_1 = 17 };
    enum { __eSet2_E_1_1 = 19 };
    enum { __tCommon_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { VarSetUnion, "VarSetUnion" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEPrepare, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, __eSet1_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icSave, 0, 8, 4},
      {refalrts::ictVarLeft, 0, __tCommon_1_1, 6},
      {refalrts::icContextSet, 0, __eSet1_E_1_1, 6},
      {refalrts::icEPrepare, 0, __eSet2_B_1_1, 8},
      {refalrts::icEStart, 0, __eSet2_B_1_1, 8},
      {refalrts::icSave, 0, 10, 8},
      {refalrts::ictRepeatLeft, __tCommon_1_2, __tCommon_1_1, 10},
      {refalrts::icContextSet, 0, __eSet2_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tCommon_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[8] = context[4];
      context[9] = context[5];
      if( ! refalrts::tvar_left( context[__tCommon_1_1], context[6], context[7] ) )
        continue;
      context[__eSet1_E_1_1] = context[6];
      context[__eSet1_E_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[__tCommon_1_2], context[__tCommon_1_1], context[10], context[11] ) )
          continue;
        context[__eSet2_E_1_1] = context[10];
        context[__eSet2_E_1_1 + 1] = context[11];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, VarSetUnion, "VarSetUnion" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_close_bracket( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, context[__tCommon_1_1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eSet1_1_1 = 6 };
    enum { __eSet2_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eSet1_1_1, 2},
      {refalrts::icContextSet, 0, __eSet2_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSet1_1_1] = context[2];
    context[__eSet1_1_1 + 1] = context[3];
    context[__eSet2_1_1] = context[4];
    context[__eSet2_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eSet2_1_1], context[__eSet2_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eSet1_1_1], context[__eSet1_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eSet1_B_1_1 = 12 };
    enum { __eSet1_E_1_1 = 14 };
    enum { __eSet2_B_1_1 = 16 };
    enum { __eSet2_E_1_1 = 18 };
    enum { __tCommon_1_1 = 20 };
    enum { __tCommon_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { VarSetDifference, "VarSetDifference" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEPrepare, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, __eSet1_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icSave, 0, 8, 4},
      {refalrts::ictVarLeft, 0, __tCommon_1_1, 6},
      {refalrts::icContextSet, 0, __eSet1_E_1_1, 6},
      {refalrts::icEPrepare, 0, __eSet2_B_1_1, 8},
      {refalrts::icEStart, 0, __eSet2_B_1_1, 8},
      {refalrts::icSave, 0, 10, 8},
      {refalrts::ictRepeatLeft, __tCommon_1_2, __tCommon_1_1, 10},
      {refalrts::icContextSet, 0, __eSet2_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[8] = context[4];
      context[9] = context[5];
      if( ! refalrts::tvar_left( context[__tCommon_1_1], context[6], context[7] ) )
        continue;
      context[__eSet1_E_1_1] = context[6];
      context[__eSet1_E_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[__tCommon_1_2], context[__tCommon_1_1], context[10], context[11] ) )
          continue;
        context[__eSet2_E_1_1] = context[10];
        context[__eSet2_E_1_1 + 1] = context[11];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, VarSetDifference, "VarSetDifference" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_close_bracket( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_close_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eSet1_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eSet1_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eSet1_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSet1_1_1] = context[2];
    context[__eSet1_1_1 + 1] = context[3];
    // Unused closed variable e.Set2#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eSet1_1_1], context[__eSet1_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eIndex_1_1 = 4 };
    enum { __sNum_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & idents_CmdClosedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tOther_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Other#1
    if( ! refalrts::tvar_left( context[__tOther_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eIndex_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sNum_1_1 = 7 };
    enum { __sCount_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdRepeated<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 2},
      {refalrts::icsVarLeft, 0, __sCount_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 1 , 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # CmdRepeated s.Direction#1 s.Num#1 s.Count#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sCount_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tOther_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Other#1
    if( ! refalrts::tvar_left( context[__tOther_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __sDepth_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sNum_1_1 = 11 };
    enum { __sDepth_1_2 = 12 };
    enum { __eIndex_1_2 = 13 };
    enum { __eUnuseds_B_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromInt, "StrFromInt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdComment<int>::name,
      & ident_AlgLeft<int>::name,
      & idents_CmdClosedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icsVarRight, 0, __sDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, __eUnuseds_B_1_1, 0},
      {refalrts::icEStart, 0, __eUnuseds_B_1_1, 0},
      {refalrts::icSave, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icNumLeft, 0, 1, 4},
      {refalrts::icCharLeft, 0, (int)'e', 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icsRepeatLeft, __sDepth_1_2, __sDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'v', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unuseds_B#1 ( 1 'e e.Index#1 s.Depth#1 ) e.Unuseds_E#1 ( # CmdClosedE # AlgLeft s.Num#1 'e e.Index#1 s.Depth#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdClosedE<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eUnuseds_B_1_1] = 0;
    context[__eUnuseds_B_1_1 + 1] = 0;
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
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sDepth_1_2], context[__sDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      // Unused closed variable e.Unuseds_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_ident( n1, & ident_CmdComment<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'U' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, '.' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, '#' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_call( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, StrFromInt, "StrFromInt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_call( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n32 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::push_stack( n31 );
      refalrts::push_stack( n29 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eUnuseds_B_1_1], context[__eUnuseds_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOtherCommand_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarRight, 0, __tOtherCommand_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tOtherCommand_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unuseds#1 t.OtherCommand#1
    if( ! refalrts::tvar_right( context[__tOtherCommand_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.Unuseds#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tOtherCommand_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdDeclareEVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdDeclareEVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdDeclareVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdDeclareVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sUsings_1_1 = 4 };
    enum { __eIndex_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdCopyEVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdCopyEVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sUsings_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdCopyVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdCopyVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FoldAllocCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __eCommands_1_1 = 10 };
    enum { __sElemNo_1_1 = 12 };
    enum { __eAllocs_B_1_1 = 13 };
    enum { __eAllocs_E_1_1 = 15 };
    enum { __sType_1_1 = 17 };
    enum { __eValue_1_1 = 18 };
    enum { __sElemNo_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FoldAllocCommands, "FoldAllocCommands" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdInsertElem<int>::name,
      & idents_CmdAllocateElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sElemNo_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEPrepare, 0, __eAllocs_B_1_1, 2},
      {refalrts::icEStart, 0, __eAllocs_B_1_1, 2},
      {refalrts::icSave, 0, 8, 2},
      {refalrts::icBracketLeft, 0, 6, 8},
      {refalrts::icIdentLeft, 0, 1, 6},
      {refalrts::icsRepeatLeft, __sElemNo_1_2, __sElemNo_1_1, 6},
      {refalrts::icContextSet, 0, __eAllocs_E_1_1, 8},
      {refalrts::icsVarLeft, 0, __sType_1_1, 6},
      {refalrts::icContextSet, 0, __eValue_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sType_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sElemNo_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eValue_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs_B#1 ( # CmdAllocateElem s.ElemNo#1 s.Type#1 e.Value#1 ) e.Allocs_E#1 ) ( # CmdInsertElem s.ElemNo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[4], context[5] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sElemNo_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eAllocs_B_1_1] = 0;
    context[__eAllocs_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sElemNo_1_2], context[__sElemNo_1_1], context[6], context[7] ) )
        continue;
      context[__eAllocs_E_1_1] = context[8];
      context[__eAllocs_E_1_1 + 1] = context[9];
      if( ! refalrts::svar_left( context[__sType_1_1], context[6], context[7] ) )
        continue;
      context[__eValue_1_1] = context[6];
      context[__eValue_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, FoldAllocCommands, "FoldAllocCommands" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_ident( n6, & ident_CmdInsertElem<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eValue_1_1], context[__eValue_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sElemNo_1_1] );
      res = refalrts::splice_stvar( res, context[__sType_1_1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eAllocs_E_1_1], context[__eAllocs_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eAllocs_B_1_1], context[__eAllocs_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eAllocs_B_1_1], context[__eAllocs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sUsings_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FoldAllocCommands, "FoldAllocCommands" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdInsertVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 4},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 4},
      {refalrts::icContextSet, 0, __eIndex_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[4], context[5] ) )
      break;
    context[__eIndex_1_1] = context[4];
    context[__eIndex_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdInsertVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sUsings_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FoldAllocCommands, "FoldAllocCommands" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdInsertVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 4},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 4},
      {refalrts::icContextSet, 0, __eIndex_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[4], context[5] ) )
      break;
    context[__eIndex_1_1] = context[4];
    context[__eIndex_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & ident_CmdInsertVar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FoldAllocCommands, "FoldAllocCommands" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdLinkBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( # CmdLinkBrackets e.CmdInfo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    // Unused closed variable e.CmdInfo#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FoldAllocCommands, "FoldAllocCommands" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdPushStack<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( # CmdPushStack e.CmdInfo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    // Unused closed variable e.CmdInfo#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_MakeInterpCommands_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNumber_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrInt<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, (int)'<', 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrInt<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __sNumber_1_1 = 2 };
    enum { __sOther_2_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrHugeInt<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOther_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 s.Other#2
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOther_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrHugeInt<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __sMode_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sUsings_1_1 = 11 };
    enum { __sUsings_1_2 = 12 };
    enum { __sMode_1_2 = 13 };
    enum { __eIndex_1_2 = 14 };
    enum { __eCopiedVars_B_1_1 = 16 };
    enum { __sNumber_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrCopy<int>::name,
      & idents_CmdInsertVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, __eCopiedVars_B_1_1, 0},
      {refalrts::icEStart, 0, __eCopiedVars_B_1_1, 0},
      {refalrts::icSave, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::iceRepeatRight, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icsRepeatRight, __sMode_1_2, __sMode_1_1, 4},
      {refalrts::icsRepeatRight, __sUsings_1_2, __sUsings_1_1, 4},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.CopiedVars_E#1 ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eCopiedVars_B_1_1] = 0;
    context[__eCopiedVars_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sUsings_1_2], context[__sUsings_1_1], context[4], context[5] ) )
        continue;
      // Unused closed variable e.CopiedVars_E#1
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_ident( n1, & ident_CmdArrCopy<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_close_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n2 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCopiedVars_B_1_1], context[__eCopiedVars_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sUsings_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrSplice<int>::name,
      & idents_CmdInsertVar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sUsings_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrSplice<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sValue_1_1 = 4 };
    enum { __sCounter_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrChar<int>::name,
      & ident_ElChar<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icsVarLeft, 0, __sValue_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sValue_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElChar s.Counter#1 s.Value#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElChar<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sValue_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sValue_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sCounter_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrFunc<int>::name,
      & ident_ElName<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElName s.Counter#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrFunc<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sNumber_1_1 = 4 };
    enum { __sCounter_1_1 = 5 };
    enum { __sNumber_1_2 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_MakeInterpCommands_0, "lambda_MakeInterpCommands_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Compare, "Compare" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ElNumber<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    static const refalrts::RefalNumber numbers[] = {
      256UL
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icHugeInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElNumber s.Counter#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Compare, "Compare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 256UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, lambda_MakeInterpCommands_0, "lambda_MakeInterpCommands_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sCounter_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrIdent<int>::name,
      & ident_ElIdent<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElIdent s.Counter#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrOB<int>::name,
      & ident_ElOpenBracket<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElOpenBracket s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrOB<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrOADT<int>::name,
      & ident_ElOpenADT<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElOpenADT s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrOADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrOC<int>::name,
      & ident_ElOpenCall<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElOpenCall s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrOC<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrCB<int>::name,
      & ident_ElCloseBracket<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElCloseBracket s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrCB<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrCADT<int>::name,
      & ident_ElCloseADT<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElCloseADT s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrCADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdArrCC<int>::name,
      & ident_ElCloseCall<int>::name,
      & idents_CmdInsertElem<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 2, 2},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icsVarLeft, 0, __sCounter_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( # CmdInsertElem # ElCloseCall s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdArrCC<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_OutlineConstants_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sValue_2_1 = 4 };
    enum { __sId_2_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sId_2_1, 2},
      {refalrts::icsVarLeft, 0, __sValue_2_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sValue_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Id#2 s.Value#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sId_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sValue_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sValue_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __eFuncs_1_1 = 8 };
    enum { __eLabels_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __sNextFunc_1_1 = 14 };
    enum { __sNextLabel_1_1 = 15 };
    enum { __sNextNumber_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_OutlineConstants_0, "lambda_OutlineConstants_0" },
      { Map, "Map" },
      { RemoveNumber, "RemoveNumber" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdiNumberArray<int>::name,
      & ident_CmdiLabelArray<int>::name,
      & idents_CmdiFuncArray<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNextLabel_1_1, 4},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icsVarLeft, 0, __sNextNumber_1_1, 6},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( s.NextNumber#1 e.Numbers#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNextNumber_1_1], context[6], context[7] ) )
      break;
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiFuncArray<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_ident( n8, & ident_CmdiLabelArray<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdiNumberArray<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, lambda_OutlineConstants_0, "lambda_OutlineConstants_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n20 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n7, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eLabels_1_1 = 14 };
    enum { __eNumbers_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __sNextFunc_1_1 = 20 };
    enum { __sDirection_1_1 = 21 };
    enum { __sBracketNum_1_1 = 22 };
    enum { __eFunc_1_1 = 23 };
    enum { __eFuncs_B_1_1 = 25 };
    enum { __eFuncs_E_1_1 = 27 };
    enum { __sNum_1_1 = 29 };
    enum { __eFunc_1_2 = 30 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icEPrepare, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, __eFuncs_B_1_1, 2},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eFunc_1_2, __eFunc_1_1, 10},
      {refalrts::icContextSet, 0, __eFuncs_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eFuncs_E_1_1] = context[12];
      context[__eFuncs_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdiName<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eLabels_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextFunc_1_1 = 16 };
    enum { __eFuncs_1_1 = 17 };
    enum { __sDirection_1_1 = 19 };
    enum { __sBracketNum_1_1 = 20 };
    enum { __eFunc_1_1 = 21 };
    enum { __sNextFunc_1_2 = 23 };
    enum { __sNextFunc_1_3 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eLabels_1_1 = 14 };
    enum { __eNumbers_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __eFunc_1_1 = 20 };
    enum { __sNextFunc_1_1 = 22 };
    enum { __eFuncs_B_1_1 = 23 };
    enum { __eFuncs_E_1_1 = 25 };
    enum { __sNum_1_1 = 27 };
    enum { __eFunc_1_2 = 28 };
    enum { __sNum_1_2 = 30 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrFunc<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icEPrepare, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, __eFuncs_B_1_1, 2},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eFunc_1_2, __eFunc_1_1, 10},
      {refalrts::icContextSet, 0, __eFuncs_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdArrFunc e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrFunc<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eFuncs_E_1_1] = context[12];
      context[__eFuncs_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdArrFunc<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eLabels_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __eFunc_1_1 = 16 };
    enum { __sNextFunc_1_1 = 18 };
    enum { __eFuncs_1_1 = 19 };
    enum { __sNextFunc_1_2 = 21 };
    enum { __sNextFunc_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrFunc<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdArrFunc e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrFunc<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdArrFunc<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __eLabels_1_1 = 14 };
    enum { __eNumbers_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __sNextFunc_1_1 = 20 };
    enum { __sDirection_1_1 = 21 };
    enum { __sBracketNum_1_1 = 22 };
    enum { __sInnerBrackets_1_1 = 23 };
    enum { __eFunc_1_1 = 24 };
    enum { __eFuncs_B_1_1 = 26 };
    enum { __eFuncs_E_1_1 = 28 };
    enum { __sNum_1_1 = 30 };
    enum { __eFunc_1_2 = 31 };
    enum { __sNum_1_2 = 33 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sInnerBrackets_1_1, 8},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icEPrepare, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, __eFuncs_B_1_1, 2},
      {refalrts::icSave, 0, 12, 2},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eFunc_1_2, __eFunc_1_1, 10},
      {refalrts::icContextSet, 0, __eFuncs_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[8], context[9] ) )
      break;
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eFuncs_E_1_1] = context[12];
      context[__eFuncs_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdiADT<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eLabels_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextFunc_1_1 = 16 };
    enum { __eFuncs_1_1 = 17 };
    enum { __sDirection_1_1 = 19 };
    enum { __sBracketNum_1_1 = 20 };
    enum { __sInnerBrackets_1_1 = 21 };
    enum { __eFunc_1_1 = 22 };
    enum { __sNextFunc_1_2 = 24 };
    enum { __sNextFunc_1_3 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextFunc_1_1, 2},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sInnerBrackets_1_1, 8},
      {refalrts::icContextSet, 0, __eFunc_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[8], context[9] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[8], context[9] ) )
      break;
    context[__eFunc_1_1] = context[8];
    context[__eFunc_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eFuncs_1_1 = 14 };
    enum { __eNumbers_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __sNextLabel_1_1 = 20 };
    enum { __sDirection_1_1 = 21 };
    enum { __sBracketNum_1_1 = 22 };
    enum { __eLabel_1_1 = 23 };
    enum { __eLabels_B_1_1 = 25 };
    enum { __eLabels_E_1_1 = 27 };
    enum { __sNum_1_1 = 29 };
    enum { __eLabel_1_2 = 30 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiIdent<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextLabel_1_1, 4},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icContextSet, 0, __eLabel_1_1, 8},
      {refalrts::icEPrepare, 0, __eLabels_B_1_1, 4},
      {refalrts::icEStart, 0, __eLabels_B_1_1, 4},
      {refalrts::icSave, 0, 12, 4},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eLabel_1_2, __eLabel_1_1, 10},
      {refalrts::icContextSet, 0, __eLabels_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    context[__eLabel_1_1] = context[8];
    context[__eLabel_1_1 + 1] = context[9];
    context[__eLabels_B_1_1] = 0;
    context[__eLabels_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[4];
      context[13] = context[5];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eLabel_1_2], context[__eLabel_1_2 + 1], context[__eLabel_1_1], context[__eLabel_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eLabels_E_1_1] = context[12];
      context[__eLabels_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdiIdent<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n4, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_E_1_1], context[__eLabels_E_1_1 + 1] );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1], context[4], context[5] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eFuncs_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextLabel_1_1 = 16 };
    enum { __eLabels_1_1 = 17 };
    enum { __sDirection_1_1 = 19 };
    enum { __sBracketNum_1_1 = 20 };
    enum { __eLabel_1_1 = 21 };
    enum { __sNextLabel_1_2 = 23 };
    enum { __sNextLabel_1_3 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiIdent<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextLabel_1_1, 4},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icContextSet, 0, __eLabel_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    context[__eLabel_1_1] = context[8];
    context[__eLabel_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_2], context[__sNextLabel_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_3], context[__sNextLabel_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_3] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_2] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFuncs_1_1 = 14 };
    enum { __eNumbers_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __eLabel_1_1 = 20 };
    enum { __sNextLabel_1_1 = 22 };
    enum { __eLabels_B_1_1 = 23 };
    enum { __eLabels_E_1_1 = 25 };
    enum { __sNum_1_1 = 27 };
    enum { __eLabel_1_2 = 28 };
    enum { __sNum_1_2 = 30 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrIdent<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, __eLabel_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNextLabel_1_1, 4},
      {refalrts::icEPrepare, 0, __eLabels_B_1_1, 4},
      {refalrts::icEStart, 0, __eLabels_B_1_1, 4},
      {refalrts::icSave, 0, 12, 4},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::iceRepeatRight, __eLabel_1_2, __eLabel_1_1, 10},
      {refalrts::icContextSet, 0, __eLabels_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sNum_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdArrIdent e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrIdent<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eLabel_1_1] = context[8];
    context[__eLabel_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_B_1_1] = 0;
    context[__eLabels_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[4];
      context[13] = context[5];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eLabel_1_2], context[__eLabel_1_2 + 1], context[__eLabel_1_1], context[__eLabel_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eLabels_E_1_1] = context[12];
      context[__eLabels_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdArrIdent<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n4, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_E_1_1], context[__eLabels_E_1_1 + 1] );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1], context[4], context[5] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eFuncs_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __eLabel_1_1 = 16 };
    enum { __sNextLabel_1_1 = 18 };
    enum { __eLabels_1_1 = 19 };
    enum { __sNextLabel_1_2 = 21 };
    enum { __sNextLabel_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrIdent<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, __eLabel_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNextLabel_1_1, 4},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 ( # CmdArrIdent e.Label#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrIdent<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eLabel_1_1] = context[8];
    context[__eLabel_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_2], context[__sNextLabel_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_3], context[__sNextLabel_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdArrIdent<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_2] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFuncs_1_1 = 14 };
    enum { __eLabels_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __sNextNumId_1_1 = 20 };
    enum { __sDirection_1_1 = 21 };
    enum { __sBracketNum_1_1 = 22 };
    enum { __sNumber_1_1 = 23 };
    enum { __eNumbers_B_1_1 = 24 };
    enum { __eNumbers_E_1_1 = 26 };
    enum { __sId_1_1 = 28 };
    enum { __sNumber_1_2 = 29 };
    enum { __sId_1_2 = 30 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiHugeNum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextNumId_1_1, 6},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEPrepare, 0, __eNumbers_B_1_1, 6},
      {refalrts::icEStart, 0, __eNumbers_B_1_1, 6},
      {refalrts::icSave, 0, 12, 6},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::icsRepeatRight, __sNumber_1_2, __sNumber_1_1, 10},
      {refalrts::icContextSet, 0, __eNumbers_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sId_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sId_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextNumId_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eNumbers_B_1_1] = 0;
    context[__eNumbers_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[6];
      context[13] = context[7];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sNumber_1_2], context[__sNumber_1_1], context[10], context[11] ) )
        continue;
      context[__eNumbers_E_1_1] = context[12];
      context[__eNumbers_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sId_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sId_1_2], context[__sId_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdiHugeNum<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sId_1_2] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n6, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_E_1_1], context[__eNumbers_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sId_1_1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eNumbers_B_1_1], context[__eNumbers_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextNumId_1_1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNumbers_B_1_1], context[__eNumbers_B_1_1 + 1], context[6], context[7] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eFuncs_1_1 = 10 };
    enum { __eLabels_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextNumId_1_1 = 16 };
    enum { __eNumbers_1_1 = 17 };
    enum { __sDirection_1_1 = 19 };
    enum { __sBracketNum_1_1 = 20 };
    enum { __sNumber_1_1 = 21 };
    enum { __sNextNumId_1_2 = 22 };
    enum { __sNextNumId_1_3 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiHugeNum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextNumId_1_1, 6},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icsVarLeft, 0, __sDirection_1_1, 8},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) e.Commands#1 ( # CmdiHugeNum s.Direction#1 s.BracketNum#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextNumId_1_1], context[6], context[7] ) )
      break;
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNumId_1_2], context[__sNextNumId_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextNumId_1_3], context[__sNextNumId_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdiHugeNum<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_3] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n6, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_2] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFuncs_1_1 = 14 };
    enum { __eLabels_1_1 = 16 };
    enum { __eCommands_1_1 = 18 };
    enum { __sNextNumId_1_1 = 20 };
    enum { __sNumber_1_1 = 21 };
    enum { __eNumbers_B_1_1 = 22 };
    enum { __eNumbers_E_1_1 = 24 };
    enum { __sId_1_1 = 26 };
    enum { __sNumber_1_2 = 27 };
    enum { __sId_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrHugeInt<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextNumId_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEPrepare, 0, __eNumbers_B_1_1, 6},
      {refalrts::icEStart, 0, __eNumbers_B_1_1, 6},
      {refalrts::icSave, 0, 12, 6},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::icsRepeatRight, __sNumber_1_2, __sNumber_1_1, 10},
      {refalrts::icContextSet, 0, __eNumbers_E_1_1, 12},
      {refalrts::icsVarLeft, 0, __sId_1_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sId_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers_B#1 ( s.Id#1 s.Number#1 ) e.Numbers_E#1 ) e.Commands#1 ( # CmdArrHugeInt s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrHugeInt<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextNumId_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eNumbers_B_1_1] = 0;
    context[__eNumbers_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[6];
      context[13] = context[7];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sNumber_1_2], context[__sNumber_1_1], context[10], context[11] ) )
        continue;
      context[__eNumbers_E_1_1] = context[12];
      context[__eNumbers_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sId_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sId_1_2], context[__sId_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_ident( n12, & ident_CmdArrHugeInt<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n11, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, context[__sId_1_2] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n6, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eNumbers_E_1_1], context[__eNumbers_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sId_1_1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eNumbers_B_1_1], context[__eNumbers_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextNumId_1_1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNumbers_B_1_1], context[__eNumbers_B_1_1 + 1], context[6], context[7] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eFuncs_1_1 = 10 };
    enum { __eLabels_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextNumId_1_1 = 16 };
    enum { __eNumbers_1_1 = 17 };
    enum { __sNumber_1_1 = 19 };
    enum { __sNextNumId_1_2 = 20 };
    enum { __sNextNumId_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { OutlineConstants, "OutlineConstants" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdArrHugeInt<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNextNumId_1_1, 6},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNextNumId_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( s.NextNumId#1 e.Numbers#1 ) e.Commands#1 ( # CmdArrHugeInt s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CmdArrHugeInt<int>::name, context[8], context[9] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextNumId_1_1], context[6], context[7] ) )
      break;
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNumId_1_2], context[__sNextNumId_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextNumId_1_3], context[__sNextNumId_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_CmdArrHugeInt<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n6, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_2] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sNextNumId_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __eFuncs_1_1 = 8 };
    enum { __eLabels_1_1 = 10 };
    enum { __eNumbers_1_1 = 12 };
    enum { __tOtherCommand_1_1 = 14 };
    enum { __eCommands_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { OutlineConstants, "OutlineConstants" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, __eNumbers_1_1, 6},
      {refalrts::ictVarRight, 0, __tOtherCommand_1_1, 0},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNumbers_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tOtherCommand_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) ( e.Numbers#1 ) e.Commands#1 t.OtherCommand#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eNumbers_1_1] = context[6];
    context[__eNumbers_1_1 + 1] = context[7];
    if( ! refalrts::tvar_right( context[__tOtherCommand_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__tOtherCommand_1_1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eNumbers_1_1], context[__eNumbers_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sDepth_1_1 = 6 };
    enum { __eCommands_B_1_1 = 7 };
    enum { __eVarInfo_1_1 = 9 };
    enum { __eCommands_E_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Inc, "Inc" },
      { PrepareOpenEStack, "PrepareOpenEStack" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiEStart<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, 0, __sDepth_1_1, 0},
      {refalrts::icEPrepare, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, __eCommands_B_1_1, 0},
      {refalrts::icSave, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 2, 4},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eVarInfo_1_1, 2},
      {refalrts::icContextSet, 0, __eCommands_E_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVarInfo_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands_B#1 ( # CmdiEStart e.VarInfo#1 ) e.Commands_E#1 s.Depth#1
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[4] = context[0];
      context[5] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[2], context[3] ) )
        continue;
      context[__eVarInfo_1_1] = context[2];
      context[__eVarInfo_1_1 + 1] = context[3];
      context[__eCommands_E_1_1] = context[4];
      context[__eCommands_E_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_ident( n1, & ident_CmdiEStart<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_close_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_call( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, PrepareOpenEStack, "PrepareOpenEStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n8 );
      refalrts::push_stack( n3 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      refalrts::link_brackets( n0, n2 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eVarInfo_1_1], context[__eVarInfo_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sDepth_1_1 = 2 };
    enum { __eCommands_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CmdiReserveStack<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, 0, __sDepth_1_1, 0},
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1 s.Depth#1
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CmdiReserveStack<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eCommands_B_1_1 = 6 };
    enum { __eCommands_E_1_1 = 8 };
    enum { __sBracketNum_1_1 = 10 };
    enum { __eIndex_1_1 = 11 };
    enum { __sBracketNum_1_2 = 13 };
    enum { __eIndex_1_2 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenerateResult_OpenELoops, "GenerateResult_OpenELoops" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_AlgLeft<int>::name,
      & ident_CmdOpenedE_End<int>::name,
      & ident_CmdOpenedE_Start<int>::name,
      & idents_CmdOpenedE<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEPrepare, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, __eCommands_B_1_1, 0},
      {refalrts::icSave, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 2, 4},
      {refalrts::icIdentLeft, 0, 3, 2},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icContextSet, 0, __eCommands_E_1_1, 4},
      {refalrts::icsVarLeft, 0, __sBracketNum_1_1, 2},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands_B#1 ( # CmdOpenedE # AlgLeft s.BracketNum#1 'e e.Index#1 ) e.Commands_E#1
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
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
      context[__eCommands_E_1_1] = context[4];
      context[__eCommands_E_1_1 + 1] = context[5];
      if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[2], context[3] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[2], context[3] ) )
        continue;
      context[__eIndex_1_1] = context[2];
      context[__eIndex_1_1 + 1] = context[3];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sBracketNum_1_2], context[__sBracketNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_ident( n1, & ident_CmdOpenedE_Start<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_ident( n2, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_ident( n9, & ident_CmdOpenedE_End<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_ident( n10, & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n8, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_2] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eCommands_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eCommands_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}


//End of file
