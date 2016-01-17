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
extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd_Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_CheckUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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
static refalrts::FnResult DontGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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

// identifier #EEnum
template <typename SREFAL_PARAM_INT>
struct ident_EEnum {
  static const char *name() {
    return "EEnum";
  }
};

// identifier #EL_HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL_HasErrors";
  }
};

// identifier #EL_NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL_NoErrors";
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

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #Forward
template <typename SREFAL_PARAM_INT>
struct ident_Forward {
  static const char *name() {
    return "Forward";
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

static refalrts::FnResult lambda_CompileFile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eSrcName_1_1 = 4 };
    enum { __eLexFolding_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_Create, "ST_Create" },
      { EL_Create, "EL_Create" },
      { ParseElements, "ParseElements" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eSrcName_1_1, 2},
      {refalrts::icContextSet, 0, __eLexFolding_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLexFolding_2_1, 0},
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
    // ( e.SrcName#1 ) e.LexFolding#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eSrcName_1_1] = context[2];
    context[__eSrcName_1_1 + 1] = context[3];
    context[__eLexFolding_2_1] = context[0];
    context[__eLexFolding_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_Create, "EL_Create" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, ST_Create, "ST_Create" ) )
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
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLexFolding_2_1], context[__eLexFolding_2_1 + 1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eSrcName_1_1], context[__eSrcName_1_1 + 1] );
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

static refalrts::FnResult lambda_CompileFile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __tErrorList_2_1 = 2 };
    enum { __tSymTable_2_1 = 3 };
    enum { __eLines_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_CheckUnresolved, "ST_CheckUnresolved" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::icContextSet, 0, __eLines_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eLines_2_1, 0},
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
    // t.ErrorList#2 t.SymTable#2 e.Lines#2
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[__eLines_2_1] = context[0];
    context[__eLines_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_CheckUnresolved, "ST_CheckUnresolved" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eLines_2_1], context[__eLines_2_1 + 1] );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult lambda_CompileFile_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eOutputName_1_1 = 6 };
    enum { __eLines_2_1 = 8 };
    enum { __eOutputName_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SaveFile, "SaveFile" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Success<int>::name,
      & idents_EL_NoErrors<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eOutputName_1_1, 2},
      {refalrts::icContextSet, 0, __eLines_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLines_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eOutputName_1_1, 0},
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
    // ( e.OutputName#1 ) ( e.Lines#2 ) # EL_NoErrors
    if( ! refalrts::ident_right(  & ident_EL_NoErrors<int>::name, context[0], context[1] ) )
      break;
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
    context[__eOutputName_1_1] = context[2];
    context[__eOutputName_1_1 + 1] = context[3];
    context[__eLines_2_1] = context[4];
    context[__eLines_2_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eOutputName_1_2], context[__eOutputName_1_2 + 1], context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SaveFile, "SaveFile" ) )
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
    if( ! refalrts::alloc_ident( n5, & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eOutputName_1_2], context[__eOutputName_1_2 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eLines_2_1], context[__eLines_2_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Fails<int>::name,
      & idents_EL_HasErrors<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // ( e.OutputName#1 ) ( e.Lines#2 ) # EL_HasErrors
    if( ! refalrts::ident_right(  & ident_EL_HasErrors<int>::name, context[0], context[1] ) )
      break;
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
    // Unused closed variable e.OutputName#1
    // Unused closed variable e.Lines#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & ident_Fails<int>::name ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult lambda_CompileFile_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eOutputName_1_1 = 4 };
    enum { __tErrorList_2_1 = 6 };
    enum { __tSymTable_2_1 = 7 };
    enum { __eLines_2_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CompileFile_2, "lambda_CompileFile_2" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { EL_Destroy, "EL_Destroy" },
      { Fetch, "Fetch" },
      { ST_Destroy, "ST_Destroy" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eOutputName_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::icContextSet, 0, __eLines_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLines_2_1, 0},
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
    // ( e.OutputName#1 ) t.ErrorList#2 t.SymTable#2 e.Lines#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[2];
    context[__eOutputName_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[__eLines_2_1] = context[0];
    context[__eLines_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_Destroy, "ST_Destroy" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, EL_Destroy, "EL_Destroy" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, lambda_CompileFile_2, "lambda_CompileFile_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eLines_2_1], context[__eLines_2_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
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

refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eSrcName_1_1 = 4 };
    enum { __eOutputName_1_1 = 6 };
    enum { __eSrcName_1_2 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CompileFile_3, "lambda_CompileFile_3" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { lambda_CompileFile_1, "lambda_CompileFile_1" },
      { lambda_CompileFile_0, "lambda_CompileFile_0" },
      { PrepareBracket, "PrepareBracket" },
      { Map, "Map" },
      { Seq, "Seq" },
      { LexFolding, "LexFolding" },
      { Fetch, "Fetch" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eSrcName_1_1, 2},
      {refalrts::icContextSet, 0, __eOutputName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 8, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 7, 0},
      {refalrts::icSpliceEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 6, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
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
    // ( e.SrcName#1 ) e.OutputName#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eSrcName_1_1] = context[2];
    context[__eSrcName_1_1 + 1] = context[3];
    context[__eOutputName_1_1] = context[0];
    context[__eOutputName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eSrcName_1_2], context[__eSrcName_1_2 + 1], context[__eSrcName_1_1], context[__eSrcName_1_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n3, LexFolding, "LexFolding" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, PrepareBracket, "PrepareBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, lambda_CompileFile_0, "lambda_CompileFile_0" ) )
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
    if( ! refalrts::alloc_name( n17, lambda_CompileFile_1, "lambda_CompileFile_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, lambda_CompileFile_3, "lambda_CompileFile_3" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eSrcName_1_2], context[__eSrcName_1_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n7, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eSrcName_1_1], context[__eSrcName_1_1 + 1] );
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

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkOpenBracket<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkOpenBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseBracket<int>::name,
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkCloseBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkOpenADT<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkOpenADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkCloseADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkOpenCall<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkOpenCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Open<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __sLnNum_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseCall<int>::name,
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
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
    // ( # TkCloseCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
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
    enum { __tOtherToken_1_1 = 2 };
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
      {refalrts::ictVarLeft, 0, __tOtherToken_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tOtherToken_1_1, 0},
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
    // t.OtherToken#1
    if( ! refalrts::tvar_left( context[__tOtherToken_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tOtherToken_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_ParseElements_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eName_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenExtern, "GenExtern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_GN_Entry<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( # GN_Entry e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_GN_Entry<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenExtern, "GenExtern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
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
    enum { __eName_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenForward, "GenForward" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_GN_Local<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( # GN_Local e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_GN_Local<int>::name, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenForward, "GenForward" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
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

static refalrts::FnResult lambda_ParseElements_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eName_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenIdent, "GenIdent" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenIdent, "GenIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
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

static refalrts::FnResult lambda_ParseElements_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eGenerated_1_1 = 6 };
    enum { __eNewGenerated_2_1 = 8 };
    enum { __tErrorList_2_1 = 10 };
    enum { __tSymTable_2_1 = 11 };
    enum { __eTail_2_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseElements, "ParseElements" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::icContextSet, 0, __eNewGenerated_2_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::icContextSet, 0, __eTail_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eNewGenerated_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_2_1, 0},
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
    // ( e.Generated#1 ) ( e.NewGenerated#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    context[__eNewGenerated_2_1] = context[4];
    context[__eNewGenerated_2_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[__eTail_2_1] = context[0];
    context[__eTail_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseElements, "ParseElements" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_2_1], context[__eTail_2_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eNewGenerated_2_1], context[__eNewGenerated_2_1 + 1] );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult lambda_ParseElements_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eGenerated_1_1 = 6 };
    enum { __eNewGenerated_2_1 = 8 };
    enum { __tErrorList_2_1 = 10 };
    enum { __tSymTable_2_1 = 11 };
    enum { __eTail_2_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseElements, "ParseElements" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::icContextSet, 0, __eNewGenerated_2_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::icContextSet, 0, __eTail_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eNewGenerated_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_2_1, 0},
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
    // ( e.Generated#1 ) ( e.NewGenerated#2 ) t.ErrorList#2 t.SymTable#2 e.Tail#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    context[__eNewGenerated_2_1] = context[4];
    context[__eNewGenerated_2_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[__eTail_2_1] = context[0];
    context[__eTail_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseElements, "ParseElements" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_2_1], context[__eTail_2_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eNewGenerated_2_1], context[__eNewGenerated_2_1 + 1] );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eGenerated_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __sLnNum_1_1 = 10 };
    enum { __tSymTable_1_2 = 11 };
    enum { __tSymTable_1_3 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenCommonTailer, "GenCommonTailer" },
      { ST_AllIdents, "ST_AllIdents" },
      { Sort, "Sort" },
      { lambda_ParseElements_1, "lambda_ParseElements_1" },
      { Map, "Map" },
      { ST_AllFunctions, "ST_AllFunctions" },
      { lambda_ParseElements_0, "lambda_ParseElements_0" },
      { GenCommonHeaders, "GenCommonHeaders" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkEOF<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 2},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 7, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icFunc, 0, 6, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icCopySTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
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
    // t.ErrorList#1 t.SymTable#1 ( e.Generated#1 ) ( # TkEOF s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[4];
    context[__eGenerated_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tSymTable_1_2], context[__tSymTable_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__tSymTable_1_3], context[__tSymTable_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenCommonHeaders, "GenCommonHeaders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, lambda_ParseElements_0, "lambda_ParseElements_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, Sort, "Sort" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, ST_AllFunctions, "ST_AllFunctions" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, lambda_ParseElements_1, "lambda_ParseElements_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, Sort, "Sort" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, ST_AllIdents, "ST_AllIdents" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, GenCommonTailer, "GenCommonTailer" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_3] );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_2] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __eGenerated_1_1 = 8 };
    enum { __eTail_1_1 = 10 };
    enum { __sDirective_1_1 = 12 };
    enum { __sLnNum_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseElements_2, "lambda_ParseElements_2" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { ParseElement_SwDirective, "ParseElement_SwDirective" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkDirective<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icsVarLeft, 0, __sDirective_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDirective_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 ( e.Generated#1 ) ( # TkDirective s.LnNum#1 s.Directive#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkDirective<int>::name, context[4], context[5] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirective_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, ParseElement_SwDirective, "ParseElement_SwDirective" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, lambda_ParseElements_2, "lambda_ParseElements_2" ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sDirective_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __eGenerated_1_1 = 8 };
    enum { __eTail_1_1 = 10 };
    enum { __sLnNum_1_1 = 12 };
    enum { __eName_1_1 = 13 };
    enum { __eName_1_2 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseElements_3, "lambda_ParseElements_3" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { ST_AddDefined, "ST_AddDefined" },
      { ParseFunction, "ParseFunction" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Local<int>::name,
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 1, 4},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 ( e.Generated#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n3, ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_ident( n4, & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, lambda_ParseElements_3, "lambda_ParseElements_3" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    refalrts::push_stack( n17 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __eGenerated_1_1 = 8 };
    enum { __eTail_1_1 = 10 };
    enum { __sLnNum_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseElements, "ParseElements" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkSemicolon<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 ( e.Generated#1 ) ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[4], context[5] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseElements, "ParseElements" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 4 };
    enum { __tSymTable_1_1 = 5 };
    enum { __eGenerated_1_1 = 6 };
    enum { __tUnexpected_1_1 = 8 };
    enum { __eTail_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddUnexpected, "EL_AddUnexpected" },
      { ParseElements, "ParseElements" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'v', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 ( e.Generated#1 ) t.Unexpected#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tUnexpected_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
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
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
    static const refalrts::RefalFunction functions[] = {
      { ST_AddDefined, "ST_AddDefined" },
      { GenEEnum, "GenEEnum" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Entry<int>::name,
      & idents_EEnum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # EEnum
    if( ! refalrts::ident_left(  & ident_EEnum<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, GenEEnum, "GenEEnum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { ST_AddDefined, "ST_AddDefined" },
      { GenEnum, "GenEnum" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Local<int>::name,
      & idents_Enum<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # Enum
    if( ! refalrts::ident_left(  & ident_Enum<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, GenEnum, "GenEnum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { ST_AddDefined, "ST_AddDefined" },
      { GenESwap, "GenESwap" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Entry<int>::name,
      & idents_ESwap<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # ESwap
    if( ! refalrts::ident_left(  & ident_ESwap<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, GenESwap, "GenESwap" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { ST_AddDefined, "ST_AddDefined" },
      { GenSwap, "GenSwap" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Local<int>::name,
      & idents_Swap<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # Swap
    if( ! refalrts::ident_left(  & ident_Swap<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, GenSwap, "GenSwap" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { AddExtern, "AddExtern" },
      { DontGen, "DontGen" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Entry<int>::name,
      & idents_Extern<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # Extern
    if( ! refalrts::ident_left(  & ident_Extern<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, DontGen, "DontGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, AddExtern, "AddExtern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { DontAdd, "DontAdd" },
      { DontGen, "DontGen" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Local<int>::name,
      & idents_Forward<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # Forward
    if( ! refalrts::ident_left(  & ident_Forward<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, DontGen, "DontGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DontAdd, "DontAdd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalFunction functions[] = {
      { DontAdd, "DontAdd" },
      { DontGen, "DontGen" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Entry<int>::name,
      & idents_Ident<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # Ident
    if( ! refalrts::ident_left(  & ident_Ident<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, DontGen, "DontGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DontAdd, "DontAdd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __eName_1_1 = 4 };
    enum { __sScopeClass_1_1 = 6 };
    enum { __sLnNum_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddExtern, "ST_AddExtern" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddExtern, "ST_AddExtern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult DontGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
    // e.Name#1
    // Unused closed variable e.Name#1

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

static refalrts::FnResult DontAdd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __sScopeClass_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
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
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    enum { __tSymTable_1_1 = 5 };
    enum { __eTail_1_1 = 6 };
    enum { __sLnNum_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    enum { __eName_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddDefined, "ST_AddDefined" },
      { ParseFunction, "ParseFunction" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GN_Entry<int>::name,
      & ident_TkName<int>::name,
      & idents_Entry<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icIdentLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 1, 2},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // t.ErrorList#1 t.SymTable#1 # Entry ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_GN_Entry<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __tUnexpected_1_1 = 4 };
    enum { __eTail_1_1 = 5 };
    enum { __tUnexpected_1_2 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddUnexpected, "EL_AddUnexpected" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Entry<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::ictVarLeft, 0, __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 # Entry t.Unexpected#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Entry<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tUnexpected_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tUnexpected_1_2], context[__tUnexpected_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_2] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
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
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __sDirective_1_1 = 4 };
    enum { __eTail_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenFunctionsFromDirective, "GenFunctionsFromDirective" },
      { ParseNameList, "ParseNameList" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sDirective_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sDirective_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // t.ErrorList#1 t.SymTable#1 s.Directive#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirective_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseNameList, "ParseNameList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, GenFunctionsFromDirective, "GenFunctionsFromDirective" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sDirective_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eGenerated_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __sGenFunc_1_1 = 10 };
    enum { __sTableChangeFunc_1_1 = 11 };
    enum { __sScopeClass_1_1 = 12 };
    enum { __eTail_1_1 = 13 };
    enum { __sLnNum_1_1 = 15 };
    enum { __eName_1_1 = 16 };
    enum { __sGenFunc_1_2 = 18 };
    enum { __eName_1_2 = 19 };
    enum { __sTableChangeFunc_1_2 = 21 };
    enum { __sScopeClass_1_2 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseNameList_Tail, "ParseNameList_Tail" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, __sGenFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopySTVar, 0, __sGenFunc_1_1, 0},
      {refalrts::icCopySTVar, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icCopySTVar, 0, __sScopeClass_1_1, 0},
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
    // ( e.Generated#1 ) t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sGenFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sTableChangeFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sGenFunc_1_2], context[__sGenFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sTableChangeFunc_1_2], context[__sTableChangeFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sScopeClass_1_2], context[__sScopeClass_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseNameList_Tail, "ParseNameList_Tail" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_2] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_2] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_2] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
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
    enum { __eGenerated_1_1 = 4 };
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __tUnexpected_1_1 = 8 };
    enum { __eTail_1_1 = 9 };
    enum { __sGenFunc_1_1 = 11 };
    enum { __sTableChangeFunc_1_1 = 12 };
    enum { __sScopeClass_1_1 = 13 };
    enum { __tUnexpected_1_2 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddUnexpected, "EL_AddUnexpected" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::ictVarLeft, 0, __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.Generated#1 ) t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sGenFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sTableChangeFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tUnexpected_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tUnexpected_1_2], context[__tUnexpected_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_2] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
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

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eGenerated_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __sGenFunc_1_1 = 10 };
    enum { __sTableChangeFunc_1_1 = 11 };
    enum { __sScopeClass_1_1 = 12 };
    enum { __eTail_1_1 = 13 };
    enum { __sLnNum_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseNameList, "ParseNameList" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkComma<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sGenFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
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
    // ( e.Generated#1 ) t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkComma s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sGenFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sTableChangeFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkComma<int>::name, context[4], context[5] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseNameList, "ParseNameList" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_1] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
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
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eGenerated_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __eTail_1_1 = 10 };
    enum { __sGenFunc_1_1 = 12 };
    enum { __sTableChangeFunc_1_1 = 13 };
    enum { __sScopeClass_1_1 = 14 };
    enum { __sLnNum_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkSemicolon<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.Generated#1 ) t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( # TkSemicolon s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sGenFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sTableChangeFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[4], context[5] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
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
    enum { __eGenerated_1_1 = 4 };
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __tUnexpected_1_1 = 8 };
    enum { __eTail_1_1 = 9 };
    enum { __sGenFunc_1_1 = 11 };
    enum { __sTableChangeFunc_1_1 = 12 };
    enum { __sScopeClass_1_1 = 13 };
    enum { __tUnexpected_1_2 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddUnexpected, "EL_AddUnexpected" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eGenerated_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::ictVarLeft, 0, __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eGenerated_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.Generated#1 ) t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eGenerated_1_1] = context[2];
    context[__eGenerated_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sGenFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sTableChangeFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tUnexpected_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tUnexpected_1_2], context[__tUnexpected_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_2] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eGenerated_1_1], context[__eGenerated_1_1 + 1] );
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

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sNumber_1_1 = 2 };
    enum { __eName_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromInt, "StrFromInt" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, 0, __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, '_', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, '_', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
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
    // e.Name#1 s.Number#1
    if( ! refalrts::svar_right( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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

static refalrts::FnResult lambda_ParseFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eName_1_1 = 6 };
    enum { __sNumber_3_1 = 8 };
    enum { __eSentences_3_1 = 9 };
    enum { __eName_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { CreateLambdaName, "CreateLambdaName" },
      { GenFunctionBody, "GenFunctionBody" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_GN_Local<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumber_3_1, 4},
      {refalrts::icContextSet, 0, __eSentences_3_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_3_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_3_1, 0},
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
    // ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
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
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumber_3_1], context[4], context[5] ) )
      break;
    context[__eSentences_3_1] = context[4];
    context[__eSentences_3_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenFunctionBody, "GenFunctionBody" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & ident_GN_Local<int>::name ) )
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, CreateLambdaName, "CreateLambdaName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
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
    res = refalrts::splice_evar( res, context[__eSentences_3_1], context[__eSentences_3_1 + 1] );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sNumber_3_1] );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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

static refalrts::FnResult lambda_ParseFunction_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eName_1_1 = 6 };
    enum { __sScopeClass_1_1 = 8 };
    enum { __eSentences_3_1 = 9 };
    enum { __sNumber_3_1 = 11 };
    enum { __eName_1_2 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenFunctionBody, "GenFunctionBody" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sNumber_3_1, 2},
      {refalrts::icContextSet, 0, __eSentences_3_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_3_1, 0},
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
    // s.ScopeClass#1 ( e.Name#1 ) ( s.Number#3 e.Sentences#3 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_3_1], context[2], context[3] ) )
      break;
    context[__eSentences_3_1] = context[2];
    context[__eSentences_3_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenFunctionBody, "GenFunctionBody" ) )
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
    res = refalrts::splice_evar( res, context[__eSentences_3_1], context[__eSentences_3_1 + 1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
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

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eName_1_1 = 8 };
    enum { __sScopeClass_1_1 = 10 };
    enum { __tErrorList_2_1 = 11 };
    enum { __tSymTable_2_1 = 12 };
    enum { __eTail_2_1 = 13 };
    enum { __tContext_2_1 = 15 };
    enum { __tMainBody_2_1 = 16 };
    enum { __eFunctionBodies_2_1 = 17 };
    enum { __sNextNumber_2_1 = 19 };
    enum { __eName_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
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
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icsVarLeft, 0, __sNextNumber_2_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eTail_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::ictVarRight, 0, __tMainBody_2_1, 4},
      {refalrts::icContextSet, 0, __eFunctionBodies_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFunctionBodies_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tMainBody_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_2_1, 0},
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
    // ( e.Name#1 ) s.ScopeClass#1 ( s.NextNumber#2 e.FunctionBodies#2 t.MainBody#2 ) t.ErrorList#2 t.SymTable#2 ( t.Context#2 ) e.Tail#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNextNumber_2_1], context[4], context[5] ) )
      break;
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eTail_2_1] = context[0];
    context[__eTail_2_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    if( ! refalrts::tvar_right( context[__tMainBody_2_1], context[4], context[5] ) )
      break;
    context[__eFunctionBodies_2_1] = context[4];
    context[__eFunctionBodies_2_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Cntx_Destroy, "Cntx_Destroy" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, lambda_ParseFunction_0, "lambda_ParseFunction_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, lambda_ParseFunction_1, "lambda_ParseFunction_1" ) )
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
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_2_1], context[__eTail_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    refalrts::link_brackets( n3, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, context[__tMainBody_2_1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eFunctionBodies_2_1], context[__eFunctionBodies_2_1 + 1] );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
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

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __sScopeClass_1_1 = 6 };
    enum { __eName_1_1 = 7 };
    enum { __tErrorList_1_1 = 9 };
    enum { __tSymTable_1_1 = 10 };
    enum { __eTail_1_1 = 11 };
    enum { __sLnNum_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseFunction_2, "lambda_ParseFunction_2" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Cntx_Create, "Cntx_Create" },
      { ParseBlock, "ParseBlock" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkOpenBlock<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
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
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[4], context[5] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, ParseBlock, "ParseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, Cntx_Create, "Cntx_Create" ) )
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
    if( ! refalrts::alloc_name( n12, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, lambda_ParseFunction_2, "lambda_ParseFunction_2" ) )
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
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n4, n6 );
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
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 4 };
    enum { __tSymTable_1_1 = 5 };
    enum { __tUnexpected_1_1 = 6 };
    enum { __eTail_1_1 = 7 };
    enum { __sScopeClass_1_1 = 9 };
    enum { __tUnexpected_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddUnexpected, "EL_AddUnexpected" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 t.Unexpected#1 e.Tail#1
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tUnexpected_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tUnexpected_1_2], context[__tUnexpected_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_2] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
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

static refalrts::FnResult lambda_ResolveLambdaName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eMainName_1_1 = 6 };
    enum { __sNumber_2_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { CreateLambdaName, "CreateLambdaName" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkName<int>::name,
      & idents_LambdaName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icIdentLeft, 0, 1, 4},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNumber_2_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_2_1, 0},
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
    // ( e.MainName#1 ) ( # TkName # LambdaName s.Number#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      break;
    if( ! refalrts::ident_left(  & ident_LambdaName<int>::name, context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumber_2_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, CreateLambdaName, "CreateLambdaName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNumber_2_1] );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
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
    enum { __eMainName_1_1 = 6 };
    enum { __eSubResult_2_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ResolveLambdaName, "ResolveLambdaName" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __eSubResult_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSubResult_2_1, 0},
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
    // ( e.MainName#1 ) ( # Brackets e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__eSubResult_2_1] = context[4];
    context[__eSubResult_2_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ResolveLambdaName, "ResolveLambdaName" ) )
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
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eSubResult_2_1], context[__eSubResult_2_1 + 1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
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
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eMainName_1_1 = 8 };
    enum { __eName_2_1 = 10 };
    enum { __eSubResult_2_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ResolveLambdaName, "ResolveLambdaName" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icBracketLeft, 0, 6, 4},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __eName_2_1, 6},
      {refalrts::icContextSet, 0, __eSubResult_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSubResult_2_1, 0},
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
    // ( e.MainName#1 ) ( # ADT_Brackets ( e.Name#2 ) e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[4], context[5] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__eName_2_1] = context[6];
    context[__eName_2_1 + 1] = context[7];
    context[__eSubResult_2_1] = context[4];
    context[__eSubResult_2_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, ResolveLambdaName, "ResolveLambdaName" ) )
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSubResult_2_1], context[__eSubResult_2_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
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
    enum { __eMainName_1_1 = 6 };
    enum { __eSubResult_2_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ResolveLambdaName, "ResolveLambdaName" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CallBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __eSubResult_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSubResult_2_1, 0},
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
    // ( e.MainName#1 ) ( # CallBrackets e.SubResult#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__eSubResult_2_1] = context[4];
    context[__eSubResult_2_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ResolveLambdaName, "ResolveLambdaName" ) )
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
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eSubResult_2_1], context[__eSubResult_2_1 + 1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
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
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tOtherTerm_2_1 = 4 };
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
      {refalrts::ictVarLeft, 0, __tOtherTerm_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tOtherTerm_2_1, 0},
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
    // ( e.MainName#1 ) t.OtherTerm#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.MainName#1
    if( ! refalrts::tvar_left( context[__tOtherTerm_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tOtherTerm_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eMainName_1_1 = 4 };
    enum { __eResult_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Map, "Map" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __eResult_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.MainName#1 ) e.Result#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" ) )
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
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
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

static refalrts::FnResult lambda_GenFunctionBody_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eMainName_1_1 = 10 };
    enum { __ePattern_2_1 = 12 };
    enum { __eResult_2_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ResolveLambdaName, "ResolveLambdaName" },
      { MakeAlgorithm, "MakeAlgorithm" },
      { GenSentence, "GenSentence" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 4},
      {refalrts::icBracketLeft, 0, 8, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __ePattern_2_1, 6},
      {refalrts::icContextSet, 0, __eResult_2_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // ( e.MainName#1 ) ( ( e.Pattern#2 ) ( e.Result#2 ) )
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__ePattern_2_1] = context[6];
    context[__ePattern_2_1 + 1] = context[7];
    context[__eResult_2_1] = context[8];
    context[__eResult_2_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenSentence, "GenSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, MakeAlgorithm, "MakeAlgorithm" ) )
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
    if( ! refalrts::alloc_name( n8, ResolveLambdaName, "ResolveLambdaName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n6, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eResult_2_1], context[__eResult_2_1 + 1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
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

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sScopeClass_1_1 = 6 };
    enum { __eMainName_1_1 = 7 };
    enum { __eName_1_1 = 9 };
    enum { __eSentences_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GenFnEnd, "GenFnEnd" },
      { lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Map, "Map" },
      { Fetch, "Fetch" },
      { GenFnStart, "GenFnStart" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eSentences_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
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
    // s.ScopeClass#1 ( e.MainName#1 ) ( e.Name#1 ) e.Sentences#1
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eMainName_1_1] = context[2];
    context[__eMainName_1_1 + 1] = context[3];
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];
    context[__eSentences_1_1] = context[0];
    context[__eSentences_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenFnStart, "GenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" ) )
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
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n5, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eMainName_1_1], context[__eMainName_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
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

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eFunctions_1_1 = 4 };
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __tContext_1_1 = 8 };
    enum { __eTokens_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Cntx_PushScope, "Cntx_PushScope" },
      { DoParseBlock, "DoParseBlock" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icContextSet, 0, __eTokens_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 e.Tokens#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[__eTokens_1_1] = context[0];
    context[__eTokens_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoParseBlock, "DoParseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, Cntx_PushScope, "Cntx_PushScope" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
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
    res = refalrts::splice_evar( res, context[__eTokens_1_1], context[__eTokens_1_1 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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

static refalrts::FnResult lambda_DoParseBlock_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __sNumber_1_1 = 6 };
    enum { __eFunctions_1_1 = 7 };
    enum { __eSentences_1_1 = 9 };
    enum { __tErrorList_1_1 = 11 };
    enum { __tSymTable_1_1 = 12 };
    enum { __tContext_2_1 = 13 };
    enum { __eFreeContext_2_1 = 14 };
    enum { __sNumber_1_2 = 16 };
    enum { __eFreeContext_2_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { AddContextToSentence, "AddContextToSentence" },
      { Map, "Map" },
      { Inc, "Inc" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::icContextSet, 0, __eSentences_1_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icContextSet, 0, __eFreeContext_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eFreeContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icCopyEVar, 0, __eFreeContext_2_1, 0},
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
    // s.Number#1 ( e.Functions#1 ) ( e.Sentences#1 ) t.ErrorList#1 t.SymTable#1 t.Context#2 e.FreeContext#2
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[__eFreeContext_2_1] = context[0];
    context[__eFreeContext_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eFreeContext_2_2], context[__eFreeContext_2_2 + 1], context[__eFreeContext_2_1], context[__eFreeContext_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, AddContextToSentence, "AddContextToSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eFreeContext_2_2], context[__eFreeContext_2_2 + 1] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n0, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n4, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFreeContext_2_1], context[__eFreeContext_2_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __sNumber_1_1 = 8 };
    enum { __eFunctions_1_1 = 9 };
    enum { __tErrorList_1_1 = 11 };
    enum { __tSymTable_1_1 = 12 };
    enum { __tContext_1_1 = 13 };
    enum { __eSentences_1_1 = 14 };
    enum { __eTail_1_1 = 16 };
    enum { __sLnNumber_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_DoParseBlock_0, "lambda_DoParseBlock_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Cntx_PopScope, "Cntx_PopScope" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkCloseBlock<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNumber_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkCloseBlock s.LnNumber#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumber_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, lambda_DoParseBlock_0, "lambda_DoParseBlock_0" ) )
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
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
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
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __sNumber_1_1 = 8 };
    enum { __eFunctions_1_1 = 9 };
    enum { __tErrorList_1_1 = 11 };
    enum { __tSymTable_1_1 = 12 };
    enum { __tContext_1_1 = 13 };
    enum { __eSentences_1_1 = 14 };
    enum { __eTail_1_1 = 16 };
    enum { __sLnNum_1_1 = 18 };
    enum { __sNumber_1_2 = 19 };
    enum { __sLnNum_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Cntx_PopScope, "Cntx_PopScope" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { Inc, "Inc" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkEOF<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 2},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'O', 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, ',', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icChar, 0, '}', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( # TkEOF s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkEOF<int>::name, context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, Cntx_PopScope, "Cntx_PopScope" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_ident( n44, & ident_TkEOF<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n43, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n38, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n37 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eFunctions_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eSentences_1_1 = 11 };
    enum { __eTokens_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseSentence, "ParseSentence" },
      { DoParseBlock, "DoParseBlock" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, __eTokens_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eTokens_1_1] = context[0];
    context[__eTokens_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoParseBlock, "DoParseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ParseSentence, "ParseSentence" ) )
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTokens_1_1], context[__eTokens_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eContext_1_1 = 8 };
    enum { __ePattern_1_1 = 10 };
    enum { __eResult_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { CreateContext, "CreateContext" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 2},
      {refalrts::icBracketLeft, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icContextSet, 0, __eContext_1_1, 0},
      {refalrts::icContextSet, 0, __ePattern_1_1, 4},
      {refalrts::icContextSet, 0, __eResult_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // e.Context#1 ( ( e.Pattern#1 ) ( e.Result#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    context[__eContext_1_1] = context[0];
    context[__eContext_1_1 + 1] = context[1];
    context[__ePattern_1_1] = context[4];
    context[__ePattern_1_1 + 1] = context[5];
    context[__eResult_1_1] = context[6];
    context[__eResult_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, CreateContext, "CreateContext" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
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
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n1, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eContext_1_1], context[__eContext_1_1 + 1] );
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

static refalrts::FnResult lambda_CreateContext_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eIndex_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkVariable<int>::name,
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icCharLeft, 0, (int)'e', 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eIndex_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( 'e e.Index#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eIndex_2_1] = context[2];
    context[__eIndex_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_ident( n3, & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIndex_2_1], context[__eIndex_2_1 + 1] );
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
    enum { __sMode_2_1 = 4 };
    enum { __eIndex_2_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sMode_2_1, 2},
      {refalrts::icContextSet, 0, __eIndex_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_2_1, 0},
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
    // ( s.Mode#2 e.Index#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_2_1], context[2], context[3] ) )
      break;
    context[__eIndex_2_1] = context[2];
    context[__eIndex_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_2_1], context[__eIndex_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
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

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eContext_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CreateContext_0, "lambda_CreateContext_0" },
      { Map, "Map" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, __eContext_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eContext_1_1, 0},
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
    // e.Context#1
    context[__eContext_1_1] = context[0];
    context[__eContext_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, lambda_CreateContext_0, "lambda_CreateContext_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eContext_1_1], context[__eContext_1_1 + 1] );
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

static refalrts::FnResult lambda_ParseSentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __tErrorList_2_1 = 6 };
    enum { __tSymTable_2_1 = 7 };
    enum { __tContext_2_1 = 8 };
    enum { __ePattern_2_1 = 9 };
    enum { __eTokens_2_1 = 11 };
    enum { __sLnNum_2_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkReplace<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 4},
      {refalrts::icContextSet, 0, __ePattern_2_1, 2},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( # TkReplace s.LnNum#2 ) e.Tokens#2
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkReplace<int>::name, context[4], context[5] ) )
      break;
    context[__ePattern_2_1] = context[2];
    context[__ePattern_2_1 + 1] = context[3];
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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
    enum { __tErrorList_2_1 = 6 };
    enum { __tSymTable_2_1 = 7 };
    enum { __tContext_2_1 = 8 };
    enum { __ePattern_2_1 = 9 };
    enum { __eTokens_2_1 = 11 };
    enum { __sLnNum_2_1 = 13 };
    enum { __sNextResultTerm_2_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __ePattern_2_1, 2},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icsVarLeft, 0, __sNextResultTerm_2_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_2_1, 0},
      {refalrts::icChar, 0, 'I', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) ( s.NextResultTerm#2 s.LnNum#2 e.Info#2 ) e.Tokens#2
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__ePattern_2_1] = context[2];
    context[__ePattern_2_1 + 1] = context[3];
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextResultTerm_2_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[4], context[5] ) )
      break;
    // Unused closed variable e.Info#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult lambda_ParseSentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eFunctions_1_1 = 6 };
    enum { __tErrorList_2_1 = 8 };
    enum { __tSymTable_2_1 = 9 };
    enum { __tContext_2_1 = 10 };
    enum { __ePattern_2_1 = 11 };
    enum { __eTokens_2_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __ePattern_2_1, 4},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Pattern#2 ) e.Tokens#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__ePattern_2_1] = context[4];
    context[__ePattern_2_1 + 1] = context[5];
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];

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
    if( ! refalrts::alloc_name( n3, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
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

static refalrts::FnResult lambda_ParseSentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eSentences_1_1 = 12 };
    enum { __ePattern_2_1 = 14 };
    enum { __eFunctions_2_1 = 16 };
    enum { __tErrorList_2_1 = 18 };
    enum { __tSymTable_2_1 = 19 };
    enum { __tContext_2_1 = 20 };
    enum { __eResult_2_1 = 21 };
    enum { __eTokens_2_1 = 23 };
    enum { __sLnNum_2_1 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkSemicolon<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eSentences_1_1, 2},
      {refalrts::icContextSet, 0, __ePattern_2_1, 4},
      {refalrts::icContextSet, 0, __eFunctions_2_1, 6},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 10},
      {refalrts::icContextSet, 0, __eResult_2_1, 8},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkSemicolon s.LnNum#2 ) e.Tokens#2
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
    context[__eSentences_1_1] = context[2];
    context[__eSentences_1_1 + 1] = context[3];
    context[__ePattern_2_1] = context[4];
    context[__ePattern_2_1 + 1] = context[5];
    context[__eFunctions_2_1] = context[6];
    context[__eFunctions_2_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkSemicolon<int>::name, context[10], context[11] ) )
      break;
    context[__eResult_2_1] = context[8];
    context[__eResult_2_1 + 1] = context[9];
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
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
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
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
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    refalrts::link_brackets( n5, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eResult_2_1], context[__eResult_2_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_2_1], context[__eFunctions_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eSentences_1_1 = 12 };
    enum { __ePattern_2_1 = 14 };
    enum { __eFunctions_2_1 = 16 };
    enum { __tErrorList_2_1 = 18 };
    enum { __tSymTable_2_1 = 19 };
    enum { __tContext_2_1 = 20 };
    enum { __eResult_2_1 = 21 };
    enum { __eTokens_2_1 = 23 };
    enum { __sLnNum_2_1 = 25 };
    enum { __sLnNum_2_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkCloseBlock<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eSentences_1_1, 2},
      {refalrts::icContextSet, 0, __ePattern_2_1, 4},
      {refalrts::icContextSet, 0, __eFunctions_2_1, 6},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 10},
      {refalrts::icContextSet, 0, __eResult_2_1, 8},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_2_1, 0},
      {refalrts::icChar, 0, 'M', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sLnNum_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) ( # TkCloseBlock s.LnNum#2 ) e.Tokens#2
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
    context[__eSentences_1_1] = context[2];
    context[__eSentences_1_1 + 1] = context[3];
    context[__ePattern_2_1] = context[4];
    context[__ePattern_2_1 + 1] = context[5];
    context[__eFunctions_2_1] = context[6];
    context[__eFunctions_2_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkCloseBlock<int>::name, context[10], context[11] ) )
      break;
    context[__eResult_2_1] = context[8];
    context[__eResult_2_1 + 1] = context[9];
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_2_2], context[__sLnNum_2_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_ident( n33, & ident_TkCloseBlock<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    refalrts::link_brackets( n32, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, context[__sLnNum_2_2] );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n24, n31 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n25, n30 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eResult_2_1], context[__eResult_2_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_2_1], context[__eFunctions_2_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eSentences_1_1 = 10 };
    enum { __ePattern_2_1 = 12 };
    enum { __eFunctions_2_1 = 14 };
    enum { __tErrorList_2_1 = 16 };
    enum { __tSymTable_2_1 = 17 };
    enum { __tContext_2_1 = 18 };
    enum { __eResult_2_1 = 19 };
    enum { __tUnexpected_2_1 = 21 };
    enum { __eTokens_2_1 = 22 };
    enum { __tUnexpected_2_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
      { EL_AddUnexpected, "EL_AddUnexpected" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eSentences_1_1, 2},
      {refalrts::icContextSet, 0, __ePattern_2_1, 4},
      {refalrts::icContextSet, 0, __eFunctions_2_1, 6},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eResult_2_1, 8},
      {refalrts::ictVarLeft, 0, __tUnexpected_2_1, 0},
      {refalrts::icContextSet, 0, __eTokens_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tUnexpected_2_1, 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icCopySTVar, 0, __tUnexpected_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_2_1, 0},
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
    // ( e.Sentences#1 ) ( e.Pattern#2 ) ( e.Functions#2 ) t.ErrorList#2 t.SymTable#2 t.Context#2 ( e.Result#2 ) t.Unexpected#2 e.Tokens#2
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
    context[__eSentences_1_1] = context[2];
    context[__eSentences_1_1 + 1] = context[3];
    context[__ePattern_2_1] = context[4];
    context[__ePattern_2_1 + 1] = context[5];
    context[__eFunctions_2_1] = context[6];
    context[__eFunctions_2_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eResult_2_1] = context[8];
    context[__eResult_2_1 + 1] = context[9];
    if( ! refalrts::tvar_left( context[__tUnexpected_2_1], context[0], context[1] ) )
      break;
    context[__eTokens_2_1] = context[0];
    context[__eTokens_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tUnexpected_2_2], context[__tUnexpected_2_1] ) )
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
    if( ! refalrts::alloc_name( n3, EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_2_1], context[__eTokens_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tUnexpected_2_2] );
    refalrts::link_brackets( n17, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n18, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eResult_2_1], context[__eResult_2_1 + 1] );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__ePattern_2_1], context[__ePattern_2_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_2_1], context[__eFunctions_2_1 + 1] );
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

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eFunctions_1_1 = 6 };
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eSentences_1_1 = 11 };
    enum { __eTokens_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
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
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, __eTokens_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 6, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eSentences_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) e.Tokens#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eTokens_1_1] = context[0];
    context[__eTokens_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, ParsePattern, "ParsePattern" ) )
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, lambda_ParseSentence_0, "lambda_ParseSentence_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, lambda_ParseSentence_1, "lambda_ParseSentence_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, lambda_ParseSentence_2, "lambda_ParseSentence_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTokens_1_1], context[__eTokens_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __tSymTable_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eIndex_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __tErrorList_2_1 = 19 };
    enum { __tContext_2_1 = 20 };
    enum { __sMode_2_1 = 21 };
    enum { __sDepth_2_1 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eIndex_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 8},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_2_1, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eIndex_1_1] = context[6];
    context[__eIndex_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[8];
    context[__eTail_1_1 + 1] = context[9];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_ident( n6, & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __tSymTable_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eIndex_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __tErrorList_2_1 = 19 };
    enum { __tContext_2_1 = 20 };
    enum { __sMode_2_1 = 21 };
    enum { __sDepth_2_1 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eIndex_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 8},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_2_1, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eIndex_1_1] = context[6];
    context[__eIndex_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[8];
    context[__eTail_1_1 + 1] = context[9];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_ident( n6, & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBrackets_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sChar_1_1 = 17 };
    enum { __sLnNum_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBrackets_1_1] = context[2];
    context[__eMultiBrackets_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_ident( n6, & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBrackets_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sNumber_1_1 = 17 };
    enum { __sLnNum_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBrackets_1_1] = context[2];
    context[__eMultiBrackets_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_ident( n6, & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBrackets_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    enum { __eName_1_1 = 18 };
    enum { __eName_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddFunctionCall, "ST_AddFunctionCall" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icContextSet, 0, __eName_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBrackets_1_1] = context[2];
    context[__eMultiBrackets_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    context[__eName_1_1] = context[6];
    context[__eName_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ST_AddFunctionCall, "ST_AddFunctionCall" ) )
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
    if( ! refalrts::alloc_ident( n9, & ident_TkName<int>::name ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eMultiBrackets_1_1 = 13 };
    enum { __eScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __eName_1_1 = 19 };
    enum { __sLnNumMarker_1_1 = 21 };
    enum { __sLnNumName_1_1 = 22 };
    enum { __eName_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddIdent, "ST_AddIdent" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkIdentifier<int>::name,
      & ident_TkName<int>::name,
      & idents_TkIdentMarker<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 2, 6},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 1, 8},
      {refalrts::icContextSet, 0, __eMultiBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNumMarker_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icsVarLeft, 0, __sLnNumName_1_1, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNumMarker#1 ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBrackets_1_1] = context[2];
    context[__eMultiBrackets_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumMarker_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ST_AddIdent, "ST_AddIdent" ) )
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
    if( ! refalrts::alloc_ident( n9, & ident_TkIdentifier<int>::name ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBrackets_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkIdentMarker<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBrackets_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'M', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\'', 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icChar, 0, '\'', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBrackets_1_1] = context[2];
    context[__eMultiBrackets_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
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
    refalrts::push_stack( n30 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eMultiBracket_1_1 = 13 };
    enum { __eScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __sLnNumVar_1_1 = 19 };
    enum { __sMode_1_1 = 20 };
    enum { __eIndex_1_1 = 21 };
    enum { __sLnNumRedef_1_1 = 23 };
    enum { __eIndex_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParsePattern_0, "lambda_ParsePattern_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Cntx_AddNewVariable, "Cntx_AddNewVariable" },
      { CheckAddVariable, "CheckAddVariable" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkRedefinition<int>::name,
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 1, 6},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNumVar_1_1, 6},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 6},
      {refalrts::icContextSet, 0, __eIndex_1_1, 6},
      {refalrts::icsVarLeft, 0, __sLnNumRedef_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNumVar_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNumVar#1 s.Mode#1 e.Index#1 ) ( # TkRedefinition s.LnNumRedef#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumVar_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[6], context[7] ) )
      break;
    context[__eIndex_1_1] = context[6];
    context[__eIndex_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sLnNumRedef_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n3, CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Cntx_AddNewVariable, "Cntx_AddNewVariable" ) )
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
    if( ! refalrts::alloc_name( n8, lambda_ParsePattern_0, "lambda_ParsePattern_0" ) )
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
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    refalrts::push_stack( n17 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sLnNumVar_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    enum { __sMode_1_1 = 18 };
    enum { __eIndex_1_1 = 19 };
    enum { __eIndex_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParsePattern_1, "lambda_ParsePattern_1" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Cntx_AddVariable, "Cntx_AddVariable" },
      { CheckAddVariable, "CheckAddVariable" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 6},
      {refalrts::icContextSet, 0, __eIndex_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[6], context[7] ) )
      break;
    context[__eIndex_1_1] = context[6];
    context[__eIndex_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n3, CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Cntx_AddVariable, "Cntx_AddVariable" ) )
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
    if( ! refalrts::alloc_name( n8, lambda_ParsePattern_1, "lambda_ParsePattern_1" ) )
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
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    refalrts::push_stack( n17 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkRedefinition<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'N', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'g', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkRedefinition s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_TkRedefinition<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'k' ) )
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
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n32 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseBracket<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkOpenBracket<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 3, 6},
      {refalrts::icIdentRight, 0, 2, 6},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenBracket ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenBracket<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_ident( n4, & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_ident( n5, & ident_TkCloseBracket<int>::name ) )
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
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n2, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n3, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eMultiBracket_1_1 = 13 };
    enum { __eScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __sLnNumBracket_1_1 = 19 };
    enum { __sLnNumName_1_1 = 20 };
    enum { __eName_1_1 = 21 };
    enum { __eName_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddFunctionCall, "ST_AddFunctionCall" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_TkName<int>::name,
      & ident_TkOpenADT<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 4, 6},
      {refalrts::icIdentRight, 0, 3, 6},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNumBracket_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icsVarLeft, 0, __sLnNumName_1_1, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNumName_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNumBracket_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumBracket#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumBracket_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_ident( n8, & ident_TkCloseADT<int>::name ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n11, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n5, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sLnNumBracket_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNumName_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    enum { __sLnNum_1_2 = 18 };
    enum { __tSymTable_1_2 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_GetAnyName, "ST_GetAnyName" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_TkOpenADT<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 3, 6},
      {refalrts::icIdentRight, 0, 2, 6},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icChar, 0, '[', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__tSymTable_1_2], context[__tSymTable_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_ident( n30, & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_ident( n31, & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n41 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n34, n40 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n35, n39 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::push_stack( n38 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_2] );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n28, n33 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n29, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n2 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    enum { __sLnNum_1_2 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseCall<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkOpenCall<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 3, 6},
      {refalrts::icIdentRight, 0, 2, 6},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenCall ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[6], context[7] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenCall<int>::name, context[6], context[7] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_open_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_open_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_ident( n52, & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_ident( n53, & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_open_bracket( n56 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_close_call( n58 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n58 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n56, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    refalrts::link_brackets( n50, n55 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::link_brackets( n51, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n49 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eMultiBracket_1_1 = 13 };
    enum { __eInnerScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __sBracketsSign_1_1 = 19 };
    enum { __eScanned_1_1 = 20 };
    enum { __sInnerLnNum_1_1 = 22 };
    enum { __sCloseBracket_1_1 = 23 };
    enum { __sCloseBracket_1_2 = 24 };
    enum { __sClosedLnNum_1_1 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icBracketRight, 0, 8, 2},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eInnerScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketsSign_1_1, 8},
      {refalrts::icsVarLeft, 0, __sInnerLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 8},
      {refalrts::icsRepeatRight, __sCloseBracket_1_2, __sCloseBracket_1_1, 6},
      {refalrts::icContextSet, 0, __eScanned_1_1, 8},
      {refalrts::icsVarLeft, 0, __sClosedLnNum_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.ClosedLnNum#1 s.CloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[2], context[3] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eInnerScanned_1_1] = context[4];
    context[__eInnerScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::repeated_stvar_right( context[__sCloseBracket_1_2], context[__sCloseBracket_1_1], context[6], context[7] ) )
      break;
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sClosedLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eMultiBracket_1_1 = 13 };
    enum { __eInnerScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __sBracketsSign_1_1 = 19 };
    enum { __sInnerLnNum_1_1 = 20 };
    enum { __eScanned_1_1 = 21 };
    enum { __sLnNum_1_1 = 23 };
    enum { __sOtherCloseBracket_1_1 = 24 };
    enum { __sCloseBracket_1_1 = 25 };
    enum { __sBracketsSign_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromBracket, "StrFromBracket" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icBracketRight, 0, 8, 2},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eInnerScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketsSign_1_1, 8},
      {refalrts::icsVarLeft, 0, __sInnerLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 8},
      {refalrts::icContextSet, 0, __eScanned_1_1, 8},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sOtherCloseBracket_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sOtherCloseBracket_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.OtherCloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[2], context[3] ) )
      break;
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eInnerScanned_1_1] = context[4];
    context[__eInnerScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[8], context[9] ) )
      break;
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sOtherCloseBracket_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_ident( n36, & ident_Close<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n38 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n35, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_stvar( res, context[__sOtherCloseBracket_1_1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n31, n34 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sInnerLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eScanned_1_1 = 11 };
    enum { __eTail_1_1 = 13 };
    enum { __sLnNum_1_1 = 15 };
    enum { __sCloseBracket_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromBracket, "StrFromBracket" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icIdentLeft, 0, 0, 6},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 6},
      {refalrts::icEmpty, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sCloseBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n33 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, context[__sCloseBracket_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __tErrorList_1_1 = 8 };
    enum { __tSymTable_1_1 = 9 };
    enum { __tContext_1_1 = 10 };
    enum { __eMultiBracket_1_1 = 11 };
    enum { __eInnerScanned_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
    enum { __sBracketsSign_1_1 = 17 };
    enum { __sInnerLnNum_1_1 = 18 };
    enum { __eScanned_1_1 = 19 };
    enum { __sCloseBracket_1_1 = 21 };
    enum { __sBracketsSign_1_2 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromBracket, "StrFromBracket" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParsePattern, "ParsePattern" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eInnerScanned_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketsSign_1_1, 6},
      {refalrts::icsVarLeft, 0, __sInnerLnNum_1_1, 6},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 6},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sInnerLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
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
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eInnerScanned_1_1] = context[4];
    context[__eInnerScanned_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[6], context[7] ) )
      break;
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParsePattern, "ParsePattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n35 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n31, n34 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sInnerLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 6 };
    enum { __tSymTable_1_1 = 7 };
    enum { __tContext_1_1 = 8 };
    enum { __ePattern_1_1 = 9 };
    enum { __eTail_1_1 = 11 };
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
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icContextSet, 0, __ePattern_1_1, 4},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Pattern#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    context[__ePattern_1_1] = context[4];
    context[__ePattern_1_1 + 1] = context[5];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __tErrorList_1_1 = 2 };
    enum { __sLnNum_1_1 = 3 };
    enum { __sOldMode_1_1 = 4 };
    enum { __sNewMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    enum { __eIndex_1_2 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sOldMode_1_1, 0},
      {refalrts::icsVarLeft, 0, __sNewMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'V', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_1_1, 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sNewMode_1_1, 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'h', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 's', 0},
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
    // t.ErrorList#1 s.LnNum#1 s.OldMode#1 s.NewMode#1 e.Index#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOldMode_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNewMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n39 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, context[__sNewMode_1_1] );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sOldMode_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tErrorList_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __tContext_2_1 = 6 };
    enum { __sDepth_2_1 = 7 };
    enum { __sLnNum_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Success<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # Success s.Depth#2
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Index#1
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __tContext_2_1 = 9 };
    enum { __sDepth_2_1 = 10 };
    enum { __sOldMode_2_1 = 11 };
    enum { __sOldMode_2_2 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { InvalidModeVariableError, "InvalidModeVariableError" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_InvalidMode<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icsVarLeft, 0, __sOldMode_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icCopySTVar, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOldMode_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sOldMode_2_2], context[__sOldMode_2_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_stvar( res, context[__sOldMode_2_2] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sOldMode_2_1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __tContext_2_1 = 9 };
    enum { __sDepth_2_1 = 10 };
    enum { __sMode_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_AlreadyBounded<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'V', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'h', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, '^', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'f', 0},
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
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # AlreadyBounded s.Depth#2
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_AlreadyBounded<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '^' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_close_call( n74 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    refalrts::push_stack( n74 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tContext_1_1 = 3 };
    enum { __sFnContextModifier_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __sMode_1_2 = 9 };
    enum { __eIndex_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Fetch, "Fetch" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icsVarLeft, 0, __sFnContextModifier_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, __sFnContextModifier_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
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
    // t.ErrorList#1 t.Context#1 s.FnContextModifier#1 s.LnNum#1 s.Mode#1 e.Index#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sFnContextModifier_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];

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
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" ) )
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
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__sFnContextModifier_1_1] );
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

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkOpenBracket<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '(', 0},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '(' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkCloseBracket<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ')', 0},
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
    // # TkCloseBracket
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ')' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkOpenCall<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '<', 0},
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
    // # TkOpenCall
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '<' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkCloseCall<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '>', 0},
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
    // # TkCloseCall
    if( ! refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '>' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkOpenADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '[', 0},
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
    // # TkOpenADT
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '[' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkCloseADT<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, ']', 0},
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
    // # TkCloseADT
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ']' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '(', 0},
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
    // # Brackets
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '(' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '[', 0},
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
    // # ADT_Brackets
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '[' ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & idents_CallBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icChar, 0, '<', 0},
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
    // # CallBrackets
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '<' ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 12 };
    enum { __tSymTable_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __eIndex_1_1 = 21 };
    enum { __tErrorList_2_1 = 23 };
    enum { __tContext_2_1 = 24 };
    enum { __sMode_2_1 = 25 };
    enum { __sDepth_2_1 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 10},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_2_1, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[8];
    context[__eTail_1_1 + 1] = context[9];
    context[__eIndex_1_1] = context[10];
    context[__eIndex_1_1 + 1] = context[11];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( n8, & ident_TkVariable<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 12 };
    enum { __tSymTable_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __tErrorList_2_1 = 21 };
    enum { __tContext_2_1 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 8},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // ( e.Functions#1 ) t.SymTable#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[8];
    context[__eTail_1_1 + 1] = context[9];
    // Unused closed variable e.Index#1
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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

static refalrts::FnResult lambda_ParseResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Brackets<int>::name,
      & idents_TkOpenBracket<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name,
      & idents_TkOpenCall<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # TkOpenCall
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult lambda_ParseResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseBracket<int>::name,
      & idents_TkOpenBracket<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # TkOpenBracket
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
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
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseCall<int>::name,
      & idents_TkOpenCall<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // # TkOpenCall
    if( ! refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & ident_TkCloseCall<int>::name ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sChar_1_1 = 21 };
    enum { __sLnNum_1_1 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkChar<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sChar_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( n8, & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sNumber_1_1 = 21 };
    enum { __sLnNum_1_1 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkNumber<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sNumber_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( n8, & ident_TkNumber<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    enum { __eName_1_1 = 22 };
    enum { __eName_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddFunctionCall, "ST_AddFunctionCall" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
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
    if( ! refalrts::alloc_ident( n11, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 12 };
    enum { __tErrorList_1_1 = 14 };
    enum { __tSymTable_1_1 = 15 };
    enum { __tContext_1_1 = 16 };
    enum { __eMultiBracket_1_1 = 17 };
    enum { __eScanned_1_1 = 19 };
    enum { __eTail_1_1 = 21 };
    enum { __eName_1_1 = 23 };
    enum { __sMarkerLnNum_1_1 = 25 };
    enum { __sNameLnNum_1_1 = 26 };
    enum { __eName_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddIdent, "ST_AddIdent" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkIdentifier<int>::name,
      & ident_TkName<int>::name,
      & idents_TkIdentMarker<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 2, 8},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 1, 10},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMarkerLnNum_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icsVarLeft, 0, __sNameLnNum_1_1, 10},
      {refalrts::icContextSet, 0, __eName_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.MarkerLnNum#1 ) ( # TkName s.NameLnNum#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[8], context[9] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMarkerLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sNameLnNum_1_1], context[10], context[11] ) )
      break;
    context[__eName_1_1] = context[10];
    context[__eName_1_1 + 1] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, ST_AddIdent, "ST_AddIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
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
    if( ! refalrts::alloc_ident( n11, & ident_TkIdentifier<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkIdentMarker<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'M', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icChar, 0, '#', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkIdentMarker s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkIdentMarker<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n32 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n4 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    enum { __sMode_1_1 = 22 };
    enum { __eIndex_1_1 = 23 };
    enum { __eIndex_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseResult_0, "lambda_ParseResult_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { CheckUseVariable, "CheckUseVariable" },
      { Fetch, "Fetch" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 8},
      {refalrts::icContextSet, 0, __eIndex_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
      break;
    context[__eIndex_1_1] = context[8];
    context[__eIndex_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n3, CheckUseVariable, "CheckUseVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, lambda_ParseResult_0, "lambda_ParseResult_0" ) )
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
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFunctions_1_1 = 12 };
    enum { __tErrorList_1_1 = 14 };
    enum { __tSymTable_1_1 = 15 };
    enum { __tContext_1_1 = 16 };
    enum { __eMultiBracket_1_1 = 17 };
    enum { __eScanned_1_1 = 19 };
    enum { __eTail_1_1 = 21 };
    enum { __sLnNumADT_1_1 = 23 };
    enum { __sLnNumName_1_1 = 24 };
    enum { __eName_1_1 = 25 };
    enum { __eName_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_AddFunctionCall, "ST_AddFunctionCall" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_TkName<int>::name,
      & ident_TkOpenADT<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 4, 8},
      {refalrts::icIdentRight, 0, 3, 8},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 2, 10},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNumADT_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icsVarLeft, 0, __sLnNumName_1_1, 10},
      {refalrts::icContextSet, 0, __eName_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNumName_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNumADT_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNumADT#1 # TkOpenADT ) ( # TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[8], context[9] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumADT_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[10], context[11] ) )
      break;
    context[__eName_1_1] = context[10];
    context[__eName_1_1 + 1] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_ident( n10, & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__sLnNumADT_1_1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNumName_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    enum { __sLnNum_1_2 = 22 };
    enum { __tSymTable_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ST_GetAnyName, "ST_GetAnyName" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkCloseADT<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_TkOpenADT<int>::name,
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 3, 8},
      {refalrts::icIdentRight, 0, 2, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'x', 0},
      {refalrts::icChar, 0, 'p', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'm', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icChar, 0, '[', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 # TkOpenADT ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      break;
    if( ! refalrts::ident_right(  & ident_TkOpenADT<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__tSymTable_1_2], context[__tSymTable_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_ident( n32, & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_ident( n33, & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n43 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n36, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::link_brackets( n37, n41 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_2] );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n30, n35 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n31, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    enum { __sOpenBracket_1_1 = 22 };
    enum { __sOpenBracket_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseResult_2, "lambda_ParseResult_2" },
      { Fetch, "Fetch" },
      { lambda_ParseResult_1, "lambda_ParseResult_1" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Open<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sOpenBracket_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sOpenBracket_1_1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icCopySTVar, 0, __sOpenBracket_1_1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # Open s.LnNum#1 s.OpenBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Open<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sOpenBracket_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sOpenBracket_1_2], context[__sOpenBracket_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n7, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, lambda_ParseResult_1, "lambda_ParseResult_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, lambda_ParseResult_2, "lambda_ParseResult_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n4, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n5, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sOpenBracket_1_2] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sOpenBracket_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __eFunctions_1_1 = 12 };
    enum { __tErrorList_1_1 = 14 };
    enum { __tSymTable_1_1 = 15 };
    enum { __tContext_1_1 = 16 };
    enum { __eMultiBracket_1_1 = 17 };
    enum { __eInnerScanned_1_1 = 19 };
    enum { __eTail_1_1 = 21 };
    enum { __sBracketsSign_1_1 = 23 };
    enum { __eScanned_1_1 = 24 };
    enum { __sOpenLnNum_1_1 = 26 };
    enum { __sCloseBracket_1_1 = 27 };
    enum { __sCloseBracket_1_2 = 28 };
    enum { __sLnNum_1_1 = 29 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icBracketRight, 0, 10, 4},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eInnerScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketsSign_1_1, 10},
      {refalrts::icsVarLeft, 0, __sOpenLnNum_1_1, 10},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 10},
      {refalrts::icsRepeatRight, __sCloseBracket_1_2, __sCloseBracket_1_1, 8},
      {refalrts::icContextSet, 0, __eScanned_1_1, 10},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[8], context[9] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[4], context[5] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eInnerScanned_1_1] = context[6];
    context[__eInnerScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sOpenLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::repeated_stvar_right( context[__sCloseBracket_1_2], context[__sCloseBracket_1_1], context[8], context[9] ) )
      break;
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sLnNum_1_1 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseBlock, "ParseBlock" },
      { ParseResult_Block, "ParseResult_Block" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_TkOpenBlock<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # TkOpenBlock s.LnNum#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_TkOpenBlock<int>::name, context[8], context[9] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult_Block, "ParseResult_Block" ) )
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, ParseBlock, "ParseBlock" ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
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
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eMultiBracket_1_1 = 15 };
    enum { __eInnerScanned_1_1 = 17 };
    enum { __eTail_1_1 = 19 };
    enum { __sBracketsSign_1_1 = 21 };
    enum { __sOpenLnNum_1_1 = 22 };
    enum { __eScanned_1_1 = 23 };
    enum { __sCloseBracket_1_1 = 25 };
    enum { __sBracketsSign_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromBracket, "StrFromBracket" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParseResult, "ParseResult" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketRight, 0, 8, 4},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 4},
      {refalrts::icContextSet, 0, __eInnerScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sBracketsSign_1_1, 8},
      {refalrts::icsVarLeft, 0, __sOpenLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 8},
      {refalrts::icContextSet, 0, __eScanned_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sOpenLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_right( context[8], context[9], context[4], context[5] ) )
      break;
    context[__eMultiBracket_1_1] = context[4];
    context[__eMultiBracket_1_1 + 1] = context[5];
    context[__eInnerScanned_1_1] = context[6];
    context[__eInnerScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sOpenLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[8], context[9] ) )
      break;
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'c' ) )
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
    if( ! refalrts::alloc_char( n17, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n37 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n33, n36 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sOpenLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __eFunctions_1_1 = 10 };
    enum { __tErrorList_1_1 = 12 };
    enum { __tSymTable_1_1 = 13 };
    enum { __tContext_1_1 = 14 };
    enum { __eScanned_1_1 = 15 };
    enum { __eTail_1_1 = 17 };
    enum { __sLnNum_1_1 = 19 };
    enum { __sCloseBracket_1_1 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { StrFromBracket, "StrFromBracket" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_Close<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 8},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eScanned_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 8},
      {refalrts::icsVarLeft, 0, __sCloseBracket_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'U', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'k', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sCloseBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, '\"', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Scanned#1 ) ( # Close s.LnNum#1 s.CloseBracket#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
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
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_Close<int>::name, context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eScanned_1_1] = context[6];
    context[__eScanned_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'c' ) )
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
    if( ! refalrts::alloc_char( n17, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n35 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__sCloseBracket_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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
    enum { __eFunctions_1_1 = 8 };
    enum { __tErrorList_1_1 = 10 };
    enum { __tSymTable_1_1 = 11 };
    enum { __tContext_1_1 = 12 };
    enum { __eResult_1_1 = 13 };
    enum { __eTail_1_1 = 15 };
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
      {refalrts::icContextSet, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eResult_1_1, 6},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( ) ( e.Result#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[2];
    context[__eFunctions_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eResult_1_1] = context[6];
    context[__eResult_1_1 + 1] = context[7];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
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

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tErrorList_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __tContext_2_1 = 6 };
    enum { __sDepth_2_1 = 7 };
    enum { __sLnNum_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & idents_ExistVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # ExistVariable s.Depth#2
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Index#1
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_ExistVariable<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __tContext_2_1 = 9 };
    enum { __sDepth_2_1 = 10 };
    enum { __sOldMode_2_1 = 11 };
    enum { __sOldMode_2_2 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { InvalidModeVariableError, "InvalidModeVariableError" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_InvalidMode<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 0},
      {refalrts::icsVarLeft, 0, __sOldMode_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
      {refalrts::icCopySTVar, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # InvalidMode s.Depth#2 s.OldMode#2
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ident_InvalidMode<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDepth_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOldMode_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sOldMode_2_2], context[__sOldMode_2_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, InvalidModeVariableError, "InvalidModeVariableError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_stvar( res, context[__sOldMode_2_2] );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sOldMode_2_1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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
    enum { __tErrorList_1_1 = 4 };
    enum { __sLnNum_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __tContext_2_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & idents_NotFound<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 0, 0},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, 0, __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'V', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'b', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_2_1, 0},
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
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # NotFound
    if( ! refalrts::ident_right(  & ident_NotFound<int>::name, context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tContext_1_1 = 3 };
    enum { __sLnNum_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    enum { __sMode_1_2 = 8 };
    enum { __eIndex_1_2 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Cntx_CheckVariable, "Cntx_CheckVariable" },
      { Fetch, "Fetch" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
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
    // t.ErrorList#1 t.Context#1 s.LnNum#1 s.Mode#1 e.Index#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];

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
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Cntx_CheckVariable, "Cntx_CheckVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
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

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eRealContext_2_1 = 12 };
    enum { __sNextNum_1_1 = 14 };
    enum { __eFunctions_1_1 = 15 };
    enum { __tErrorList_1_1 = 17 };
    enum { __tSymTable_1_1 = 18 };
    enum { __tContext_1_1 = 19 };
    enum { __eMultiBracket_1_1 = 20 };
    enum { __eScanned_1_1 = 22 };
    enum { __eTail_1_1 = 24 };
    enum { __sFunctionNumber_2_1 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_LambdaName<int>::name,
      & ident_TkName<int>::name,
      & ident_CreateClosure<int>::name,
      & idents_CallBrackets<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icContextSet, 0, __eRealContext_2_1, 2},
      {refalrts::icsVarLeft, 0, __sNextNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 10, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, __eTail_1_1, 10},
      {refalrts::icsVarLeft, 0, __sFunctionNumber_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sFunctionNumber_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eRealContext_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // s.NextNum#1 ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) s.FunctionNumber#2 ( e.RealContext#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eRealContext_2_1] = context[2];
    context[__eRealContext_2_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNextNum_1_1], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eFunctions_1_1] = context[4];
    context[__eFunctions_1_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[10];
    context[__eTail_1_1 + 1] = context[11];
    if( ! refalrts::svar_left( context[__sFunctionNumber_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( n8, & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_ident( n10, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & ident_CreateClosure<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_ident( n14, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & ident_LambdaName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n7, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eRealContext_2_1], context[__eRealContext_2_1 + 1] );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sFunctionNumber_2_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n9, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_1] );
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

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eMultiBracket_1_1 = 10 };
    enum { __eScanned_1_1 = 12 };
    enum { __sNextNum_1_1 = 14 };
    enum { __eFunctions_1_1 = 15 };
    enum { __tErrorList_1_1 = 17 };
    enum { __tSymTable_1_1 = 18 };
    enum { __eTail_1_1 = 19 };
    enum { __tContext_1_1 = 21 };
    enum { __sNextNum_1_2 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Dec, "Dec" },
      { ParseResult, "ParseResult" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_LambdaName<int>::name,
      & idents_TkName<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icsVarLeft, 0, __sNextNum_1_1, 6},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 6},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 ) e.Tail#1
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
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNextNum_1_1], context[6], context[7] ) )
      break;
    context[__eFunctions_1_1] = context[6];
    context[__eFunctions_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNum_1_2], context[__sNextNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_ident( n8, & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & ident_LambdaName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n6, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n7, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_2] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_1] );
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
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eMultiBracket_1_1 = 10 };
    enum { __eScanned_1_1 = 12 };
    enum { __sNextNum_1_1 = 14 };
    enum { __eFunctions_1_1 = 15 };
    enum { __tErrorList_1_1 = 17 };
    enum { __tSymTable_1_1 = 18 };
    enum { __eTail_1_1 = 19 };
    enum { __tContext_1_1 = 21 };
    enum { __eFreeContext_1_1 = 22 };
    enum { __sNextNum_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { CreateContext, "CreateContext" },
      { Dec, "Dec" },
      { Fetch, "Fetch" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icContextSet, 0, __eMultiBracket_1_1, 2},
      {refalrts::icContextSet, 0, __eScanned_1_1, 4},
      {refalrts::icsVarLeft, 0, __sNextNum_1_1, 6},
      {refalrts::icContextSet, 0, __eFunctions_1_1, 6},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eTail_1_1, 0},
      {refalrts::ictVarLeft, 0, __tContext_1_1, 8},
      {refalrts::icContextSet, 0, __eFreeContext_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eFreeContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eTail_1_1, 0},
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
    // ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 e.FreeContext#1 ) e.Tail#1
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
    context[__eMultiBracket_1_1] = context[2];
    context[__eMultiBracket_1_1 + 1] = context[3];
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNextNum_1_1], context[6], context[7] ) )
      break;
    context[__eFunctions_1_1] = context[6];
    context[__eFunctions_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[8], context[9] ) )
      break;
    context[__eFreeContext_1_1] = context[8];
    context[__eFreeContext_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNum_1_2], context[__sNextNum_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, CreateContext, "CreateContext" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
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
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eFreeContext_1_1], context[__eFreeContext_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_1] );
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


//End of file
