// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MakeAlgorithm_Program(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
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
      { EL_Create, "EL_Create" },
      { ParseProgram, "ParseProgram" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eSrcName_1_1, 2},
      {refalrts::icContextSet, 0, __eLexFolding_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eLexFolding_2_1, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, idents, numbers, open_e_stack
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
    if( ! refalrts::alloc_name( n1, ParseProgram, "ParseProgram" ) )
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
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLexFolding_2_1], context[__eLexFolding_2_1 + 1] );
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eOutputName_1_1 = 6 };
    enum { __eAST_2_1 = 8 };
    enum { __eOutputName_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { MakeAlgorithm_Program, "MakeAlgorithm_Program" },
      { GenProgram, "GenProgram" },
      { SaveFile, "SaveFile" }
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Success<int>::name,
      & ident_EL_NoErrors<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eOutputName_1_1, 2},
      {refalrts::icContextSet, 0, __eAST_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopyEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icSpliceCopyEVar, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eAST_2_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, idents, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) ( e.AST#2 ) # EL_NoErrors
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
    context[__eAST_2_1] = context[4];
    context[__eAST_2_1 + 1] = context[5];

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
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, GenProgram, "GenProgram" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, MakeAlgorithm_Program, "MakeAlgorithm_Program" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eOutputName_1_2], context[__eOutputName_1_2 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eAST_2_1], context[__eAST_2_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
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
      & ident_EL_HasErrors<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, idents, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) ( e.AST#2 ) # EL_HasErrors
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
    // Unused closed variable e.AST#2

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

static refalrts::FnResult lambda_CompileFile_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eOutputName_1_1 = 4 };
    enum { __tErrorList_2_1 = 6 };
    enum { __eAST_2_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_CompileFile_1, "lambda_CompileFile_1" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { EL_Destroy, "EL_Destroy" },
      { Fetch, "Fetch" }
    };
    using refalrts::idents;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eOutputName_1_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::icContextSet, 0, __eAST_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eAST_2_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, idents, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) t.ErrorList#2 e.AST#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[2];
    context[__eOutputName_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    context[__eAST_2_1] = context[0];
    context[__eAST_2_1 + 1] = context[1];

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
    if( ! refalrts::alloc_name( n3, EL_Destroy, "EL_Destroy" ) )
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
    if( ! refalrts::alloc_name( n7, lambda_CompileFile_1, "lambda_CompileFile_1" ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eAST_2_1], context[__eAST_2_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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
      { lambda_CompileFile_2, "lambda_CompileFile_2" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { lambda_CompileFile_0, "lambda_CompileFile_0" },
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
      {refalrts::icFunc, 0, 5, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 4, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eOutputName_1_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceCopyEVar, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icBracket_CloseCallLink, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eSrcName_1_1, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icSpliceElem, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array(
      raa, allocs, context, arg_begin, arg_end,
      functions, idents, numbers, open_e_stack
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
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, lambda_CompileFile_0, "lambda_CompileFile_0" ) )
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
    if( ! refalrts::alloc_name( n14, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, lambda_CompileFile_2, "lambda_CompileFile_2" ) )
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
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eSrcName_1_2], context[__eSrcName_1_2 + 1] );
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


//End of file
