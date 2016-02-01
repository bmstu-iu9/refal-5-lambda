// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #AlreadyBounded
template <typename SREFAL_PARAM_INT>
struct ident_AlreadyBounded {
  static const char *name() {
    return "AlreadyBounded";
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

// identifier #Close
template <typename SREFAL_PARAM_INT>
struct ident_Close {
  static const char *name() {
    return "Close";
  }
};

// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
  }
};

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
  }
};

// identifier #EEnum
template <typename SREFAL_PARAM_INT>
struct ident_EEnum {
  static const char *name() {
    return "EEnum";
  }
};

// identifier #ESwap
template <typename SREFAL_PARAM_INT>
struct ident_ESwap {
  static const char *name() {
    return "ESwap";
  }
};

// identifier #Entry
template <typename SREFAL_PARAM_INT>
struct ident_Entry {
  static const char *name() {
    return "Entry";
  }
};

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #ExistVariable
template <typename SREFAL_PARAM_INT>
struct ident_ExistVariable {
  static const char *name() {
    return "ExistVariable";
  }
};

// identifier #Extern
template <typename SREFAL_PARAM_INT>
struct ident_Extern {
  static const char *name() {
    return "Extern";
  }
};

// identifier #Forward
template <typename SREFAL_PARAM_INT>
struct ident_Forward {
  static const char *name() {
    return "Forward";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
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

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #InvalidMode
template <typename SREFAL_PARAM_INT>
struct ident_InvalidMode {
  static const char *name() {
    return "InvalidMode";
  }
};

// identifier #LambdaName
template <typename SREFAL_PARAM_INT>
struct ident_LambdaName {
  static const char *name() {
    return "LambdaName";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Open
template <typename SREFAL_PARAM_INT>
struct ident_Open {
  static const char *name() {
    return "Open";
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

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
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

// identifier #TkCloseBlock
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBlock {
  static const char *name() {
    return "TkCloseBlock";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
  }
};

// identifier #TkCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseCall {
  static const char *name() {
    return "TkCloseCall";
  }
};

// identifier #TkComma
template <typename SREFAL_PARAM_INT>
struct ident_TkComma {
  static const char *name() {
    return "TkComma";
  }
};

// identifier #TkDirective
template <typename SREFAL_PARAM_INT>
struct ident_TkDirective {
  static const char *name() {
    return "TkDirective";
  }
};

// identifier #TkEOF
template <typename SREFAL_PARAM_INT>
struct ident_TkEOF {
  static const char *name() {
    return "TkEOF";
  }
};

// identifier #TkIdentMarker
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentMarker {
  static const char *name() {
    return "TkIdentMarker";
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

// identifier #TkOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenADT {
  static const char *name() {
    return "TkOpenADT";
  }
};

// identifier #TkOpenBlock
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBlock {
  static const char *name() {
    return "TkOpenBlock";
  }
};

// identifier #TkOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBracket {
  static const char *name() {
    return "TkOpenBracket";
  }
};

// identifier #TkOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenCall {
  static const char *name() {
    return "TkOpenCall";
  }
};

// identifier #TkRedefinition
template <typename SREFAL_PARAM_INT>
struct ident_TkRedefinition {
  static const char *name() {
    return "TkRedefinition";
  }
};

// identifier #TkReplace
template <typename SREFAL_PARAM_INT>
struct ident_TkReplace {
  static const char *name() {
    return "TkReplace";
  }
};

// identifier #TkSemicolon
template <typename SREFAL_PARAM_INT>
struct ident_TkSemicolon {
  static const char *name() {
    return "TkSemicolon";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_ParseProgram_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddUnresolved, "ST_AddUnresolved" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.ErrorList#2/1
    //6: t.SymTable#2/1
    //7: e.AST#2/1
    // t.ErrorList#2 t.SymTable#2 e.AST#2
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 7, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: t.ErrorList#2/1
  //6: t.SymTable#2/1
  //7: e.AST#2/1
  // t.ErrorList#2 t.SymTable#2 e.AST#2
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = context[0];
  context[8] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ST_AddUnresolved, "ST_AddUnresolved" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseProgram_0, "lambda_ParseProgram_0" },
    { PrepareBracket, "PrepareBracket" },
    { Map, "Map" },
    { ST_Create, "ST_Create" },
    { ParseElements, "ParseElements" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //18: t.ErrorList#1/1
    //19: e.Tokens#1/1
    // t.ErrorList#1 e.Tokens#1
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 5, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 18},
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
  //18: t.ErrorList#1/1
  //19: e.Tokens#1/1
  // t.ErrorList#1 e.Tokens#1
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ST_Create, "ST_Create" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], PrepareBracket, "PrepareBracket" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], lambda_ParseProgram_0, "lambda_ParseProgram_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseCall<int>::name,
    & ident_Close<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Open<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkOpenBracket s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 3, 5},
    {refalrts::icIdent, 0, 7, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkCloseBracket s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icIdent, 0, 6, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkOpenADT s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 3, 5},
    {refalrts::icIdent, 0, 5, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkCloseADT s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icIdent, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkOpenCall s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 3, 5},
    {refalrts::icIdent, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#1/1
    // ( # TkCloseCall s.LnNum#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: t.OtherToken#1/1
    // t.OtherToken#1
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    //8: s.LnNum#1/1
    // ( # TkOpenBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
    //8: s.LnNum#1/1
    // ( # TkCloseBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
    //8: s.LnNum#1/1
    // ( # TkOpenADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
    //8: s.LnNum#1/1
    // ( # TkCloseADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
    //8: s.LnNum#1/1
    // ( # TkOpenCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
    //8: s.LnNum#1/1
    // ( # TkCloseCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[8] );
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
  //2: t.OtherToken#1/1
  // t.OtherToken#1
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
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

static refalrts::FnResult lambda_ParseElements_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Declaration<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.ScopeClass#2/1
    //8: e.Name#2/1
    // ( s.ScopeClass#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
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
  //7: s.ScopeClass#2/1
  //8: e.Name#2/1
  // ( s.ScopeClass#2 e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = context[2];
  context[9] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_Declaration<int>::name ) )
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
#endif
}

static refalrts::FnResult lambda_ParseElements_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Ident<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //7: e.Name#2/1
    // ( e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
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
  //7: e.Name#2/1
  // ( e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = context[2];
  context[8] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_Ident<int>::name ) )
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
#endif
}

static refalrts::FnResult lambda_ParseElements_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.AST#1/1
    //13: e.NewASTItems#2/1
    //15: t.ErrorList#2/1
    //16: t.SymTable#2/1
    //17: e.Tail#2/1
    // ( e.AST#1 ) ( e.NewASTItems#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::ictVarLeft, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
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
  //11: e.AST#1/1
  //13: e.NewASTItems#2/1
  //15: t.ErrorList#2/1
  //16: t.SymTable#2/1
  //17: e.Tail#2/1
  // ( e.AST#1 ) ( e.NewASTItems#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];
  context[13] = context[4];
  context[14] = context[5];
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ParseElements, "ParseElements" ) )
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
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseElements_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.AST#1/1
    //13: e.NewASTItems#2/1
    //15: t.ErrorList#2/1
    //16: t.SymTable#2/1
    //17: e.Tail#2/1
    // ( e.AST#1 ) ( e.NewASTItems#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::ictVarLeft, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
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
  //11: e.AST#1/1
  //13: e.NewASTItems#2/1
  //15: t.ErrorList#2/1
  //16: t.SymTable#2/1
  //17: e.Tail#2/1
  // ( e.AST#1 ) ( e.NewASTItems#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];
  context[13] = context[4];
  context[14] = context[5];
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ParseElements, "ParseElements" ) )
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
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseElements, "ParseElements" },
    { lambda_ParseElements_3, "lambda_ParseElements_3" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { ST_AddDefined, "ST_AddDefined" },
    { ParseFunction, "ParseFunction" },
    { Fetch, "Fetch" },
    { lambda_ParseElements_2, "lambda_ParseElements_2" },
    { ParseElement_SwDirective, "ParseElement_SwDirective" },
    { ST_AllIdents, "ST_AllIdents" },
    { Sort, "Sort" },
    { lambda_ParseElements_1, "lambda_ParseElements_1" },
    { Map, "Map" },
    { ST_AllFunctions, "ST_AllFunctions" },
    { lambda_ParseElements_0, "lambda_ParseElements_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkSemicolon<int>::name,
    & ident_GN_Local<int>::name,
    & ident_TkName<int>::name,
    & ident_TkDirective<int>::name,
    & ident_Separator<int>::name,
    & ident_TkEOF<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"directive or name", 17}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.AST#1/1
    //31: s.LnNum#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.SymTable#1/2
    //35: t.SymTable#1/3
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkEOF s.LnNum#1 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 29, 4},
    {refalrts::icsVarLeft, 0, 31, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 34, 33, 0},
    {refalrts::icCopySTVar, 35, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 12, 7},
    {refalrts::icFunc, 0, 14, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 10, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 13, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 4, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 12, 20},
    {refalrts::icFunc, 0, 11, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 10, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 9, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: e.AST#1/1
    //22: e.Tail#1/1
    //24: s.LnNum#1/1
    //25: s.Directive#1/1
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkDirective s.LnNum#1 s.Directive#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icContextSet, 0, 20, 2},
    {refalrts::icContextSet, 0, 22, 0},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 6, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 8, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 3, 12},
    {refalrts::icFunc, 0, 7, 13},
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
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +68, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: e.AST#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 34, 32, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 6, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 5, 9},
    {refalrts::icIdent, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 4, 14},
    {refalrts::icIdent, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 3, 19},
    {refalrts::icFunc, 0, 2, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: t.ErrorList#1/1
    //12: t.SymTable#1/1
    //13: e.AST#1/1
    //15: e.Tail#1/1
    //17: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: t.ErrorList#1/1
    //15: t.SymTable#1/1
    //16: e.AST#1/1
    //18: t.Unexpected#1/1
    //19: e.Tail#1/1
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) t.Unexpected#1 e.Tail#1
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //29: e.AST#1/1
    //31: s.LnNum#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.SymTable#1/2
    //35: t.SymTable#1/3
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkEOF s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[29] = context[4];
    context[30] = context[5];
    if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[34], context[33]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[34]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], lambda_ParseElements_0, "lambda_ParseElements_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Sort, "Sort" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ST_AllFunctions, "ST_AllFunctions" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_Separator<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], lambda_ParseElements_1, "lambda_ParseElements_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], Sort, "Sort" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ST_AllIdents, "ST_AllIdents" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[22] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[16], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
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
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: e.AST#1/1
    //22: e.Tail#1/1
    //24: s.LnNum#1/1
    //25: s.Directive#1/1
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkDirective s.LnNum#1 s.Directive#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkDirective<int>::name, context[4], context[5] ) )
      continue;
    context[20] = context[2];
    context[21] = context[3];
    context[22] = context[0];
    context[23] = context[1];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
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
    if( ! refalrts::alloc_name( context[9], ParseElement_SwDirective, "ParseElement_SwDirective" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], lambda_ParseElements_2, "lambda_ParseElements_2" ) )
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
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
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
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: e.AST#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    context[29] = context[0];
    context[30] = context[1];
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[34], context[35], context[32], context[33]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], lambda_ParseElements_3, "lambda_ParseElements_3" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[11] );
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
    //11: t.ErrorList#1/1
    //12: t.SymTable#1/1
    //13: e.AST#1/1
    //15: e.Tail#1/1
    //17: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[4], context[5] ) )
      continue;
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[0];
    context[16] = context[1];
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], ParseElements, "ParseElements" ) )
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
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[11] );
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
  //14: t.ErrorList#1/1
  //15: t.SymTable#1/1
  //16: e.AST#1/1
  //18: t.Unexpected#1/1
  //19: e.Tail#1/1
  // t.ErrorList#1 t.SymTable#1 ( e.AST#1 ) t.Unexpected#1 e.Tail#1
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = context[2];
  context[17] = context[3];
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "directive or name", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
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
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[15] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DontAdd, "DontAdd" },
    { AddExtern, "AddExtern" },
    { ST_AddDefined, "ST_AddDefined" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name,
    & ident_Stub<int>::name,
    & ident_Ident<int>::name,
    & ident_GN_Local<int>::name,
    & ident_Forward<int>::name,
    & ident_Extern<int>::name,
    & ident_Swap<int>::name,
    & ident_ESwap<int>::name,
    & ident_Enum<int>::name,
    & ident_EEnum<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # EEnum
    {refalrts::icIdentLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 8, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Enum
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 8, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ESwap
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 6, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Swap
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 6, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Extern
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Forward
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icIdent, 0, 3, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Ident
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    // # EEnum
    if( ! refalrts::ident_left(  & ident_EEnum<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Enum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Enum
    if( ! refalrts::ident_left(  & ident_Enum<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Enum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    // # ESwap
    if( ! refalrts::ident_left(  & ident_ESwap<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Swap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Swap
    if( ! refalrts::ident_left(  & ident_Swap<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Swap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Extern
    if( ! refalrts::ident_left(  & ident_Extern<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], AddExtern, "AddExtern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Forward
    if( ! refalrts::ident_left(  & ident_Forward<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], DontAdd, "DontAdd" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[4], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
  // # Ident
  if( ! refalrts::ident_left(  & ident_Ident<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_Stub<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DontAdd, "DontAdd" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[4], & ident_GN_Entry<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ST_AddExtern, "ST_AddExtern" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //5: t.ErrorList#1/1
    //6: t.SymTable#1/1
    //7: s.ScopeClass#1/1
    //8: s.LnNum#1/1
    //9: e.Name#1/1
    // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 9, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 9},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //5: t.ErrorList#1/1
  //6: t.SymTable#1/1
  //7: s.ScopeClass#1/1
  //8: s.LnNum#1/1
  //9: e.Name#1/1
  // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = context[0];
  context[10] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ST_AddExtern, "ST_AddExtern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //2: t.ErrorList#1/1
    //3: t.SymTable#1/1
    //4: s.ScopeClass#1/1
    //5: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    // Unused closed variable e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 3},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: t.ErrorList#1/1
  //3: t.SymTable#1/1
  //4: s.ScopeClass#1/1
  //5: s.LnNum#1/1
  // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenFunctionsFromDirective, "GenFunctionsFromDirective" },
    { ParseNameList, "ParseNameList" },
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ST_AddDefined, "ST_AddDefined" },
    { ParseFunction, "ParseFunction" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Entry<int>::name,
    & ident_GN_Entry<int>::name,
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"function name", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +43, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: t.ErrorList#1/1
    //15: t.SymTable#1/1
    //16: e.Tail#1/1
    //18: s.LnNum#1/1
    //19: e.Name#1/1
    //21: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 # Entry ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icContextSet, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 18, 2},
    {refalrts::icContextSet, 0, 19, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 21, 19, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 3, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: t.ErrorList#1/1
    //10: t.SymTable#1/1
    //11: t.Unexpected#1/1
    //12: e.Tail#1/1
    //14: t.Unexpected#1/2
    // t.ErrorList#1 t.SymTable#1 # Entry t.Unexpected#1 e.Tail#1
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::icContextSet, 0, 12, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 14, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icLinkBrackets, 2, 3, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: t.ErrorList#1/1
    //11: t.SymTable#1/1
    //12: s.Directive#1/1
    //13: e.Tail#1/1
    // t.ErrorList#1 t.SymTable#1 s.Directive#1 e.Tail#1
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //14: t.ErrorList#1/1
    //15: t.SymTable#1/1
    //16: e.Tail#1/1
    //18: s.LnNum#1/1
    //19: e.Name#1/1
    //21: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 # Entry ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] ) )
      continue;
    context[16] = context[0];
    context[17] = context[1];
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    context[19] = context[2];
    context[20] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[21], context[22], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[7], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[19], context[20] );
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
    //9: t.ErrorList#1/1
    //10: t.SymTable#1/1
    //11: t.Unexpected#1/1
    //12: e.Tail#1/1
    //14: t.Unexpected#1/2
    // t.ErrorList#1 t.SymTable#1 # Entry t.Unexpected#1 e.Tail#1
    if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
      continue;
    context[12] = context[0];
    context[13] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[14], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "function name", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    refalrts::link_brackets( context[2], context[3] );
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
  //10: t.ErrorList#1/1
  //11: t.SymTable#1/1
  //12: s.Directive#1/1
  //13: e.Tail#1/1
  // t.ErrorList#1 t.SymTable#1 s.Directive#1 e.Tail#1
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[0];
  context[14] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ParseNameList, "ParseNameList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], GenFunctionsFromDirective, "GenFunctionsFromDirective" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_stvar( res, context[10] );
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

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseNameList_Tail, "ParseNameList_Tail" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"function name", 13}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: e.AST#1/1
    //17: t.ErrorList#1/1
    //18: t.SymTable#1/1
    //19: s.ASTItem#1/1
    //20: s.TableChangeFunc#1/1
    //21: s.ScopeClass#1/1
    //22: e.Tail#1/1
    //24: s.LnNum#1/1
    //25: e.Name#1/1
    //27: s.ASTItem#1/2
    //28: s.ScopeClass#1/2
    //29: s.ScopeClass#1/3
    //30: e.Name#1/2
    //32: s.TableChangeFunc#1/2
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::ictVarLeft, 0, 17, 0},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 19, 0},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 22, 0},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 27, 19, 0},
    {refalrts::icCopySTVar, 28, 21, 0},
    {refalrts::icCopySTVar, 29, 28, 0},
    {refalrts::icCopyEVar, 30, 25, 0},
    {refalrts::icCopySTVar, 32, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.AST#1/1
    //13: t.ErrorList#1/1
    //14: t.SymTable#1/1
    //15: s.ASTItem#1/1
    //16: s.TableChangeFunc#1/1
    //17: s.ScopeClass#1/1
    //18: t.Unexpected#1/1
    //19: e.Tail#1/1
    //21: t.Unexpected#1/2
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 21, 18, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 11},
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
    //15: e.AST#1/1
    //17: t.ErrorList#1/1
    //18: t.SymTable#1/1
    //19: s.ASTItem#1/1
    //20: s.TableChangeFunc#1/1
    //21: s.ScopeClass#1/1
    //22: e.Tail#1/1
    //24: s.LnNum#1/1
    //25: e.Name#1/1
    //27: s.ASTItem#1/2
    //28: s.ScopeClass#1/2
    //29: s.ScopeClass#1/3
    //30: e.Name#1/2
    //32: s.TableChangeFunc#1/2
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::tvar_left( context[17], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    context[22] = context[0];
    context[23] = context[1];
    if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[27], context[19]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[21]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[28]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[25], context[26]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], ParseNameList_Tail, "ParseNameList_Tail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_stvar( res, context[27] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[15], context[16] );
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
  //11: e.AST#1/1
  //13: t.ErrorList#1/1
  //14: t.SymTable#1/1
  //15: s.ASTItem#1/1
  //16: s.TableChangeFunc#1/1
  //17: s.ScopeClass#1/1
  //18: t.Unexpected#1/1
  //19: e.Tail#1/1
  //21: t.Unexpected#1/2
  // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[21], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "function name", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[14] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { ParseNameList, "ParseNameList" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkSemicolon<int>::name,
    & ident_TkComma<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"comma or semicolon", 18}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.AST#1/1
    //13: t.ErrorList#1/1
    //14: t.SymTable#1/1
    //15: s.ASTItem#1/1
    //16: s.TableChangeFunc#1/1
    //17: s.ScopeClass#1/1
    //18: e.Tail#1/1
    //20: s.LnNum#1/1
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkComma s.LnNum#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: e.AST#1/1
    //10: t.ErrorList#1/1
    //11: t.SymTable#1/1
    //12: s.ASTItem#1/1
    //13: s.TableChangeFunc#1/1
    //14: s.ScopeClass#1/1
    //15: e.Tail#1/1
    //17: s.LnNum#1/1
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::ictVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 17, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.AST#1/1
    //13: t.ErrorList#1/1
    //14: t.SymTable#1/1
    //15: s.ASTItem#1/1
    //16: s.TableChangeFunc#1/1
    //17: s.ScopeClass#1/1
    //18: t.Unexpected#1/1
    //19: e.Tail#1/1
    //21: t.Unexpected#1/2
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 21, 18, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //11: e.AST#1/1
    //13: t.ErrorList#1/1
    //14: t.SymTable#1/1
    //15: s.ASTItem#1/1
    //16: s.TableChangeFunc#1/1
    //17: s.ScopeClass#1/1
    //18: e.Tail#1/1
    //20: s.LnNum#1/1
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkComma s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkComma<int>::name, context[4], context[5] ) )
      continue;
    context[18] = context[0];
    context[19] = context[1];
    if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], ParseNameList, "ParseNameList" ) )
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
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    //8: e.AST#1/1
    //10: t.ErrorList#1/1
    //11: t.SymTable#1/1
    //12: s.ASTItem#1/1
    //13: s.TableChangeFunc#1/1
    //14: s.ScopeClass#1/1
    //15: e.Tail#1/1
    //17: s.LnNum#1/1
    // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[4], context[5] ) )
      continue;
    context[15] = context[0];
    context[16] = context[1];
    if( ! refalrts::svar_left( context[17], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_stvar( res, context[10] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[8], context[9] );
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
  //11: e.AST#1/1
  //13: t.ErrorList#1/1
  //14: t.SymTable#1/1
  //15: s.ASTItem#1/1
  //16: s.TableChangeFunc#1/1
  //17: s.ScopeClass#1/1
  //18: t.Unexpected#1/1
  //19: e.Tail#1/1
  //21: t.Unexpected#1/2
  // ( e.AST#1 ) t.ErrorList#1 t.SymTable#1 s.ASTItem#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[21], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[14] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"lambda_", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.Number#1/1
    //9: e.Name#1/1
    // e.Name#1 s.Number#1
    {refalrts::icsVarRight, 0, 8, 0},
    {refalrts::icContextSet, 0, 9, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icChar, 0, '_', 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 9},
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
  //8: s.Number#1/1
  //9: e.Name#1/1
  // e.Name#1 s.Number#1
  if( ! refalrts::svar_right( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = context[0];
  context[10] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "lambda_", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[4], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateLambdaName, "CreateLambdaName" },
    { GenFunctionBody, "GenFunctionBody" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Local<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Name#1/1
    //19: s.Number#3/1
    //20: e.Sentences#3/1
    //22: e.Name#1/2
    // ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icsVarLeft, 0, 19, 4},
    {refalrts::icContextSet, 0, 20, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 22, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 17},
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
  //17: e.Name#1/1
  //19: s.Number#3/1
  //20: e.Sentences#3/1
  //22: e.Name#1/2
  // ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
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
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::svar_left( context[19], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = context[4];
  context[21] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[22], context[23], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], GenFunctionBody, "GenFunctionBody" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_GN_Local<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], CreateLambdaName, "CreateLambdaName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::link_brackets( context[11], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenFunctionBody, "GenFunctionBody" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.Name#1/1
    //15: s.ScopeClass#1/1
    //16: s.Number#3/1
    //17: e.Sentences#3/1
    //19: e.Name#1/2
    // s.ScopeClass#1 ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icContextSet, 0, 13, 4},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 16, 2},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 13, 0},
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
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 15},
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
  //13: e.Name#1/1
  //15: s.ScopeClass#1/1
  //16: s.Number#3/1
  //17: e.Sentences#3/1
  //19: e.Name#1/2
  // s.ScopeClass#1 ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[4];
  context[14] = context[5];
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[19], context[20], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], GenFunctionBody, "GenFunctionBody" ) )
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
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseFunction_1, "lambda_ParseFunction_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { lambda_ParseFunction_0, "lambda_ParseFunction_0" },
    { Map, "Map" },
    { Cntx_Destroy, "Cntx_Destroy" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //31: e.Name#1/1
    //33: s.ScopeClass#1/1
    //34: s.NextNumber#2/1
    //35: t.ErrorList#2/1
    //36: t.SymTable#2/1
    //37: e.Tail#2/1
    //39: t.Context#2/1
    //40: t.MainBody#2/1
    //41: e.FunctionBodies#2/1
    //43: e.Name#1/2
    // ( e.Name#1 ) s.ScopeClass#1 ( s.NextNumber#2 e.FunctionBodies#2 t.MainBody#2 ) t.ErrorList#2 t.SymTable#2 ( t.Context#2 ) e.Tail#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 31, 2},
    {refalrts::icsVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 34, 4},
    {refalrts::ictVarLeft, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 36, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::ictVarLeft, 0, 39, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::ictVarRight, 0, 40, 4},
    {refalrts::icContextSet, 0, 41, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 43, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 5, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 1, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 11, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 39},
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
  //31: e.Name#1/1
  //33: s.ScopeClass#1/1
  //34: s.NextNumber#2/1
  //35: t.ErrorList#2/1
  //36: t.SymTable#2/1
  //37: e.Tail#2/1
  //39: t.Context#2/1
  //40: t.MainBody#2/1
  //41: e.FunctionBodies#2/1
  //43: e.Name#1/2
  // ( e.Name#1 ) s.ScopeClass#1 ( s.NextNumber#2 e.FunctionBodies#2 t.MainBody#2 ) t.ErrorList#2 t.SymTable#2 ( t.Context#2 ) e.Tail#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[31] = context[2];
  context[32] = context[3];
  if( ! refalrts::svar_left( context[33], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[34], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[35], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[36], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[37] = context[0];
  context[38] = context[1];
  if( ! refalrts::tvar_left( context[39], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_right( context[40], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[41] = context[4];
  context[42] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[43], context[44], context[31], context[32]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Cntx_Destroy, "Cntx_Destroy" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], lambda_ParseFunction_0, "lambda_ParseFunction_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], lambda_ParseFunction_1, "lambda_ParseFunction_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_stvar( res, context[36] );
  res = refalrts::splice_stvar( res, context[35] );
  refalrts::link_brackets( context[11], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[21] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[23] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::link_brackets( context[26], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_stvar( res, context[33] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_stvar( res, context[40] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[39] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { lambda_ParseFunction_2, "lambda_ParseFunction_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_Create, "Cntx_Create" },
    { ParseBlock, "ParseBlock" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkOpenBlock<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"open brace", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +64, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: s.ScopeClass#1/1
    //25: e.Name#1/1
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    {refalrts::icsVarLeft, 0, 24, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icsVarLeft, 0, 31, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 5, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 4, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icInt, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 3, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.ScopeClass#1/1
    //12: t.ErrorList#1/1
    //13: t.SymTable#1/1
    //14: t.Unexpected#1/1
    //15: e.Tail#1/1
    //17: t.Unexpected#1/2
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 t.Unexpected#1 e.Tail#1
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    // Unused closed variable e.Name#1
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 17, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
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
    //24: s.ScopeClass#1/1
    //25: e.Name#1/1
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    if( ! refalrts::svar_left( context[24], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[4], context[5] ) )
      continue;
    context[29] = context[0];
    context[30] = context[1];
    if( ! refalrts::svar_left( context[31], context[4], context[5] ) )
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
    if( ! refalrts::alloc_name( context[9], ParseBlock, "ParseBlock" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[11], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Cntx_Create, "Cntx_Create" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], lambda_ParseFunction_2, "lambda_ParseFunction_2" ) )
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
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[24] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
  //11: s.ScopeClass#1/1
  //12: t.ErrorList#1/1
  //13: t.SymTable#1/1
  //14: t.Unexpected#1/1
  //15: e.Tail#1/1
  //17: t.Unexpected#1/2
  // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 t.Unexpected#1 e.Tail#1
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Name#1
  if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[0];
  context[16] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[17], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "open brace", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[13] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ResolveLambdaName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveLambdaName, "ResolveLambdaName" },
    { CreateLambdaName, "CreateLambdaName" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkName<int>::name,
    & ident_LambdaName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.MainName#1/1
    //14: s.Number#2/1
    // ( e.MainName#1 ) ( # TkName # LambdaName s.Number#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icIdentLeft, 0, 4, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::icsVarLeft, 0, 14, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.MainName#1/1
    //16: e.SubResult#2/1
    // ( e.MainName#1 ) ( # Brackets e.SubResult#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icContextSet, 0, 16, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 6, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: e.MainName#1/1
    //20: e.Name#2/1
    //22: e.SubResult#2/1
    // ( e.MainName#1 ) ( # ADT_Brackets ( e.Name#2 ) e.SubResult#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 18, 2},
    {refalrts::icContextSet, 0, 20, 6},
    {refalrts::icContextSet, 0, 22, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.MainName#1/1
    //16: e.SubResult#2/1
    // ( e.MainName#1 ) ( # CallBrackets e.SubResult#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icContextSet, 0, 16, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 6, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: t.OtherTerm#2/1
    // ( e.MainName#1 ) t.OtherTerm#2
    {refalrts::icBracketLeft, 0, 2, 0},
    // Unused closed variable e.MainName#1
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    //12: e.MainName#1/1
    //14: s.Number#2/1
    // ( e.MainName#1 ) ( # TkName # LambdaName s.Number#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_LambdaName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::svar_left( context[14], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], CreateLambdaName, "CreateLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
    //14: e.MainName#1/1
    //16: e.SubResult#2/1
    // ( e.MainName#1 ) ( # Brackets e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[4];
    context[17] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
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
    //18: e.MainName#1/1
    //20: e.Name#2/1
    //22: e.SubResult#2/1
    // ( e.MainName#1 ) ( # ADT_Brackets ( e.Name#2 ) e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[18] = context[2];
    context[19] = context[3];
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[4];
    context[23] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //14: e.MainName#1/1
    //16: e.SubResult#2/1
    // ( e.MainName#1 ) ( # CallBrackets e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[4];
    context[17] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
  //4: t.OtherTerm#2/1
  // ( e.MainName#1 ) t.OtherTerm#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.MainName#1
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: e.MainName#1/1
    //15: e.Result#1/1
    // ( e.MainName#1 ) e.Result#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::icContextSet, 0, 15, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //13: e.MainName#1/1
  //15: e.Result#1/1
  // ( e.MainName#1 ) e.Result#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[2];
  context[14] = context[3];
  context[15] = context[0];
  context[16] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[9] );
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

static refalrts::FnResult lambda_GenFunctionBody_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveLambdaName, "ResolveLambdaName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.MainName#1/1
    //23: e.Pattern#2/1
    //25: e.Result#2/1
    // ( e.MainName#1 ) ( ( e.Pattern#2 ) ( e.Result#2 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icBracketLeft, 0, 8, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 6},
    {refalrts::icContextSet, 0, 25, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 13, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 23},
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
  //21: e.MainName#1/1
  //23: e.Pattern#2/1
  //25: e.Result#2/1
  // ( e.MainName#1 ) ( ( e.Pattern#2 ) ( e.Result#2 ) )
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
  if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[2];
  context[22] = context[3];
  context[23] = context[6];
  context[24] = context[7];
  context[25] = context[8];
  context[26] = context[9];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ResolveLambdaName, "ResolveLambdaName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[13], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //23: s.ScopeClass#1/1
    //24: e.MainName#1/1
    //26: e.Name#1/1
    //28: e.Sentences#1/1
    // s.ScopeClass#1 ( e.MainName#1 ) ( e.Name#1 ) e.Sentences#1
    {refalrts::icsVarLeft, 0, 23, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icContextSet, 0, 28, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 6, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 12, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 23},
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
  //23: s.ScopeClass#1/1
  //24: e.MainName#1/1
  //26: e.Name#1/1
  //28: e.Sentences#1/1
  // s.ScopeClass#1 ( e.MainName#1 ) ( e.Name#1 ) e.Sentences#1
  if( ! refalrts::svar_left( context[23], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = context[2];
  context[25] = context[3];
  context[26] = context[4];
  context[27] = context[5];
  context[28] = context[0];
  context[29] = context[1];

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
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[12], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Cntx_PushScope, "Cntx_PushScope" },
    { DoParseBlock, "DoParseBlock" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Functions#1/1
    //16: t.ErrorList#1/1
    //17: t.SymTable#1/1
    //18: t.Context#1/1
    //19: e.Tokens#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 e.Tokens#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::ictVarLeft, 0, 16, 0},
    {refalrts::ictVarLeft, 0, 17, 0},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 14},
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
  //14: e.Functions#1/1
  //16: t.ErrorList#1/1
  //17: t.SymTable#1/1
  //18: t.Context#1/1
  //19: e.Tokens#1/1
  // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 e.Tokens#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = context[2];
  context[15] = context[3];
  if( ! refalrts::tvar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = context[0];
  context[20] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DoParseBlock, "DoParseBlock" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Cntx_PushScope, "Cntx_PushScope" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
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
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[16] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoParseBlock_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AddContextToSentence, "AddContextToSentence" },
    { Map, "Map" },
    { Inc, "Inc" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //21: s.Number#1/1
    //22: e.Functions#1/1
    //24: e.Sentences#1/1
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#2/1
    //29: e.FreeContext#2/1
    //31: s.Number#1/2
    //32: e.FreeContext#2/2
    // s.Number#1 ( e.Functions#1 ) ( e.Sentences#1 ) t.ErrorList#1 t.SymTable#1 t.Context#2 e.FreeContext#2
    {refalrts::icsVarLeft, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icContextSet, 0, 24, 4},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 31, 21, 0},
    {refalrts::icCopyEVar, 32, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 6, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 10, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 21},
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
  //21: s.Number#1/1
  //22: e.Functions#1/1
  //24: e.Sentences#1/1
  //26: t.ErrorList#1/1
  //27: t.SymTable#1/1
  //28: t.Context#2/1
  //29: e.FreeContext#2/1
  //31: s.Number#1/2
  //32: e.FreeContext#2/2
  // s.Number#1 ( e.Functions#1 ) ( e.Sentences#1 ) t.ErrorList#1 t.SymTable#1 t.Context#2 e.FreeContext#2
  if( ! refalrts::svar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = context[2];
  context[23] = context[3];
  context[24] = context[4];
  context[25] = context[5];
  if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = context[0];
  context[30] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[31], context[21]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[32], context[33], context[29], context[30]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], AddContextToSentence, "AddContextToSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_stvar( res, context[28] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[27] );
  res = refalrts::splice_stvar( res, context[26] );
  refalrts::link_brackets( context[6], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[10], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  refalrts::link_brackets( context[13], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[31] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseSentence, "ParseSentence" },
    { DoParseBlock, "DoParseBlock" },
    { Cntx_PopScope, "Cntx_PopScope" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { Inc, "Inc" },
    { lambda_DoParseBlock_0, "lambda_DoParseBlock_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkEOF<int>::name,
    & ident_TkCloseBlock<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected EOF, expected \"}\"", 28}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: s.Number#1/1
    //23: e.Functions#1/1
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: t.Context#1/1
    //28: e.Sentences#1/1
    //30: e.Tail#1/1
    //32: s.LnNumber#1/1
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkCloseBlock s.LnNumber#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 1, 6},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 0},
    {refalrts::icsVarLeft, 0, 32, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 7, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 6, 14},
    {refalrts::icFunc, 0, 5, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +76, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: s.Number#1/1
    //29: e.Functions#1/1
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.Sentences#1/1
    //36: e.Tail#1/1
    //38: s.LnNum#1/1
    //39: s.Number#1/2
    //40: s.LnNum#1/2
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkEOF s.LnNum#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 28, 2},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 28, 0},
    {refalrts::icCopySTVar, 40, 38, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 4, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icString, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 2, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 20, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 8, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //16: e.Functions#1/1
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: t.Context#1/1
    //21: e.Sentences#1/1
    //23: e.Tokens#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icContextSet, 0, 23, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    //22: s.Number#1/1
    //23: e.Functions#1/1
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: t.Context#1/1
    //28: e.Sentences#1/1
    //30: e.Tail#1/1
    //32: s.LnNumber#1/1
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkCloseBlock s.LnNumber#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[6], context[7] ) )
      continue;
    context[28] = context[4];
    context[29] = context[5];
    context[30] = context[0];
    context[31] = context[1];
    if( ! refalrts::svar_left( context[32], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_DoParseBlock_0, "lambda_DoParseBlock_0" ) )
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
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //28: s.Number#1/1
    //29: e.Functions#1/1
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.Sentences#1/1
    //36: e.Tail#1/1
    //38: s.LnNum#1/1
    //39: s.Number#1/2
    //40: s.LnNum#1/2
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkEOF s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[6], context[7] ) )
      continue;
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[39], context[28]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[38]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], "Unexpected EOF, expected \"}\"", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], & ident_TkEOF<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[25], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[32] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[8], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //16: e.Functions#1/1
  //18: t.ErrorList#1/1
  //19: t.SymTable#1/1
  //20: t.Context#1/1
  //21: e.Sentences#1/1
  //23: e.Tokens#1/1
  // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = context[2];
  context[17] = context[3];
  if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[4];
  context[22] = context[5];
  context[23] = context[0];
  context[24] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], DoParseBlock, "DoParseBlock" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParseSentence, "ParseSentence" ) )
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
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[19] );
  res = refalrts::splice_stvar( res, context[18] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateContext, "CreateContext" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Context#1/1
    //19: e.Pattern#1/1
    //21: e.Result#1/1
    // e.Context#1 ( ( e.Pattern#1 ) ( e.Result#1 ) )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icContextSet, 0, 19, 4},
    {refalrts::icContextSet, 0, 21, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
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
  //17: e.Context#1/1
  //19: e.Pattern#1/1
  //21: e.Result#1/1
  // e.Context#1 ( ( e.Pattern#1 ) ( e.Result#1 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
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
  context[17] = context[0];
  context[18] = context[1];
  context[19] = context[4];
  context[20] = context[5];
  context[21] = context[6];
  context[22] = context[7];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[9], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
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

static refalrts::FnResult lambda_CreateContext_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //11: e.Index#2/1
    // ( 'e e.Index#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icChar, 0, 'e', 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 4, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: s.Mode#2/1
    //8: e.Index#2/1
    // ( s.Mode#2 e.Index#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icContextSet, 0, 8, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
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
    //11: e.Index#2/1
    // ( 'e e.Index#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[11] = context[2];
    context[12] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
  //7: s.Mode#2/1
  //8: e.Index#2/1
  // ( s.Mode#2 e.Index#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = context[2];
  context[9] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TkVariable<int>::name ) )
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
#endif
}

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CreateContext_0, "lambda_CreateContext_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Context#1/1
    // e.Context#1
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
  //6: e.Context#1/1
  // e.Context#1
  context[6] = context[0];
  context[7] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], lambda_CreateContext_0, "lambda_CreateContext_0" ) )
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

static refalrts::FnResult lambda_ParseSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkReplace<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Incorrect pattern termination", 29}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: t.ErrorList#2/1
    //9: t.SymTable#2/1
    //10: t.Context#2/1
    //11: e.Pattern#2/1
    //13: e.Tokens#2/1
    //15: s.LnNum#2/1
    // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( # TkReplace s.LnNum#2 ) e.Tokens#2
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 15, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //13: t.ErrorList#2/1
    //14: t.SymTable#2/1
    //15: t.Context#2/1
    //16: e.Pattern#2/1
    //18: e.Tokens#2/1
    //20: s.NextResultTerm#2/1
    //21: s.LnNum#2/1
    // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( s.NextResultTerm#2 s.LnNum#2 e.Info#2 ) e.Tokens#2
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icsVarLeft, 0, 20, 4},
    {refalrts::icsVarLeft, 0, 21, 4},
    // Unused closed variable e.Info#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 13},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //8: t.ErrorList#2/1
    //9: t.SymTable#2/1
    //10: t.Context#2/1
    //11: e.Pattern#2/1
    //13: e.Tokens#2/1
    //15: s.LnNum#2/1
    // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( # TkReplace s.LnNum#2 ) e.Tokens#2
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkReplace<int>::name, context[4], context[5] ) )
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
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //13: t.ErrorList#2/1
  //14: t.SymTable#2/1
  //15: t.Context#2/1
  //16: e.Pattern#2/1
  //18: e.Tokens#2/1
  //20: s.NextResultTerm#2/1
  //21: s.LnNum#2/1
  // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( s.NextResultTerm#2 s.LnNum#2 e.Info#2 ) e.Tokens#2
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
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
  context[18] = context[0];
  context[19] = context[1];
  if( ! refalrts::svar_left( context[20], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Info#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Incorrect pattern termination", 29 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_stvar( res, context[14] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //17: e.Functions#1/1
    //19: t.ErrorList#2/1
    //20: t.SymTable#2/1
    //21: t.Context#2/1
    //22: e.Pattern#2/1
    //24: e.Tokens#2/1
    // ( e.Functions#1 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) e.Tokens#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 22, 4},
    {refalrts::icContextSet, 0, 24, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 22},
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
  //17: e.Functions#1/1
  //19: t.ErrorList#2/1
  //20: t.SymTable#2/1
  //21: t.Context#2/1
  //22: e.Pattern#2/1
  //24: e.Tokens#2/1
  // ( e.Functions#1 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) e.Tokens#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = context[4];
  context[23] = context[5];
  context[24] = context[0];
  context[25] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParseResult, "ParseResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[21] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[19] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
    { EL_AddUnexpected, "EL_AddUnexpected" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseBlock<int>::name,
    & ident_TkSemicolon<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"semicolon", 9},
    {"Missed semicolon", 16}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Sentences#1/1
    //27: e.Pattern#2/1
    //29: e.Functions#2/1
    //31: t.ErrorList#2/1
    //32: t.SymTable#2/1
    //33: t.Context#2/1
    //34: e.Result#2/1
    //36: e.Tokens#2/1
    //38: s.LnNum#2/1
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkSemicolon s.LnNum#2 ) e.Tokens#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icContextSet, 0, 34, 8},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 17, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +80, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Sentences#1/1
    //35: e.Pattern#2/1
    //37: e.Functions#2/1
    //39: t.ErrorList#2/1
    //40: t.SymTable#2/1
    //41: t.Context#2/1
    //42: e.Result#2/1
    //44: e.Tokens#2/1
    //46: s.LnNum#2/1
    //47: s.LnNum#2/2
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkCloseBlock s.LnNum#2 ) e.Tokens#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::ictVarLeft, 0, 39, 0},
    {refalrts::ictVarLeft, 0, 40, 0},
    {refalrts::ictVarLeft, 0, 41, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 0, 10},
    {refalrts::icContextSet, 0, 42, 8},
    {refalrts::icContextSet, 0, 44, 0},
    {refalrts::icsVarLeft, 0, 46, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icString, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 0, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 22, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: e.Sentences#1/1
    //30: e.Pattern#2/1
    //32: e.Functions#2/1
    //34: t.ErrorList#2/1
    //35: t.SymTable#2/1
    //36: t.Context#2/1
    //37: e.Result#2/1
    //39: t.Unexpected#2/1
    //40: e.Tokens#2/1
    //42: t.Unexpected#2/2
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) t.Unexpected#2 e.Tokens#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 28, 2},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 6},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::ictVarLeft, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 36, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::ictVarLeft, 0, 39, 0},
    {refalrts::icContextSet, 0, 40, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 42, 39, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icLinkBrackets, 20, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    //25: e.Sentences#1/1
    //27: e.Pattern#2/1
    //29: e.Functions#2/1
    //31: t.ErrorList#2/1
    //32: t.SymTable#2/1
    //33: t.Context#2/1
    //34: e.Result#2/1
    //36: e.Tokens#2/1
    //38: s.LnNum#2/1
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkSemicolon s.LnNum#2 ) e.Tokens#2
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
    context[25] = context[2];
    context[26] = context[3];
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[6];
    context[30] = context[7];
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[10], context[11] ) )
      continue;
    context[34] = context[8];
    context[35] = context[9];
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[17], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[18], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_stvar( res, context[31] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[29], context[30] );
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
    //33: e.Sentences#1/1
    //35: e.Pattern#2/1
    //37: e.Functions#2/1
    //39: t.ErrorList#2/1
    //40: t.SymTable#2/1
    //41: t.Context#2/1
    //42: e.Result#2/1
    //44: e.Tokens#2/1
    //46: s.LnNum#2/1
    //47: s.LnNum#2/2
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkCloseBlock s.LnNum#2 ) e.Tokens#2
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
    context[33] = context[2];
    context[34] = context[3];
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];
    if( ! refalrts::tvar_left( context[39], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[40], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[41], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[10], context[11] ) )
      continue;
    context[42] = context[8];
    context[43] = context[9];
    context[44] = context[0];
    context[45] = context[1];
    if( ! refalrts::svar_left( context[46], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[47], context[46]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Missed semicolon", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], & ident_TkCloseBlock<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[44], context[45] );
    refalrts::link_brackets( context[30], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[22], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[23], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[40] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[37], context[38] );
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
  //28: e.Sentences#1/1
  //30: e.Pattern#2/1
  //32: e.Functions#2/1
  //34: t.ErrorList#2/1
  //35: t.SymTable#2/1
  //36: t.Context#2/1
  //37: e.Result#2/1
  //39: t.Unexpected#2/1
  //40: e.Tokens#2/1
  //42: t.Unexpected#2/2
  // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) t.Unexpected#2 e.Tokens#2
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
  context[28] = context[2];
  context[29] = context[3];
  context[30] = context[4];
  context[31] = context[5];
  context[32] = context[6];
  context[33] = context[7];
  if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[35], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[36], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[37] = context[8];
  context[38] = context[9];
  if( ! refalrts::tvar_left( context[39], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[40] = context[0];
  context[41] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[42], context[39]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], EL_AddUnexpected, "EL_AddUnexpected" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "semicolon", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_stvar( res, context[42] );
  refalrts::link_brackets( context[20], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::link_brackets( context[21], context[26] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::link_brackets( context[24], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[22], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[36] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[35] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_stvar( res, context[39] );
  res = refalrts::splice_stvar( res, context[34] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseSentence_2, "lambda_ParseSentence_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_ParseSentence_1, "lambda_ParseSentence_1" },
    { lambda_ParseSentence_0, "lambda_ParseSentence_0" },
    { Seq, "Seq" },
    { ParsePattern, "ParsePattern" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.Functions#1/1
    //34: t.ErrorList#1/1
    //35: t.SymTable#1/1
    //36: t.Context#1/1
    //37: e.Sentences#1/1
    //39: e.Tokens#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::ictVarLeft, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 36, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 37, 4},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 6, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 5, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 4, 16},
    {refalrts::icFunc, 0, 3, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icFunc, 0, 2, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 1, 25},
    {refalrts::icFunc, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
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
  //32: e.Functions#1/1
  //34: t.ErrorList#1/1
  //35: t.SymTable#1/1
  //36: t.Context#1/1
  //37: e.Sentences#1/1
  //39: e.Tokens#1/1
  // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[32] = context[2];
  context[33] = context[3];
  if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[35], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[36], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[37] = context[4];
  context[38] = context[5];
  context[39] = context[0];
  context[40] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
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
  if( ! refalrts::alloc_name( context[17], lambda_ParseSentence_0, "lambda_ParseSentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_ParseSentence_1, "lambda_ParseSentence_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], lambda_ParseSentence_2, "lambda_ParseSentence_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[24] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::link_brackets( context[27], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[36] );
  res = refalrts::splice_stvar( res, context[35] );
  res = refalrts::splice_stvar( res, context[34] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParsePattern, "ParsePattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //20: t.SymTable#1/1
    //21: e.MultiBracket#1/1
    //23: e.Scanned#1/1
    //25: e.Index#1/1
    //27: e.Tail#1/1
    //29: t.ErrorList#2/1
    //30: t.Context#2/1
    //31: s.Mode#2/1
    //32: s.Depth#2/1
    // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 4},
    {refalrts::icContextSet, 0, 25, 6},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::icsVarLeft, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 32, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 29},
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
  //20: t.SymTable#1/1
  //21: e.MultiBracket#1/1
  //23: e.Scanned#1/1
  //25: e.Index#1/1
  //27: e.Tail#1/1
  //29: t.ErrorList#2/1
  //30: t.Context#2/1
  //31: s.Mode#2/1
  //32: s.Depth#2/1
  // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
  if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
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
  if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[31], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[32], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], & ident_TkVariable<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::link_brackets( context[14], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[15], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[32] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_stvar( res, context[31] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[30] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[29] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParsePattern, "ParsePattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //20: t.SymTable#1/1
    //21: e.MultiBracket#1/1
    //23: e.Scanned#1/1
    //25: e.Index#1/1
    //27: e.Tail#1/1
    //29: t.ErrorList#2/1
    //30: t.Context#2/1
    //31: s.Mode#2/1
    //32: s.Depth#2/1
    // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 4},
    {refalrts::icContextSet, 0, 25, 6},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::icsVarLeft, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 32, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 29},
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
  //20: t.SymTable#1/1
  //21: e.MultiBracket#1/1
  //23: e.Scanned#1/1
  //25: e.Index#1/1
  //27: e.Tail#1/1
  //29: t.ErrorList#2/1
  //30: t.Context#2/1
  //31: s.Mode#2/1
  //32: s.Depth#2/1
  // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
  if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
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
  if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[31], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[32], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], & ident_TkVariable<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::link_brackets( context[14], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[15], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[32] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_stvar( res, context[31] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[30] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[29] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ParsePattern, "ParsePattern" },
    { ST_GetAnyName, "ST_GetAnyName" },
    { ST_AddFunctionCall, "ST_AddFunctionCall" },
    { lambda_ParsePattern_1, "lambda_ParsePattern_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_AddVariable, "Cntx_AddVariable" },
    { CheckAddVariable, "CheckAddVariable" },
    { Fetch, "Fetch" },
    { lambda_ParsePattern_0, "lambda_ParsePattern_0" },
    { Cntx_AddNewVariable, "Cntx_AddNewVariable" },
    { ST_AddIdent, "ST_AddIdent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Close<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Open<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_TkRedefinition<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkIdentMarker<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unbalanced bracket \"", 20},
    {"Unexpected call bracket in pattern expression", 45},
    {"Expected name after \"[\"", 23},
    {"Naked redefinition sign", 23},
    {"Missed name after \'#\'", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: t.Context#1/1
    //21: e.MultiBrackets#1/1
    //23: e.Scanned#1/1
    //25: e.Tail#1/1
    //27: s.LnNum#1/1
    //28: s.Char#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 16, 6},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 4},
    {refalrts::icContextSet, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 27, 6},
    {refalrts::icsVarLeft, 0, 28, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 16, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: t.Context#1/1
    //21: e.MultiBrackets#1/1
    //23: e.Scanned#1/1
    //25: e.Tail#1/1
    //27: s.LnNum#1/1
    //28: s.Number#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 18, 0},
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 15, 6},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::icContextSet, 0, 23, 4},
    {refalrts::icContextSet, 0, 25, 0},
    {refalrts::icsVarLeft, 0, 27, 6},
    {refalrts::icsVarLeft, 0, 28, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 15, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: t.ErrorList#1/1
    //22: t.SymTable#1/1
    //23: t.Context#1/1
    //24: e.MultiBrackets#1/1
    //26: e.Scanned#1/1
    //28: e.Tail#1/1
    //30: s.LnNum#1/1
    //31: e.Name#1/1
    //33: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::ictVarLeft, 0, 22, 0},
    {refalrts::ictVarLeft, 0, 23, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 8, 6},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icContextSet, 0, 28, 0},
    {refalrts::icsVarLeft, 0, 30, 6},
    {refalrts::icContextSet, 0, 31, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 33, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 8, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 15, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //23: t.ErrorList#1/1
    //24: t.SymTable#1/1
    //25: t.Context#1/1
    //26: e.MultiBrackets#1/1
    //28: e.Scanned#1/1
    //30: e.Tail#1/1
    //32: s.LnNumMarker#1/1
    //33: s.LnNumName#1/1
    //34: e.Name#1/1
    //36: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNumMarker#1 ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 23, 0},
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 13, 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 8, 8},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 0},
    {refalrts::icsVarLeft, 0, 32, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icsVarLeft, 0, 33, 8},
    {refalrts::icContextSet, 0, 34, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 36, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 12, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 14, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //20: t.ErrorList#1/1
    //21: t.SymTable#1/1
    //22: t.Context#1/1
    //23: e.MultiBrackets#1/1
    //25: e.Scanned#1/1
    //27: e.Tail#1/1
    //29: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::ictVarLeft, 0, 22, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 13, 6},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 0},
    {refalrts::icsVarLeft, 0, 29, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 4, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.LnNumVar#1/1
    //39: s.Mode#1/1
    //40: e.Index#1/1
    //42: s.LnNumRedef#1/1
    //43: e.Index#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNumVar#1 s.Mode#1 e.Index#1 ) ( # TkRedefinition s.LnNumRedef#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 12, 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 11, 8},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 6},
    {refalrts::icsVarLeft, 0, 39, 6},
    {refalrts::icContextSet, 0, 40, 6},
    {refalrts::icsVarLeft, 0, 42, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 43, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 9, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 8, 13},
    {refalrts::icFunc, 0, 11, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 6, 17},
    {refalrts::icFunc, 0, 10, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: t.Context#1/1
    //30: e.MultiBracket#1/1
    //32: e.Scanned#1/1
    //34: e.Tail#1/1
    //36: s.LnNum#1/1
    //37: s.Mode#1/1
    //38: e.Index#1/1
    //40: e.Index#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 12, 6},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 0},
    {refalrts::icsVarLeft, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 37, 6},
    {refalrts::icContextSet, 0, 38, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 40, 38, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 9, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 8, 11},
    {refalrts::icFunc, 0, 7, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 6, 15},
    {refalrts::icFunc, 0, 5, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //20: t.ErrorList#1/1
    //21: t.SymTable#1/1
    //22: t.Context#1/1
    //23: e.MultiBracket#1/1
    //25: e.Scanned#1/1
    //27: e.Tail#1/1
    //29: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkRedefinition s.LnNum#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::ictVarLeft, 0, 22, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 11, 6},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 0},
    {refalrts::icsVarLeft, 0, 29, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 3, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //19: t.ErrorList#1/1
    //20: t.SymTable#1/1
    //21: t.Context#1/1
    //22: e.MultiBracket#1/1
    //24: e.Scanned#1/1
    //26: e.Tail#1/1
    //28: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenBracket ) e.Tail#1
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icIdentRight, 0, 10, 6},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icContextSet, 0, 24, 4},
    {refalrts::icContextSet, 0, 26, 0},
    {refalrts::icsVarLeft, 0, 28, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 2, 12},
    {refalrts::icIdent, 0, 9, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +71, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.Scanned#1/1
    //33: e.Tail#1/1
    //35: s.LnNumBracket#1/1
    //36: s.LnNumName#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumBracket#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icIdentRight, 0, 7, 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 8, 8},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 0},
    {refalrts::icsVarLeft, 0, 35, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icsVarLeft, 0, 36, 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 39, 37, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 5, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.LnNum#1/1
    //39: s.LnNum#1/2
    //40: t.SymTable#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icIdentRight, 0, 7, 6},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 39, 38, 0},
    {refalrts::icCopySTVar, 40, 30, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 5, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 3, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 21, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 22, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +62, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.LnNum#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenCall ) e.Tail#1
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icIdentRight, 0, 3, 6},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icContextSet, 0, 29, 4},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 33, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 34, 33, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 2, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //19: t.ErrorList#1/1
    //20: t.SymTable#1/1
    //21: t.Context#1/1
    //22: e.MultiBracket#1/1
    //24: e.InnerScanned#1/1
    //26: e.Tail#1/1
    //28: s.BracketsSign#1/1
    //29: s.InnerLnNum#1/1
    //30: s.CloseBracket#1/1
    //31: s.CloseBracket#1/2
    //32: e.Scanned#1/1
    //34: s.ClosedLnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.ClosedLnNum#1 s.CloseBracket#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 19, 0},
    {refalrts::ictVarLeft, 0, 20, 0},
    {refalrts::ictVarLeft, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icBracketRight, 0, 8, 2},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::icContextSet, 0, 24, 4},
    {refalrts::icContextSet, 0, 26, 0},
    {refalrts::icsVarLeft, 0, 28, 8},
    {refalrts::icsVarLeft, 0, 29, 8},
    {refalrts::icsVarLeft, 0, 30, 8},
    {refalrts::icsRepeatRight, 31, 30, 6},
    {refalrts::icContextSet, 0, 32, 8},
    {refalrts::icsVarLeft, 0, 34, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +84, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.MultiBracket#1/1
    //36: e.InnerScanned#1/1
    //38: e.Tail#1/1
    //40: s.BracketsSign#1/1
    //41: s.InnerLnNum#1/1
    //42: s.CloseBracket#1/1
    //43: e.Scanned#1/1
    //45: s.LnNum#1/1
    //46: s.OtherCloseBracket#1/1
    //47: s.BracketsSign#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.OtherCloseBracket#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icBracketRight, 0, 8, 2},
    {refalrts::icContextSet, 0, 34, 2},
    {refalrts::icContextSet, 0, 36, 4},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 8},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icsVarLeft, 0, 42, 8},
    {refalrts::icContextSet, 0, 43, 8},
    {refalrts::icsVarLeft, 0, 45, 6},
    {refalrts::icsVarLeft, 0, 46, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 47, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icChar, 0, '\"', 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 0, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.Scanned#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    //32: s.CloseBracket#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icsVarLeft, 0, 31, 6},
    {refalrts::icsVarLeft, 0, 32, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icChar, 0, '\"', 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +70, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.InnerScanned#1/1
    //33: e.Tail#1/1
    //35: s.BracketsSign#1/1
    //36: s.InnerLnNum#1/1
    //37: s.CloseBracket#1/1
    //38: e.Scanned#1/1
    //40: s.BracketsSign#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 2},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 0},
    {refalrts::icsVarLeft, 0, 35, 6},
    {refalrts::icsVarLeft, 0, 36, 6},
    {refalrts::icsVarLeft, 0, 37, 6},
    {refalrts::icContextSet, 0, 38, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 40, 35, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icChar, 0, '\"', 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: t.ErrorList#1/1
    //9: t.SymTable#1/1
    //10: t.Context#1/1
    //11: e.Pattern#1/1
    //13: e.Tail#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Pattern#1 ) e.Tail#1
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 9, 0},
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icContextSet, 0, 11, 4},
    {refalrts::icContextSet, 0, 13, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[16];
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
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: t.Context#1/1
    //21: e.MultiBrackets#1/1
    //23: e.Scanned#1/1
    //25: e.Tail#1/1
    //27: s.LnNum#1/1
    //28: s.Char#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[6], context[7] ) )
      continue;
    context[21] = context[2];
    context[22] = context[3];
    context[23] = context[4];
    context[24] = context[5];
    context[25] = context[0];
    context[26] = context[1];
    if( ! refalrts::svar_left( context[27], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[9] );
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
    //18: t.ErrorList#1/1
    //19: t.SymTable#1/1
    //20: t.Context#1/1
    //21: e.MultiBrackets#1/1
    //23: e.Scanned#1/1
    //25: e.Tail#1/1
    //27: s.LnNum#1/1
    //28: s.Number#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[18], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[6], context[7] ) )
      continue;
    context[21] = context[2];
    context[22] = context[3];
    context[23] = context[4];
    context[24] = context[5];
    context[25] = context[0];
    context[26] = context[1];
    if( ! refalrts::svar_left( context[27], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[9] );
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
    //21: t.ErrorList#1/1
    //22: t.SymTable#1/1
    //23: t.Context#1/1
    //24: e.MultiBrackets#1/1
    //26: e.Scanned#1/1
    //28: e.Tail#1/1
    //30: s.LnNum#1/1
    //31: e.Name#1/1
    //33: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[22], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[23], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[6], context[7] ) )
      continue;
    context[24] = context[2];
    context[25] = context[3];
    context[26] = context[4];
    context[27] = context[5];
    context[28] = context[0];
    context[29] = context[1];
    if( ! refalrts::svar_left( context[30], context[6], context[7] ) )
      continue;
    context[31] = context[6];
    context[32] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[33], context[34], context[31], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::link_brackets( context[15], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[16], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[23] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[9] );
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
    //23: t.ErrorList#1/1
    //24: t.SymTable#1/1
    //25: t.Context#1/1
    //26: e.MultiBrackets#1/1
    //28: e.Scanned#1/1
    //30: e.Tail#1/1
    //32: s.LnNumMarker#1/1
    //33: s.LnNumName#1/1
    //34: e.Name#1/1
    //36: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNumMarker#1 ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[23], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      continue;
    context[26] = context[2];
    context[27] = context[3];
    context[28] = context[4];
    context[29] = context[5];
    context[30] = context[0];
    context[31] = context[1];
    if( ! refalrts::svar_left( context[32], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[8], context[9] ) )
      continue;
    context[34] = context[8];
    context[35] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[36], context[37], context[34], context[35]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ST_AddIdent, "ST_AddIdent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_TkIdentifier<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::link_brackets( context[17], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[18], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[25] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[23] );
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
    //20: t.ErrorList#1/1
    //21: t.SymTable#1/1
    //22: t.Context#1/1
    //23: e.MultiBrackets#1/1
    //25: e.Scanned#1/1
    //27: e.Tail#1/1
    //29: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[22], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[6], context[7] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[0];
    context[28] = context[1];
    if( ! refalrts::svar_left( context[29], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Missed name after \'#\'", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.LnNumVar#1/1
    //39: s.Mode#1/1
    //40: e.Index#1/1
    //42: s.LnNumRedef#1/1
    //43: e.Index#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNumVar#1 s.Mode#1 e.Index#1 ) ( # TkRedefinition s.LnNumRedef#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[8], context[9] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[39], context[6], context[7] ) )
      continue;
    context[40] = context[6];
    context[41] = context[7];
    if( ! refalrts::svar_left( context[42], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[43], context[44], context[40], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Cntx_AddNewVariable, "Cntx_AddNewVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_ParsePattern_0, "lambda_ParsePattern_0" ) )
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
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_stvar( res, context[29] );
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
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: t.Context#1/1
    //30: e.MultiBracket#1/1
    //32: e.Scanned#1/1
    //34: e.Tail#1/1
    //36: s.LnNum#1/1
    //37: s.Mode#1/1
    //38: e.Index#1/1
    //40: e.Index#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[6], context[7] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[0];
    context[35] = context[1];
    if( ! refalrts::svar_left( context[36], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[6], context[7] ) )
      continue;
    context[38] = context[6];
    context[39] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[40], context[41], context[38], context[39]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Cntx_AddVariable, "Cntx_AddVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], lambda_ParsePattern_1, "lambda_ParsePattern_1" ) )
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
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //20: t.ErrorList#1/1
    //21: t.SymTable#1/1
    //22: t.Context#1/1
    //23: e.MultiBracket#1/1
    //25: e.Scanned#1/1
    //27: e.Tail#1/1
    //29: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkRedefinition s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[22], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[6], context[7] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[0];
    context[28] = context[1];
    if( ! refalrts::svar_left( context[29], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Naked redefinition sign", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //19: t.ErrorList#1/1
    //20: t.SymTable#1/1
    //21: t.Context#1/1
    //22: e.MultiBracket#1/1
    //24: e.Scanned#1/1
    //26: e.Tail#1/1
    //28: s.LnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenBracket ) e.Tail#1
    if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenBracket<int>::name, context[6], context[7] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[24] = context[4];
    context[25] = context[5];
    context[26] = context[0];
    context[27] = context[1];
    if( ! refalrts::svar_left( context[28], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[10], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[11], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[9] );
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
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.Scanned#1/1
    //33: e.Tail#1/1
    //35: s.LnNumBracket#1/1
    //36: s.LnNumName#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumBracket#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[0];
    context[34] = context[1];
    if( ! refalrts::svar_left( context[35], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[36], context[8], context[9] ) )
      continue;
    context[37] = context[8];
    context[38] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[39], context[40], context[37], context[38]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
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
    refalrts::link_brackets( context[21], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[28] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[26] );
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
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.LnNum#1/1
    //39: s.LnNum#1/2
    //40: t.SymTable#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[6], context[7] ) )
      continue;
    context[32] = context[2];
    context[33] = context[3];
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[39], context[38]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[21], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[22], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[39] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.LnNum#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenCall ) e.Tail#1
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenCall<int>::name, context[6], context[7] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    context[29] = context[4];
    context[30] = context[5];
    context[31] = context[0];
    context[32] = context[1];
    if( ! refalrts::svar_left( context[33], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[34], context[33]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Unexpected call bracket in pattern expression", 45 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //19: t.ErrorList#1/1
    //20: t.SymTable#1/1
    //21: t.Context#1/1
    //22: e.MultiBracket#1/1
    //24: e.InnerScanned#1/1
    //26: e.Tail#1/1
    //28: s.BracketsSign#1/1
    //29: s.InnerLnNum#1/1
    //30: s.CloseBracket#1/1
    //31: s.CloseBracket#1/2
    //32: e.Scanned#1/1
    //34: s.ClosedLnNum#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.ClosedLnNum#1 s.CloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[19], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[20], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[21], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[2], context[3] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[24] = context[4];
    context[25] = context[5];
    context[26] = context[0];
    context[27] = context[1];
    if( ! refalrts::svar_left( context[28], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[29], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[30], context[8], context[9] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[31], context[30], context[6], context[7] ) )
      continue;
    context[32] = context[8];
    context[33] = context[9];
    if( ! refalrts::svar_left( context[34], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::link_brackets( context[14], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
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
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.MultiBracket#1/1
    //36: e.InnerScanned#1/1
    //38: e.Tail#1/1
    //40: s.BracketsSign#1/1
    //41: s.InnerLnNum#1/1
    //42: s.CloseBracket#1/1
    //43: e.Scanned#1/1
    //45: s.LnNum#1/1
    //46: s.OtherCloseBracket#1/1
    //47: s.BracketsSign#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.OtherCloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[2], context[3] ) )
      continue;
    context[34] = context[2];
    context[35] = context[3];
    context[36] = context[4];
    context[37] = context[5];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[8], context[9] ) )
      continue;
    context[43] = context[8];
    context[44] = context[9];
    if( ! refalrts::svar_left( context[45], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[46], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[47], context[40]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[27], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_stvar( res, context[47] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_stvar( res, context[31] );
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
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.Scanned#1/1
    //29: e.Tail#1/1
    //31: s.LnNum#1/1
    //32: s.CloseBracket#1/1
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[0];
    context[30] = context[1];
    if( ! refalrts::svar_left( context[31], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '\"' ) )
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
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.InnerScanned#1/1
    //33: e.Tail#1/1
    //35: s.BracketsSign#1/1
    //36: s.InnerLnNum#1/1
    //37: s.CloseBracket#1/1
    //38: e.Scanned#1/1
    //40: s.BracketsSign#1/2
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
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
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[0];
    context[34] = context[1];
    if( ! refalrts::svar_left( context[35], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[36], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[6], context[7] ) )
      continue;
    context[38] = context[6];
    context[39] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[40], context[35]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '\"' ) )
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
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_stvar( res, context[40] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: t.ErrorList#1/1
  //9: t.SymTable#1/1
  //10: t.Context#1/1
  //11: e.Pattern#1/1
  //13: e.Tail#1/1
  // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Pattern#1 ) e.Tail#1
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
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
  context[11] = context[4];
  context[12] = context[5];
  context[13] = context[0];
  context[14] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" has different modes", 20},
    {" and ", 5},
    {"Variables ", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: t.ErrorList#1/1
    //14: s.LnNum#1/1
    //15: s.OldMode#1/1
    //16: s.NewMode#1/1
    //17: e.Index#1/1
    //19: e.Index#1/2
    // t.ErrorList#1 s.LnNum#1 s.OldMode#1 s.NewMode#1 e.Index#1
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 19, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icString, 0, 2, 4},
    {refalrts::icChar, 0, '.', 6},
    {refalrts::icString, 0, 1, 7},
    {refalrts::icChar, 0, '.', 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
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
  //13: t.ErrorList#1/1
  //14: s.LnNum#1/1
  //15: s.OldMode#1/1
  //16: s.NewMode#1/1
  //17: e.Index#1/1
  //19: e.Index#1/2
  // t.ErrorList#1 s.LnNum#1 s.OldMode#1 s.NewMode#1 e.Index#1
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[19], context[20], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[4], context[5], "Variables ", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], " and ", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], " has different modes", 20 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { InvalidModeVariableError, "InvalidModeVariableError" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlreadyBounded<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Variable hide operator^ must be applied to first occurence of variable ", 71}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: t.ErrorList#1/1
    //5: s.LnNum#1/1
    //6: s.Mode#1/1
    //7: t.Context#2/1
    //8: s.Depth#2/1
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # Success s.Depth#2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    // Unused closed variable e.Index#1
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: t.ErrorList#1/1
    //8: s.LnNum#1/1
    //9: s.Mode#1/1
    //10: e.Index#1/1
    //12: t.Context#2/1
    //13: s.Depth#2/1
    //14: s.OldMode#2/1
    //15: s.OldMode#2/2
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 15, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: t.ErrorList#1/1
    //11: s.LnNum#1/1
    //12: s.Mode#1/1
    //13: e.Index#1/1
    //15: t.Context#2/1
    //16: s.Depth#2/1
    //17: s.Mode#1/2
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # AlreadyBounded s.Depth#2
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 13, 2},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 17, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icChar, 0, '.', 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //4: t.ErrorList#1/1
    //5: s.LnNum#1/1
    //6: s.Mode#1/1
    //7: t.Context#2/1
    //8: s.Depth#2/1
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # Success s.Depth#2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // Unused closed variable e.Index#1
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
    //7: t.ErrorList#1/1
    //8: s.LnNum#1/1
    //9: s.Mode#1/1
    //10: e.Index#1/1
    //12: t.Context#2/1
    //13: s.Depth#2/1
    //14: s.OldMode#2/1
    //15: s.OldMode#2/2
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[15], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[12] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[8] );
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
  //10: t.ErrorList#1/1
  //11: s.LnNum#1/1
  //12: s.Mode#1/1
  //13: e.Index#1/1
  //15: t.Context#2/1
  //16: s.Depth#2/1
  //17: s.Mode#1/2
  // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # AlreadyBounded s.Depth#2
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_AlreadyBounded<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[17], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Variable hide operator^ must be applied to first occurence of variable ", 71 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //13: t.ErrorList#1/1
    //14: t.Context#1/1
    //15: s.FnContextModifier#1/1
    //16: s.LnNum#1/1
    //17: s.Mode#1/1
    //18: e.Index#1/1
    //20: s.Mode#1/2
    //21: e.Index#1/2
    // t.ErrorList#1 t.Context#1 s.FnContextModifier#1 s.LnNum#1 s.Mode#1 e.Index#1
    {refalrts::ictVarLeft, 0, 13, 0},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 20, 17, 0},
    {refalrts::icCopyEVar, 21, 18, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 15},
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
  //13: t.ErrorList#1/1
  //14: t.Context#1/1
  //15: s.FnContextModifier#1/1
  //16: s.LnNum#1/1
  //17: s.Mode#1/1
  //18: e.Index#1/1
  //20: s.Mode#1/2
  //21: e.Index#1/2
  // t.ErrorList#1 t.Context#1 s.FnContextModifier#1 s.LnNum#1 s.Mode#1 e.Index#1
  if( ! refalrts::tvar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[0];
  context[19] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[20], context[17]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[18], context[19]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '(', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseBracket
    {refalrts::icIdentLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ')', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '<', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseCall
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '>', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenADT
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '[', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkCloseADT
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ']', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Brackets
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '(', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ADT_Brackets
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '[', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # CallBrackets
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '<', 2},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '(' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseBracket
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], ')' ) )
      return refalrts::cNoMemory;
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
    // # TkOpenCall
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '<' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseCall
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '>' ) )
      return refalrts::cNoMemory;
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
    // # TkOpenADT
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '[' ) )
      return refalrts::cNoMemory;
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
    // # TkCloseADT
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], ']' ) )
      return refalrts::cNoMemory;
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
    // # Brackets
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '(' ) )
      return refalrts::cNoMemory;
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
    // # ADT_Brackets
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[2], '[' ) )
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
  // # CallBrackets
  if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_char( context[2], '<' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: e.Functions#1/1
    //26: t.SymTable#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: e.Index#1/1
    //35: t.ErrorList#2/1
    //36: t.Context#2/1
    //37: s.Mode#2/1
    //38: s.Depth#2/1
    // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::icContextSet, 0, 31, 8},
    {refalrts::icContextSet, 0, 33, 10},
    {refalrts::ictVarLeft, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 37, 0},
    {refalrts::icsVarLeft, 0, 38, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 18, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 19, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.Functions#1/1
    //23: t.SymTable#1/1
    //24: e.MultiBracket#1/1
    //26: e.Scanned#1/1
    //28: e.Tail#1/1
    //30: t.ErrorList#2/1
    //31: t.Context#2/1
    // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 21, 2},
    {refalrts::ictVarLeft, 0, 23, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icContextSet, 0, 24, 4},
    {refalrts::icContextSet, 0, 26, 6},
    {refalrts::icContextSet, 0, 28, 8},
    // Unused closed variable e.Index#1
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
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
    //24: e.Functions#1/1
    //26: t.SymTable#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: e.Index#1/1
    //35: t.ErrorList#2/1
    //36: t.Context#2/1
    //37: s.Mode#2/1
    //38: s.Depth#2/1
    // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[24] = context[2];
    context[25] = context[3];
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[6];
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[9];
    context[33] = context[10];
    context[34] = context[11];
    if( ! refalrts::tvar_left( context[35], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[36], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[37], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[38], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( context[20], & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::link_brackets( context[18], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[19], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[35] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[24], context[25] );
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
  //21: e.Functions#1/1
  //23: t.SymTable#1/1
  //24: e.MultiBracket#1/1
  //26: e.Scanned#1/1
  //28: e.Tail#1/1
  //30: t.ErrorList#2/1
  //31: t.Context#2/1
  // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[2];
  context[22] = context[3];
  if( ! refalrts::tvar_left( context[23], context[0], context[1] ) )
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
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = context[4];
  context[25] = context[5];
  context[26] = context[6];
  context[27] = context[7];
  context[28] = context[8];
  context[29] = context[9];
  // Unused closed variable e.Index#1
  if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
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
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[31] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_stvar( res, context[30] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CallBrackets<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 2, 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_Brackets<int>::name ) )
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
  // # TkOpenCall
  if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 3 elems
  refalrts::Iter context[3];
  refalrts::zeros( context, 3 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkCloseCall<int>::name,
    & ident_TkOpenCall<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenBracket
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 2, 2},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TkOpenCall
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 2},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[2], & ident_TkCloseBracket<int>::name ) )
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
  // # TkOpenCall
  if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_TkCloseCall<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromBracket, "StrFromBracket" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { ParseResult, "ParseResult" },
    { ParseBlock, "ParseBlock" },
    { ParseResult_Block, "ParseResult_Block" },
    { lambda_ParseResult_2, "lambda_ParseResult_2" },
    { Fetch, "Fetch" },
    { lambda_ParseResult_1, "lambda_ParseResult_1" },
    { ST_GetAnyName, "ST_GetAnyName" },
    { ST_AddFunctionCall, "ST_AddFunctionCall" },
    { lambda_ParseResult_0, "lambda_ParseResult_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { CheckUseVariable, "CheckUseVariable" },
    { ST_AddIdent, "ST_AddIdent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Close<int>::name,
    & ident_TkOpenBlock<int>::name,
    & ident_Open<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkIdentMarker<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unbalanced bracket \"", 20},
    {"Expected name after \"[\"", 23},
    {"Missed name after \"#\"", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.Char#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 11, 8},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 33, 8},
    {refalrts::icsVarLeft, 0, 34, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 11, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.Number#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 10, 8},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 33, 8},
    {refalrts::icsVarLeft, 0, 34, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 10, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.Functions#1/1
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: t.Context#1/1
    //30: e.MultiBracket#1/1
    //32: e.Scanned#1/1
    //34: e.Tail#1/1
    //36: s.LnNum#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 25, 2},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 6, 8},
    {refalrts::icContextSet, 0, 30, 4},
    {refalrts::icContextSet, 0, 32, 6},
    {refalrts::icContextSet, 0, 34, 0},
    {refalrts::icsVarLeft, 0, 36, 8},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 39, 37, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 9, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 6, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icLinkBrackets, 19, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +69, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //27: e.Functions#1/1
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.MarkerLnNum#1/1
    //39: s.NameLnNum#1/1
    //40: e.Name#1/1
    //42: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.MarkerLnNum#1 ) ( # TkName s.NameLnNum#1 e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::ictVarLeft, 0, 29, 0},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 8, 8},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 0},
    {refalrts::icsVarLeft, 0, 38, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icsVarLeft, 0, 39, 10},
    {refalrts::icContextSet, 0, 40, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 42, 40, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 13, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 9, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 21, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: e.Functions#1/1
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.Scanned#1/1
    //33: e.Tail#1/1
    //35: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 8, 8},
    {refalrts::icContextSet, 0, 29, 4},
    {refalrts::icContextSet, 0, 31, 6},
    {refalrts::icContextSet, 0, 33, 0},
    {refalrts::icsVarLeft, 0, 35, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.Scanned#1/1
    //39: e.Tail#1/1
    //41: s.LnNum#1/1
    //42: s.Mode#1/1
    //43: e.Index#1/1
    //45: e.Index#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 7, 8},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icsVarLeft, 0, 42, 8},
    {refalrts::icContextSet, 0, 43, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 6, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 12, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 11, 16},
    {refalrts::icFunc, 0, 10, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.Scanned#1/1
    //39: e.Tail#1/1
    //41: s.LnNumADT#1/1
    //42: s.LnNumName#1/1
    //43: e.Name#1/1
    //45: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumADT#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icIdentRight, 0, 5, 8},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::icContextSet, 0, 43, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 9, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 4, 21},
    {refalrts::icIdent, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 19, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +85, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.Functions#1/1
    //35: t.ErrorList#1/1
    //36: t.SymTable#1/1
    //37: t.Context#1/1
    //38: e.MultiBracket#1/1
    //40: e.Scanned#1/1
    //42: e.Tail#1/1
    //44: s.LnNum#1/1
    //45: s.LnNum#1/2
    //46: t.SymTable#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::ictVarLeft, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 36, 0},
    {refalrts::ictVarLeft, 0, 37, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icIdentRight, 0, 5, 8},
    {refalrts::icContextSet, 0, 38, 4},
    {refalrts::icContextSet, 0, 40, 6},
    {refalrts::icContextSet, 0, 42, 0},
    {refalrts::icsVarLeft, 0, 44, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 45, 44, 0},
    {refalrts::icCopySTVar, 46, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 4, 21},
    {refalrts::icIdent, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 8, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icLinkBrackets, 25, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 26, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 19, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //29: e.Functions#1/1
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.MultiBracket#1/1
    //36: e.Scanned#1/1
    //38: e.Tail#1/1
    //40: s.LnNum#1/1
    //41: s.OpenBracket#1/1
    //42: s.OpenBracket#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 s.OpenBracket#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icContextSet, 0, 38, 0},
    {refalrts::icsVarLeft, 0, 40, 8},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 42, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 6, 17},
    {refalrts::icFunc, 0, 7, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 6, 21},
    {refalrts::icFunc, 0, 5, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 14, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 15, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //23: e.Functions#1/1
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: t.Context#1/1
    //28: e.MultiBracket#1/1
    //30: e.InnerScanned#1/1
    //32: e.Tail#1/1
    //34: s.BracketsSign#1/1
    //35: s.OpenLnNum#1/1
    //36: s.CloseBracket#1/1
    //37: s.CloseBracket#1/2
    //38: e.Scanned#1/1
    //40: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 23, 2},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::ictVarLeft, 0, 27, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 0, 8},
    {refalrts::icBracketRight, 0, 10, 4},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icContextSet, 0, 30, 6},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icsVarLeft, 0, 34, 10},
    {refalrts::icsVarLeft, 0, 35, 10},
    {refalrts::icsVarLeft, 0, 36, 10},
    {refalrts::icsRepeatRight, 37, 36, 8},
    {refalrts::icContextSet, 0, 38, 10},
    {refalrts::icsVarLeft, 0, 40, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 22, 2},
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::ictVarLeft, 0, 26, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icContextSet, 0, 27, 4},
    {refalrts::icContextSet, 0, 29, 6},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icsVarLeft, 0, 33, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 3, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +78, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.InnerScanned#1/1
    //39: e.Tail#1/1
    //41: s.BracketsSign#1/1
    //42: s.OpenLnNum#1/1
    //43: s.CloseBracket#1/1
    //44: e.Scanned#1/1
    //46: s.BracketsSign#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketRight, 0, 8, 4},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icContextSet, 0, 37, 6},
    {refalrts::icContextSet, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 41, 8},
    {refalrts::icsVarLeft, 0, 42, 8},
    {refalrts::icsVarLeft, 0, 43, 8},
    {refalrts::icContextSet, 0, 44, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 46, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icChar, 0, '\"', 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +69, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: e.Functions#1/1
    //30: t.ErrorList#1/1
    //31: t.SymTable#1/1
    //32: t.Context#1/1
    //33: e.Scanned#1/1
    //35: e.Tail#1/1
    //37: s.LnNum#1/1
    //38: s.CloseBracket#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 28, 2},
    {refalrts::ictVarLeft, 0, 30, 0},
    {refalrts::ictVarLeft, 0, 31, 0},
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 0, 8},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icContextSet, 0, 35, 0},
    {refalrts::icsVarLeft, 0, 37, 8},
    {refalrts::icsVarLeft, 0, 38, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icString, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icChar, 0, '\"', 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: e.Functions#1/1
    //14: t.ErrorList#1/1
    //15: t.SymTable#1/1
    //16: t.Context#1/1
    //17: e.Result#1/1
    //19: e.Tail#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Result#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::ictVarLeft, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icContextSet, 0, 17, 6},
    {refalrts::icContextSet, 0, 19, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[13];
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
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.Char#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
      continue;
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[6];
    context[30] = context[7];
    context[31] = context[0];
    context[32] = context[1];
    if( ! refalrts::svar_left( context[33], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::link_brackets( context[16], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
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
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    //34: s.Number#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
      continue;
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[6];
    context[30] = context[7];
    context[31] = context[0];
    context[32] = context[1];
    if( ! refalrts::svar_left( context[33], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::link_brackets( context[16], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
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
    //25: e.Functions#1/1
    //27: t.ErrorList#1/1
    //28: t.SymTable#1/1
    //29: t.Context#1/1
    //30: e.MultiBracket#1/1
    //32: e.Scanned#1/1
    //34: e.Tail#1/1
    //36: s.LnNum#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      continue;
    context[30] = context[4];
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[7];
    context[34] = context[0];
    context[35] = context[1];
    if( ! refalrts::svar_left( context[36], context[8], context[9] ) )
      continue;
    context[37] = context[8];
    context[38] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[39], context[40], context[37], context[38]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::link_brackets( context[19], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[20], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[29] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_stvar( res, context[36] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[27] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[25], context[26] );
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
    //27: e.Functions#1/1
    //29: t.ErrorList#1/1
    //30: t.SymTable#1/1
    //31: t.Context#1/1
    //32: e.MultiBracket#1/1
    //34: e.Scanned#1/1
    //36: e.Tail#1/1
    //38: s.MarkerLnNum#1/1
    //39: s.NameLnNum#1/1
    //40: e.Name#1/1
    //42: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.MarkerLnNum#1 ) ( # TkName s.NameLnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::tvar_left( context[29], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] ) )
      continue;
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[0];
    context[37] = context[1];
    if( ! refalrts::svar_left( context[38], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[39], context[10], context[11] ) )
      continue;
    context[40] = context[10];
    context[41] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[42], context[43], context[40], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ST_AddIdent, "ST_AddIdent" ) )
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
    if( ! refalrts::alloc_ident( context[23], & ident_TkIdentifier<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::link_brackets( context[21], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[22], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[31] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[29] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[27], context[28] );
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
    //24: e.Functions#1/1
    //26: t.ErrorList#1/1
    //27: t.SymTable#1/1
    //28: t.Context#1/1
    //29: e.MultiBracket#1/1
    //31: e.Scanned#1/1
    //33: e.Tail#1/1
    //35: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[24] = context[2];
    context[25] = context[3];
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[8], context[9] ) )
      continue;
    context[29] = context[4];
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[7];
    context[33] = context[0];
    context[34] = context[1];
    if( ! refalrts::svar_left( context[35], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Missed name after \"#\"", 21 ) )
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
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[24], context[25] );
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
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.Scanned#1/1
    //39: e.Tail#1/1
    //41: s.LnNum#1/1
    //42: s.Mode#1/1
    //43: e.Index#1/1
    //45: e.Index#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      continue;
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[8], context[9] ) )
      continue;
    context[43] = context[8];
    context[44] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], CheckUseVariable, "CheckUseVariable" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], lambda_ParseResult_0, "lambda_ParseResult_0" ) )
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
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[33] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_stvar( res, context[32] );
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
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.Scanned#1/1
    //39: e.Tail#1/1
    //41: s.LnNumADT#1/1
    //42: s.LnNumName#1/1
    //43: e.Name#1/1
    //45: e.Name#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumADT#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] ) )
      continue;
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
      continue;
    context[43] = context[10];
    context[44] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_evar(context[45], context[46], context[43], context[44]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
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
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::link_brackets( context[25], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[19], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[20], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[34] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[32] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[30], context[31] );
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
    //33: e.Functions#1/1
    //35: t.ErrorList#1/1
    //36: t.SymTable#1/1
    //37: t.Context#1/1
    //38: e.MultiBracket#1/1
    //40: e.Scanned#1/1
    //42: e.Tail#1/1
    //44: s.LnNum#1/1
    //45: s.LnNum#1/2
    //46: t.SymTable#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[33] = context[2];
    context[34] = context[3];
    if( ! refalrts::tvar_left( context[35], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[36], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[37], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[8], context[9] ) )
      continue;
    context[38] = context[4];
    context[39] = context[5];
    context[40] = context[6];
    context[41] = context[7];
    context[42] = context[0];
    context[43] = context[1];
    if( ! refalrts::svar_left( context[44], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[45], context[44]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[46], context[36]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Expected name after \"[\"", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[21], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    refalrts::link_brackets( context[25], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::link_brackets( context[26], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[19], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[20], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[45] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_stvar( res, context[36] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[33], context[34] );
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
    //29: e.Functions#1/1
    //31: t.ErrorList#1/1
    //32: t.SymTable#1/1
    //33: t.Context#1/1
    //34: e.MultiBracket#1/1
    //36: e.Scanned#1/1
    //38: e.Tail#1/1
    //40: s.LnNum#1/1
    //41: s.OpenBracket#1/1
    //42: s.OpenBracket#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 s.OpenBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      continue;
    context[34] = context[4];
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[7];
    context[38] = context[0];
    context[39] = context[1];
    if( ! refalrts::svar_left( context[40], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[42], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_ParseResult_1, "lambda_ParseResult_1" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], lambda_ParseResult_2, "lambda_ParseResult_2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
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
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[14], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[15], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[40] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_stvar( res, context[31] );
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
    //23: e.Functions#1/1
    //25: t.ErrorList#1/1
    //26: t.SymTable#1/1
    //27: t.Context#1/1
    //28: e.MultiBracket#1/1
    //30: e.InnerScanned#1/1
    //32: e.Tail#1/1
    //34: s.BracketsSign#1/1
    //35: s.OpenLnNum#1/1
    //36: s.CloseBracket#1/1
    //37: s.CloseBracket#1/2
    //38: e.Scanned#1/1
    //40: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[27], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[4], context[5] ) )
      continue;
    context[28] = context[4];
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[7];
    context[32] = context[0];
    context[33] = context[1];
    if( ! refalrts::svar_left( context[34], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[35], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[36], context[10], context[11] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[37], context[36], context[8], context[9] ) )
      continue;
    context[38] = context[10];
    context[39] = context[11];
    if( ! refalrts::svar_left( context[40], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[23], context[24] );
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
    //22: e.Functions#1/1
    //24: t.ErrorList#1/1
    //25: t.SymTable#1/1
    //26: t.Context#1/1
    //27: e.MultiBracket#1/1
    //29: e.Scanned#1/1
    //31: e.Tail#1/1
    //33: s.LnNum#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[26], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[8], context[9] ) )
      continue;
    context[27] = context[4];
    context[28] = context[5];
    context[29] = context[6];
    context[30] = context[7];
    context[31] = context[0];
    context[32] = context[1];
    if( ! refalrts::svar_left( context[33], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult_Block, "ParseResult_Block" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ParseBlock, "ParseBlock" ) )
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
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[27], context[28] );
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
    //30: e.Functions#1/1
    //32: t.ErrorList#1/1
    //33: t.SymTable#1/1
    //34: t.Context#1/1
    //35: e.MultiBracket#1/1
    //37: e.InnerScanned#1/1
    //39: e.Tail#1/1
    //41: s.BracketsSign#1/1
    //42: s.OpenLnNum#1/1
    //43: s.CloseBracket#1/1
    //44: e.Scanned#1/1
    //46: s.BracketsSign#1/2
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
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
    if( ! refalrts::brackets_right( context[8], context[9], context[4], context[5] ) )
      continue;
    context[35] = context[4];
    context[36] = context[5];
    context[37] = context[6];
    context[38] = context[7];
    context[39] = context[0];
    context[40] = context[1];
    if( ! refalrts::svar_left( context[41], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[42], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[43], context[8], context[9] ) )
      continue;
    context[44] = context[8];
    context[45] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[46], context[41]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::link_brackets( context[25], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_stvar( res, context[46] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_stvar( res, context[33] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[41] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[42] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[15] );
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
    //28: e.Functions#1/1
    //30: t.ErrorList#1/1
    //31: t.SymTable#1/1
    //32: t.Context#1/1
    //33: e.Scanned#1/1
    //35: e.Tail#1/1
    //37: s.LnNum#1/1
    //38: s.CloseBracket#1/1
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[28] = context[2];
    context[29] = context[3];
    if( ! refalrts::tvar_left( context[30], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[31], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    context[33] = context[6];
    context[34] = context[7];
    context[35] = context[0];
    context[36] = context[1];
    if( ! refalrts::svar_left( context[37], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[38], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
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
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_stvar( res, context[31] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[28], context[29] );
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
  //12: e.Functions#1/1
  //14: t.ErrorList#1/1
  //15: t.SymTable#1/1
  //16: t.Context#1/1
  //17: e.Result#1/1
  //19: e.Tail#1/1
  // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Result#1 ) e.Tail#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[6];
  context[18] = context[7];
  context[19] = context[0];
  context[20] = context[1];

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
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_stvar( res, context[14] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { InvalidModeVariableError, "InvalidModeVariableError" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_ExistVariable<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not found", 10},
    {"Variable ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: t.ErrorList#1/1
    //5: s.LnNum#1/1
    //6: s.Mode#1/1
    //7: t.Context#2/1
    //8: s.Depth#2/1
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # ExistVariable s.Depth#2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    // Unused closed variable e.Index#1
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //7: t.ErrorList#1/1
    //8: s.LnNum#1/1
    //9: s.Mode#1/1
    //10: e.Index#1/1
    //12: t.Context#2/1
    //13: s.Depth#2/1
    //14: s.OldMode#2/1
    //15: s.OldMode#2/2
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    {refalrts::ictVarLeft, 0, 7, 0},
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 15, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //12: t.ErrorList#1/1
    //13: s.LnNum#1/1
    //14: s.Mode#1/1
    //15: e.Index#1/1
    //17: t.Context#2/1
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # NotFound
    {refalrts::icIdentRight, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 12, 0},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icsVarLeft, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::ictVarLeft, 0, 17, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icChar, 0, '.', 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //4: t.ErrorList#1/1
    //5: s.LnNum#1/1
    //6: s.Mode#1/1
    //7: t.Context#2/1
    //8: s.Depth#2/1
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # ExistVariable s.Depth#2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // Unused closed variable e.Index#1
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ExistVariable<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
    //7: t.ErrorList#1/1
    //8: s.LnNum#1/1
    //9: s.Mode#1/1
    //10: e.Index#1/1
    //12: t.Context#2/1
    //13: s.Depth#2/1
    //14: s.OldMode#2/1
    //15: s.OldMode#2/2
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    if( ! refalrts::tvar_left( context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[15], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[12] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[8] );
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
  //12: t.ErrorList#1/1
  //13: s.LnNum#1/1
  //14: s.Mode#1/1
  //15: e.Index#1/1
  //17: t.Context#2/1
  // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # NotFound
  if( ! refalrts::ident_right(  & ident_NotFound<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[2];
  context[16] = context[3];
  if( ! refalrts::tvar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Variable ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], " not found", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[17] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Cntx_CheckVariable, "Cntx_CheckVariable" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: t.ErrorList#1/1
    //15: t.Context#1/1
    //16: s.LnNum#1/1
    //17: s.Mode#1/1
    //18: e.Index#1/1
    //20: s.Mode#1/2
    //21: e.Index#1/2
    // t.ErrorList#1 t.Context#1 s.LnNum#1 s.Mode#1 e.Index#1
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::ictVarLeft, 0, 15, 0},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icsVarLeft, 0, 17, 0},
    {refalrts::icContextSet, 0, 18, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 20, 17, 0},
    {refalrts::icCopyEVar, 21, 18, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 15},
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
  //14: t.ErrorList#1/1
  //15: t.Context#1/1
  //16: s.LnNum#1/1
  //17: s.Mode#1/1
  //18: e.Index#1/1
  //20: s.Mode#1/2
  //21: e.Index#1/2
  // t.ErrorList#1 t.Context#1 s.LnNum#1 s.Mode#1 e.Index#1
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[15], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = context[0];
  context[19] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[20], context[17]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[18], context[19]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Cntx_CheckVariable, "Cntx_CheckVariable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[20] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_TkName<int>::name,
    & ident_CreateClosure<int>::name,
    & ident_CallBrackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //32: e.RealContext#2/1
    //34: s.NextNum#1/1
    //35: e.Functions#1/1
    //37: t.ErrorList#1/1
    //38: t.SymTable#1/1
    //39: t.Context#1/1
    //40: e.MultiBracket#1/1
    //42: e.Scanned#1/1
    //44: e.Tail#1/1
    //46: s.FunctionNumber#2/1
    // s.NextNum#1 ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) s.FunctionNumber#2 ( e.RealContext#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icContextSet, 0, 32, 2},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::ictVarLeft, 0, 37, 0},
    {refalrts::ictVarLeft, 0, 38, 0},
    {refalrts::ictVarLeft, 0, 39, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icContextSet, 0, 40, 6},
    {refalrts::icContextSet, 0, 42, 8},
    {refalrts::icContextSet, 0, 44, 10},
    {refalrts::icsVarLeft, 0, 46, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icIdent, 0, 3, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 1, 22},
    {refalrts::icIdent, 0, 2, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 1, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icLinkBrackets, 18, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 19, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
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
  //32: e.RealContext#2/1
  //34: s.NextNum#1/1
  //35: e.Functions#1/1
  //37: t.ErrorList#1/1
  //38: t.SymTable#1/1
  //39: t.Context#1/1
  //40: e.MultiBracket#1/1
  //42: e.Scanned#1/1
  //44: e.Tail#1/1
  //46: s.FunctionNumber#2/1
  // s.NextNum#1 ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) s.FunctionNumber#2 ( e.RealContext#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[32] = context[2];
  context[33] = context[3];
  if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[35] = context[4];
  context[36] = context[5];
  if( ! refalrts::tvar_left( context[37], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[38], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[39], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[40] = context[6];
  context[41] = context[7];
  context[42] = context[8];
  context[43] = context[9];
  context[44] = context[10];
  context[45] = context[11];
  if( ! refalrts::svar_left( context[46], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ParseResult, "ParseResult" ) )
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
  if( ! refalrts::alloc_ident( context[20], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_CreateClosure<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[26], & ident_TkName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], & ident_LambdaName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  refalrts::link_brackets( context[18], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[19], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  refalrts::link_brackets( context[25], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_stvar( res, context[46] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::link_brackets( context[21], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[39] );
  res = refalrts::splice_stvar( res, context[38] );
  res = refalrts::splice_stvar( res, context[37] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_stvar( res, context[34] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { CreateContext, "CreateContext" },
    { Dec, "Dec" },
    { Fetch, "Fetch" },
    { ParseResult, "ParseResult" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_LambdaName<int>::name,
    & ident_TkName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: e.MultiBracket#1/1
    //28: e.Scanned#1/1
    //30: s.NextNum#1/1
    //31: e.Functions#1/1
    //33: t.ErrorList#1/1
    //34: t.SymTable#1/1
    //35: e.Tail#1/1
    //37: t.Context#1/1
    //38: s.NextNum#1/2
    // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 26, 2},
    {refalrts::icContextSet, 0, 28, 4},
    {refalrts::icsVarLeft, 0, 30, 6},
    {refalrts::icContextSet, 0, 31, 6},
    {refalrts::ictVarLeft, 0, 33, 0},
    {refalrts::ictVarLeft, 0, 34, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 35, 0},
    {refalrts::ictVarLeft, 0, 37, 8},
    {refalrts::icEmpty, 0, 0, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 38, 30, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 5, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icIdent, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 16, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 17, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //33: e.MultiBracket#1/1
    //35: e.Scanned#1/1
    //37: s.NextNum#1/1
    //38: e.Functions#1/1
    //40: t.ErrorList#1/1
    //41: t.SymTable#1/1
    //42: e.Tail#1/1
    //44: t.Context#1/1
    //45: e.FreeContext#1/1
    //47: s.NextNum#1/2
    // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 e.FreeContext#1 ) e.Tail#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icContextSet, 0, 35, 4},
    {refalrts::icsVarLeft, 0, 37, 6},
    {refalrts::icContextSet, 0, 38, 6},
    {refalrts::ictVarLeft, 0, 40, 0},
    {refalrts::ictVarLeft, 0, 41, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 42, 0},
    {refalrts::ictVarLeft, 0, 44, 8},
    {refalrts::icContextSet, 0, 45, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 47, 37, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 3, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icFunc, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 15, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 37},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //26: e.MultiBracket#1/1
    //28: e.Scanned#1/1
    //30: s.NextNum#1/1
    //31: e.Functions#1/1
    //33: t.ErrorList#1/1
    //34: t.SymTable#1/1
    //35: e.Tail#1/1
    //37: t.Context#1/1
    //38: s.NextNum#1/2
    // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 ) e.Tail#1
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
    if( ! refalrts::svar_left( context[30], context[6], context[7] ) )
      continue;
    context[31] = context[6];
    context[32] = context[7];
    if( ! refalrts::tvar_left( context[33], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[34], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[35] = context[0];
    context[36] = context[1];
    if( ! refalrts::tvar_left( context[37], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if (! refalrts::copy_stvar(context[38], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_LambdaName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Dec, "Dec" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
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
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::link_brackets( context[16], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[17], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_stvar( res, context[33] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_stvar( res, context[30] );
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
  //33: e.MultiBracket#1/1
  //35: e.Scanned#1/1
  //37: s.NextNum#1/1
  //38: e.Functions#1/1
  //40: t.ErrorList#1/1
  //41: t.SymTable#1/1
  //42: e.Tail#1/1
  //44: t.Context#1/1
  //45: e.FreeContext#1/1
  //47: s.NextNum#1/2
  // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 e.FreeContext#1 ) e.Tail#1
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
  if( ! refalrts::svar_left( context[37], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  context[38] = context[6];
  context[39] = context[7];
  if( ! refalrts::tvar_left( context[40], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[41], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[42] = context[0];
  context[43] = context[1];
  if( ! refalrts::tvar_left( context[44], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[45] = context[8];
  context[46] = context[9];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[47], context[37]))
    return refalrts::cNoMemory;
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
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], CreateContext, "CreateContext" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[20] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::link_brackets( context[29], context[30] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::link_brackets( context[27], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::link_brackets( context[25], context[26] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_stvar( res, context[44] );
  res = refalrts::splice_stvar( res, context[41] );
  res = refalrts::splice_stvar( res, context[40] );
  refalrts::link_brackets( context[23], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_stvar( res, context[47] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[15], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[37] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
