// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fails(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseAndGenerate(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eSrcName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [SrcName] Depth[1] Usings[1]
    enum { __eOutputName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [OutputName] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & LexFolding, "LexFolding" },
      { & PrepareBracket, "PrepareBracket" },
      { & Map, "Map" },
      { & ParseAndGenerate, "ParseAndGenerate" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eSrcName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSrcName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseAndGenerate, "ParseAndGenerate" ) )
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
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & PrepareBracket, "PrepareBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & LexFolding, "LexFolding" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
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
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eSrcName_1_1], context[__eSrcName_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL COpen
template <typename T>
struct COpen {
  static const char *name() {
    return "COpen";
  }
};

//$LABEL CClose
template <typename T>
struct CClose {
  static const char *name() {
    return "CClose";
  }
};

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkOpenBracket, "TkOpenBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkOpenBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & COpen<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkOpenBracket, "TkOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseBracket, "TkCloseBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkCloseBracket s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & CClose<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkCloseBracket, "TkCloseBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkOpenADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & COpen<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseADT, "TkCloseADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkCloseADT s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & CClose<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkOpenCall, "TkOpenCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkOpenCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkOpenCall, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & COpen<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkOpenCall, "TkOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseCall, "TkCloseCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkCloseCall s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseCall, context[2], context[3] ) )
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
    if( ! refalrts::alloc_ident( n1, & CClose<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TkCloseCall, "TkCloseCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOtherToken_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [OtherToken] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tOtherToken_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tOtherToken_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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

extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_AddDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_Print(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_IsEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_HasErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_NoErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult WriteGenerated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseAndGenerate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eOutputName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [OutputName] Depth[1] Usings[1]
    enum { __eLexFolding_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [LexFolding] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ST_Create, "ST_Create" },
      { & EL_Create, "EL_Create" },
      { & ParseElements, "ParseElements" },
      { & GenCommonHeaders, "GenCommonHeaders" },
      { & WriteGenerated, "WriteGenerated" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eOutputName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLexFolding_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLexFolding_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) e.LexFolding#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[2];
    context[__eOutputName_1_1 + 1] = context[3];
    context[__eLexFolding_1_1] = context[0];
    context[__eLexFolding_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteGenerated, "WriteGenerated" ) )
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
    if( ! refalrts::alloc_name( n5, & GenCommonHeaders, "GenCommonHeaders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & EL_Create, "EL_Create" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & ST_Create, "ST_Create" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eLexFolding_1_1], context[__eLexFolding_1_1 + 1] );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult WriteGenerated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eOutputName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [OutputName] Depth[1] Usings[1]
    enum { __eLines_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Lines] Depth[1] Usings[1]
    enum { __eOutputName_1_2 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [OutputName] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Success, "Success" },
      { & SaveFile, "SaveFile" },
      { & EL_NoErrors, "EL_NoErrors" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncRight, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eOutputName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLines_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLines_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) e.Lines#1 & EL_NoErrors
    if( ! refalrts::function_right( & EL_NoErrors, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[2];
    context[__eOutputName_1_1 + 1] = context[3];
    context[__eLines_1_1] = context[0];
    context[__eLines_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eOutputName_1_2], context[__eOutputName_1_2 + 1], context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SaveFile, "SaveFile" ) )
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
    if( ! refalrts::alloc_name( n5, & Success, "Success" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eOutputName_1_2], context[__eOutputName_1_2 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eLines_1_1], context[__eLines_1_1 + 1] );
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Fails, "Fails" },
      { & EL_HasErrors, "EL_HasErrors" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncRight, 0, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.OutputName#1 ) e.Lines#1 & EL_HasErrors
    if( ! refalrts::function_right( & EL_HasErrors, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.OutputName#1
    // Unused closed variable e.Lines#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & Fails, "Fails" ) )
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

extern refalrts::FnResult TkDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Enum(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Extern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Forward(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Swap(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Ident(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkEOF(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkSemicolon(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 6 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_Print, "EL_Print" },
      { & EL_IsEmpty, "EL_IsEmpty" },
      { & GenCommonTailer, "GenCommonTailer" },
      { & TkEOF, "TkEOF" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 ( & TkEOF s.LnNum#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkEOF, context[2], context[3] ) )
      break;
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
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenCommonTailer, "GenCommonTailer" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & EL_IsEmpty, "EL_IsEmpty" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & EL_Print, "EL_Print" ) )
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
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sDirective_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Directive] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseElement_SwDirective, "ParseElement_SwDirective" },
      { & TkDirective, "TkDirective" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirective_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirective_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 ( & TkDirective s.LnNum#1 s.Directive#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkDirective, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirective_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElement_SwDirective, "ParseElement_SwDirective" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sDirective_1_1] );
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GN_Local, "GN_Local" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & ParseFunction, "ParseFunction" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 ( & TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[2], context[3] ) )
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
    if( ! refalrts::alloc_name( n1, & ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
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
    if( ! refalrts::alloc_name( n6, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & GN_Local, "GN_Local" ) )
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
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseElements, "ParseElements" },
      { & TkSemicolon, "TkSemicolon" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 ( & TkSemicolon s.LnNum#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseElements, "ParseElements" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'v', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 t.Unexpected#1 e.Tail#1
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
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & EL_AddUnexpected, "EL_AddUnexpected" ) )
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
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
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

extern refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenFunctionsFromDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
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
      { & GN_Entry, "GN_Entry" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & GenEEnum, "GenEEnum" },
      { & EEnum, "EEnum" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & EEnum
    if( ! refalrts::function_left( & EEnum, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenEEnum, "GenEEnum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
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
      { & GN_Local, "GN_Local" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & GenEnum, "GenEnum" },
      { & Enum, "Enum" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Enum
    if( ! refalrts::function_left( & Enum, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenEnum, "GenEnum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
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
      { & GN_Entry, "GN_Entry" },
      { & ST_AddDeclared, "ST_AddDeclared" },
      { & GenExtern, "GenExtern" },
      { & Extern, "Extern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Extern
    if( ! refalrts::function_left( & Extern, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenExtern, "GenExtern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDeclared, "ST_AddDeclared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
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
      { & GN_Local, "GN_Local" },
      { & ST_AddDeclared, "ST_AddDeclared" },
      { & GenForward, "GenForward" },
      { & Forward, "Forward" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Forward
    if( ! refalrts::function_left( & Forward, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenForward, "GenForward" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDeclared, "ST_AddDeclared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
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
      { & GN_Entry, "GN_Entry" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & GenESwap, "GenESwap" },
      { & ESwap, "ESwap" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & ESwap
    if( ! refalrts::function_left( & ESwap, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenESwap, "GenESwap" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
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
      { & GN_Local, "GN_Local" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & GenSwap, "GenSwap" },
      { & Swap, "Swap" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Swap
    if( ! refalrts::function_left( & Swap, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenSwap, "GenSwap" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
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
      { & GN_Entry, "GN_Entry" },
      { & ST_AddIdent, "ST_AddIdent" },
      { & GenIdent, "GenIdent" },
      { & Ident, "Ident" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 3, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Ident
    if( ! refalrts::function_left( & Ident, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & GenIdent, "GenIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ST_AddIdent, "ST_AddIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
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

static refalrts::FnResult ParseElement_SwDirective(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GN_Entry, "GN_Entry" },
      { & ST_AddDefined, "ST_AddDefined" },
      { & ParseFunction, "ParseFunction" },
      { & TkName, "TkName" },
      { & Entry, "Entry" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 & Entry ( & TkName s.LnNum#1 e.Name#1 ) e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Entry, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[2], context[3] ) )
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
    if( ! refalrts::alloc_name( n1, & ParseFunction, "ParseFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
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
    if( ! refalrts::alloc_name( n6, & ST_AddDefined, "ST_AddDefined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & GN_Entry, "GN_Entry" ) )
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
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tUnexpected_1_2 = 7 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseElements, "ParseElements" },
      { & Entry, "Entry" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 & Entry t.Unexpected#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Entry, context[0], context[1] ) )
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & EL_AddUnexpected, "EL_AddUnexpected" ) )
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
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __sDirective_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [Directive] Depth[1] Usings[1]
    enum { __eTail_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenFunctionsFromDirective, "GenFunctionsFromDirective" },
      { & ParseNameList, "ParseNameList" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDirective_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirective_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & ParseNameList, "ParseNameList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & GenFunctionsFromDirective, "GenFunctionsFromDirective" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sDirective_1_1] );
    res = refalrts::splice_elem( res, n3 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult TkComma(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkSemicolon(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseNameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __sGenFunc_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[1]
    enum { __sTableChangeFunc_1_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eTail_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __sGenFunc_1_2 = 14 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[2]
    enum { __eName_1_2 = 15 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    enum { __sTableChangeFunc_1_2 = 17 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[2]
    enum { __sScopeClass_1_2 = 18 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseNameList_Tail, "ParseNameList_Tail" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sGenFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopySTVar, 0, 0, __sGenFunc_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( & TkName s.LnNum#1 e.Name#1 ) e.Tail#1
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
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

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
    if( ! refalrts::alloc_close_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ParseNameList_Tail, "ParseNameList_Tail" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_2] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_2] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_2] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sGenFunc_1_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[1]
    enum { __sTableChangeFunc_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __tUnexpected_1_2 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseElements, "ParseElements" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & EL_AddUnexpected, "EL_AddUnexpected" ) )
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
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
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

static refalrts::FnResult ParseNameList_Tail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __sGenFunc_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[1]
    enum { __sTableChangeFunc_1_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eTail_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseNameList, "ParseNameList" },
      { & TkComma, "TkComma" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sGenFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sTableChangeFunc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( & TkComma s.LnNum#1 ) e.Tail#1
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
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkComma, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseNameList, "ParseNameList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_stvar( res, context[__sTableChangeFunc_1_1] );
    res = refalrts::splice_stvar( res, context[__sGenFunc_1_1] );
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sGenFunc_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[1]
    enum { __sTableChangeFunc_1_1 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseElements, "ParseElements" },
      { & TkSemicolon, "TkSemicolon" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 ( & TkSemicolon s.LnNum#1 ) e.Tail#1
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
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
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
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sGenFunc_1_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [GenFunc] Depth[1] Usings[1]
    enum { __sTableChangeFunc_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [TableChangeFunc] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __tUnexpected_1_2 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseElements, "ParseElements" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sGenFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sTableChangeFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 t.SymTable#1 s.GenFunc#1 s.TableChangeFunc#1 s.ScopeClass#1 t.Unexpected#1 e.Tail#1
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & EL_AddUnexpected, "EL_AddUnexpected" ) )
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
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
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

extern refalrts::FnResult TkOpenBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sNumber_1_1 = 2 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __eName_1_1 = 3 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, & context[0], & context[1], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, '_', 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, 0, '_', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n9, & StrFromInt, "StrFromInt" ) )
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

//$LABEL CLambdaScope
template <typename T>
struct CLambdaScope {
  static const char *name() {
    return "CLambdaScope";
  }
};

extern refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL CLambdaName
template <typename T>
struct CLambdaName {
  static const char *name() {
    return "CLambdaName";
  }
};

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ParseFunction_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenExtern, "GenExtern" },
      { & GN_Entry, "GN_Entry" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncRight, 0, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Name#1 ) & GN_Entry
    if( ! refalrts::function_right( & GN_Entry, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenExtern, "GenExtern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
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
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenForward, "GenForward" },
      { & GN_Local, "GN_Local" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncRight, 0, 0, 1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Name#1 ) & GN_Local
    if( ! refalrts::function_right( & GN_Local, context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenForward, "GenForward" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __sNumber_3_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[3] Usings[1]
    enum { __eSentences_3_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[3] Usings[1]
    enum { __eName_1_2 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CreateLambdaName, "CreateLambdaName" },
      { & GN_Local, "GN_Local" },
      { & GenFunctionBody, "GenFunctionBody" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNumber_3_1, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_3_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_3_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_3_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & GenFunctionBody, "GenFunctionBody" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
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
    if( ! refalrts::alloc_name( n7, & CreateLambdaName, "CreateLambdaName" ) )
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

static refalrts::FnResult lambda_ParseFunction_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eSentences_3_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[3] Usings[1]
    enum { __sNumber_3_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[3] Usings[1]
    enum { __eName_1_2 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenFunctionBody, "GenFunctionBody" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 4},
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_3_1, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_3_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_3_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & GenFunctionBody, "GenFunctionBody" ) )
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

static refalrts::FnResult lambda_ParseFunction_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __sScopeClass_1_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eName_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eSentences_2_1 = 13 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[2] Usings[1]
    enum { __tErrorList_2_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tSymTable_2_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[2] Usings[1]
    enum { __eTail_2_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[2] Usings[1]
    enum { __tContext_2_1 = 19 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __eName_1_2 = 20 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseElements, "ParseElements" },
      { & Cntx_Destroy, "Cntx_Destroy" },
      { & GenFunctionBody, "GenFunctionBody" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icNumLeft, (void*)1 , 0, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 4},
      {refalrts::icEPush, 0, 0, 0, 6},
      {refalrts::icNumLeft, (void*)0 , 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eSentences_2_1, 6},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_2_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icContextSet, 0, 0, __eTail_2_1, 0},
      {refalrts::ictVarLeft, & context[8], & context[9], __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.ScopeClass#1 ( e.Name#1 ) ( 1 ( 0 e.Sentences#2 ) ) t.ErrorList#2 t.SymTable#2 ( t.Context#2 ) e.Tail#2
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
    if( ! refalrts::number_left( 1UL, context[4], context[5] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      break;
    if( ! refalrts::number_left( 0UL, context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    context[__eSentences_2_1] = context[6];
    context[__eSentences_2_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eTail_2_1] = context[0];
    context[__eTail_2_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_2_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenFunctionBody, "GenFunctionBody" ) )
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
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Cntx_Destroy, "Cntx_Destroy" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eTail_2_1], context[__eTail_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eSentences_2_1], context[__eSentences_2_1 + 1] );
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

  do {
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __sScopeClass_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eName_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __tErrorList_2_1 = 11 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tSymTable_2_1 = 12 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[2] Usings[1]
    enum { __eTail_2_1 = 13 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[2] Usings[1]
    enum { __tContext_2_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __tMainBody_2_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [MainBody] Depth[2] Usings[1]
    enum { __eFunctionBodies_2_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [FunctionBodies] Depth[2] Usings[1]
    enum { __sNextNumber_2_1 = 19 };
    
    //debug ::varInfo:: Mode[s] Index [NextNumber] Depth[2] Usings[1]
    enum { __sScopeClass_1_2 = 20 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[2]
    enum { __eName_1_2 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    enum { __eName_1_3 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[3]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseElements, "ParseElements" },
      { & Cntx_Destroy, "Cntx_Destroy" },
      { & lambda_ParseFunction_2, "lambda_ParseFunction_2" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Fetch, "Fetch" },
      { & lambda_ParseFunction_1, "lambda_ParseFunction_1" },
      { & Map, "Map" },
      { & lambda_ParseFunction_0, "lambda_ParseFunction_0" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextNumber_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_2_1, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eTail_2_1, 0},
      {refalrts::ictVarLeft, & context[6], & context[7], __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::ictVarRight, & context[4], & context[5], __tMainBody_2_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunctionBodies_2_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 7, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 6, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctionBodies_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tMainBody_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icCopySTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.ScopeClass#1 ( e.Name#1 ) ( s.NextNumber#2 e.FunctionBodies#2 t.MainBody#2 ) t.ErrorList#2 t.SymTable#2 ( t.Context#2 ) e.Tail#2
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
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
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
    if( ! refalrts::copy_stvar( context[__sScopeClass_1_2], context[__sScopeClass_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eName_1_3], context[__eName_1_3 + 1], context[__eName_1_2], context[__eName_1_2 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & lambda_ParseFunction_0, "lambda_ParseFunction_0" ) )
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & lambda_ParseFunction_1, "lambda_ParseFunction_1" ) )
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
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & lambda_ParseFunction_2, "lambda_ParseFunction_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & Cntx_Destroy, "Cntx_Destroy" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n32 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eTail_2_1], context[__eTail_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__tContext_2_1] );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n23, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eName_1_3], context[__eName_1_3 + 1] );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_2] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__tMainBody_2_1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eFunctionBodies_2_1], context[__eFunctionBodies_2_1 + 1] );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
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

static refalrts::FnResult ParseFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __sScopeClass_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eName_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 13 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParseFunction_3, "lambda_ParseFunction_3" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Cntx_Create, "Cntx_Create" },
      { & ParseBlock, "ParseBlock" },
      { & Fetch, "Fetch" },
      { & TkOpenBlock, "TkOpenBlock" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 4},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.ScopeClass#1 ( e.Name#1 ) t.ErrorList#1 t.SymTable#1 ( & TkOpenBlock s.LnNum#1 ) e.Tail#1
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
    if( ! refalrts::function_left( & TkOpenBlock, context[4], context[5] ) )
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
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ParseBlock, "ParseBlock" ) )
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
    if( ! refalrts::alloc_name( n8, & Cntx_Create, "Cntx_Create" ) )
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
    if( ! refalrts::alloc_name( n12, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & lambda_ParseFunction_3, "lambda_ParseFunction_3" ) )
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
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
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
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 5 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 6 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sScopeClass_1_1 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __tUnexpected_1_2 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseElements, "ParseElements" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & EL_AddUnexpected, "EL_AddUnexpected" ) )
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
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
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

//$LABEL Brackets
template <typename T>
struct Brackets {
  static const char *name() {
    return "Brackets";
  }
};

//$LABEL ADT_Brackets
template <typename T>
struct ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

//$LABEL CallBrackets
template <typename T>
struct CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

static refalrts::FnResult ResolveLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ResolveLambdaName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eMainName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __sNumber_2_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CreateLambdaName, "CreateLambdaName" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CLambdaName<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 4},
      {refalrts::icIdentLeft, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNumber_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.MainName#1 ) ( & TkName # CLambdaName s.Number#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[4], context[5] ) )
      break;
    if( ! refalrts::ident_left(  & CLambdaName<int>::name, context[4], context[5] ) )
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
    if( ! refalrts::alloc_name( n1, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CreateLambdaName, "CreateLambdaName" ) )
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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eMainName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __eSubResult_2_1 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [SubResult] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ResolveLambdaName, "ResolveLambdaName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eSubResult_2_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubResult_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::ident_left(  & Brackets<int>::name, context[4], context[5] ) )
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
    if( ! refalrts::alloc_ident( n1, & Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ResolveLambdaName, "ResolveLambdaName" ) )
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
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eMainName_1_1 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __eName_2_1 = 10 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[2] Usings[1]
    enum { __eSubResult_2_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [SubResult] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ResolveLambdaName, "ResolveLambdaName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 4},
      {refalrts::icBracketLeft, 0, 0, 6, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eName_2_1, 6},
      {refalrts::icContextSet, 0, 0, __eSubResult_2_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubResult_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[4], context[5] ) )
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
    if( ! refalrts::alloc_ident( n1, & ADT_Brackets<int>::name ) )
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
    if( ! refalrts::alloc_name( n5, & ResolveLambdaName, "ResolveLambdaName" ) )
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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eMainName_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __eSubResult_2_1 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [SubResult] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ResolveLambdaName, "ResolveLambdaName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CallBrackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eSubResult_2_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubResult_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::ident_left(  & CallBrackets<int>::name, context[4], context[5] ) )
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
    if( ! refalrts::alloc_ident( n1, & CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ResolveLambdaName, "ResolveLambdaName" ) )
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
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tOtherTerm_2_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [OtherTerm] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tOtherTerm_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tOtherTerm_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eMainName_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __eResult_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Map, "Map" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & lambda_ResolveLambdaName_0, "lambda_ResolveLambdaName_0" ) )
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

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GenFunctionBody_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eMainName_1_1 = 10 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __ePattern_2_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[2] Usings[1]
    enum { __eResult_2_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ResolveLambdaName, "ResolveLambdaName" },
      { & MakeAlgorithm, "MakeAlgorithm" },
      { & GenSentence, "GenSentence" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 4},
      {refalrts::icBracketLeft, 0, 0, 8, 4},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __ePattern_2_1, 6},
      {refalrts::icContextSet, 0, 0, __eResult_2_1, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & GenSentence, "GenSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & MakeAlgorithm, "MakeAlgorithm" ) )
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
    if( ! refalrts::alloc_name( n8, & ResolveLambdaName, "ResolveLambdaName" ) )
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sScopeClass_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [ScopeClass] Depth[1] Usings[1]
    enum { __eMainName_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MainName] Depth[1] Usings[1]
    enum { __eName_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenFnEnd, "GenFnEnd" },
      { & lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Map, "Map" },
      { & Fetch, "Fetch" },
      { & GenFnStart, "GenFnStart" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sScopeClass_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eMainName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMainName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & GenFnStart, "GenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" ) )
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
    if( ! refalrts::alloc_name( n16, & GenFnEnd, "GenFnEnd" ) )
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

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseBlock_SetContext(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eFunctions_1_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 6 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 7 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 8 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eTokens_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tokens] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Cntx_PushScope, "Cntx_PushScope" },
      { & DoParseBlock, "DoParseBlock" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & DoParseBlock, "DoParseBlock" ) )
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
    if( ! refalrts::alloc_name( n5, & Cntx_PushScope, "Cntx_PushScope" ) )
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

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __sNumber_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __eFunctions_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 11 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 12 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 13 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eTail_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNumber_1_1 = 18 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumber] Depth[1] Usings[1]
    enum { __sNumber_1_2 = 19 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Cntx_PopScope, "Cntx_PopScope" },
      { & Inc, "Inc" },
      { & ParseBlock_SetContext, "ParseBlock_SetContext" },
      { & TkCloseBlock, "TkCloseBlock" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sLnNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( & TkCloseBlock s.LnNumber#1 ) e.Tail#1
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
    if( ! refalrts::function_left( & TkCloseBlock, context[6], context[7] ) )
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
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseBlock_SetContext, "ParseBlock_SetContext" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Inc, "Inc" ) )
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
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Cntx_PopScope, "Cntx_PopScope" ) )
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
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __sNumber_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __eFunctions_1_1 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 11 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 12 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 13 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eTail_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 18 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sNumber_1_2 = 19 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[2]
    enum { __sLnNum_1_2 = 20 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkEOF, "TkEOF" },
      { & Cntx_PopScope, "Cntx_PopScope" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & Inc, "Inc" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'F', 0},
      {refalrts::icChar, 0, 0, ',', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icChar, 0, 0, '}', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( & TkEOF s.LnNum#1 ) e.Tail#1
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
    if( ! refalrts::function_left( & TkEOF, context[6], context[7] ) )
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
    if( ! refalrts::alloc_name( n2, & Inc, "Inc" ) )
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
    if( ! refalrts::alloc_name( n8, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n34, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, '"' ) )
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
    if( ! refalrts::alloc_name( n40, & Cntx_PopScope, "Cntx_PopScope" ) )
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
    if( ! refalrts::alloc_name( n44, & TkEOF, "TkEOF" ) )
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
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eFunctions_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 8 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eTokens_1_1 = 13 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tokens] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseSentence, "ParseSentence" },
      { & DoParseBlock, "DoParseBlock" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & DoParseBlock, "DoParseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ParseSentence, "ParseSentence" ) )
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

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseBlock_SetContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eFunctions_1_1 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __sNumber_1_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 13 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTokens_1_1 = 15 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tokens] Depth[1] Usings[1]
    enum { __tContext_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eFreeContext_1_1 = 18 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [FreeContext] Depth[1] Usings[1]
    enum { __eFreeContext_1_2 = 20 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [FreeContext] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AddContextToSentence, "AddContextToSentence" },
      { & Map, "Map" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eTokens_1_1, 0},
      {refalrts::ictVarLeft, & context[6], & context[7], __tContext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFreeContext_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFreeContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eFreeContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTokens_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) ( s.Number#1 e.Sentences#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 e.FreeContext#1 ) e.Tokens#1
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
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[4], context[5] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      break;
    context[__eTokens_1_1] = context[0];
    context[__eTokens_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[6], context[7] ) )
      break;
    context[__eFreeContext_1_1] = context[6];
    context[__eFreeContext_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eFreeContext_1_2], context[__eFreeContext_1_2 + 1], context[__eFreeContext_1_1], context[__eFreeContext_1_1 + 1] ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & AddContextToSentence, "AddContextToSentence" ) )
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
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTokens_1_1], context[__eTokens_1_1 + 1] );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eFreeContext_1_2], context[__eFreeContext_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n1, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFreeContext_1_1], context[__eFreeContext_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eContext_1_1 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Context] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 10 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eResult_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CreateContext, "CreateContext" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 2},
      {refalrts::icBracketLeft, 0, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eContext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n3, & CreateContext, "CreateContext" ) )
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

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_CreateContext_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eIndex_2_1 = 4 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_2_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_ident( n1, & Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sMode_2_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[2] Usings[1]
    enum { __eIndex_2_1 = 5 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_2_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_2_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & TkVariable, "TkVariable" ) )
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eContext_1_1 = 2 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Context] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_CreateContext_0, "lambda_CreateContext_0" },
      { & Map, "Map" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & lambda_CreateContext_0, "lambda_CreateContext_0" ) )
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

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eFunctions_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 8 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 10 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 11 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eTokens_1_1 = 13 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tokens] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTokens_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    res = refalrts::splice_evar( res, context[__eTokens_1_1], context[__eTokens_1_1 + 1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult StrFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkIdentMarker(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkRedefinition(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkReplace(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkIdentifier(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_CheckDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_CheckIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL CSuccess
template <typename T>
struct CSuccess {
  static const char *name() {
    return "CSuccess";
  }
};

//$LABEL CInvalidMode
template <typename T>
struct CInvalidMode {
  static const char *name() {
    return "CInvalidMode";
  }
};

//$LABEL CAlreadyBounded
template <typename T>
struct CAlreadyBounded {
  static const char *name() {
    return "CAlreadyBounded";
  }
};

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tErrorList_2_1 = 27 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tContext_2_1 = 28 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sMode_2_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkVariable, "TkVariable" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 12},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.SymTable#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
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
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eIndex_1_1] = context[10];
    context[__eIndex_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[12];
    context[__eTail_1_1 + 1] = context[13];
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
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TkVariable, "TkVariable" ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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

static refalrts::FnResult lambda_ParsePattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tErrorList_2_1 = 27 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tContext_2_1 = 28 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sMode_2_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkVariable, "TkVariable" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 12},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.SymTable#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Index#1 ) ( e.Tail#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
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
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eIndex_1_1] = context[10];
    context[__eIndex_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[12];
    context[__eTail_1_1 + 1] = context[13];
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
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TkVariable, "TkVariable" ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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

static refalrts::FnResult ParsePattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBrackets_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBrackets] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sChar_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [Char] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkChar, "TkChar" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBrackets_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( & TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkChar, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBrackets_1_1] = context[6];
    context[__eMultiBrackets_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TkChar, "TkChar" ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBrackets_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBrackets] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sNumber_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkNumber, "TkNumber" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBrackets_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( & TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkNumber, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBrackets_1_1] = context[6];
    context[__eMultiBrackets_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TkNumber, "TkNumber" ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBrackets_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBrackets] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 26 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 28 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkName, "TkName" },
      { & ST_CheckDeclared, "ST_CheckDeclared" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBrackets_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( & TkName s.LnNum#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBrackets_1_1] = context[6];
    context[__eMultiBrackets_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
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
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckDeclared, "ST_CheckDeclared" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBrackets_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBrackets] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNumName_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumName] Depth[1] Usings[1]
    enum { __eName_1_1 = 28 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __sLnNumMarker_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumMarker] Depth[1] Usings[1]
    enum { __eName_1_2 = 31 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkIdentifier, "TkIdentifier" },
      { & ST_CheckIdent, "ST_CheckIdent" },
      { & ParsePattern, "ParsePattern" },
      { & TkName, "TkName" },
      { & TkIdentMarker, "TkIdentMarker" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 10},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBrackets_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNumMarker_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNumName_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumName_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( & TkIdentMarker s.LnNumMarker#1 ) ( & TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, context[10], context[11] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBrackets_1_1] = context[6];
    context[__eMultiBrackets_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumMarker_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[12], context[13] ) )
      break;
    context[__eName_1_1] = context[12];
    context[__eName_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckIdent, "ST_CheckIdent" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & TkIdentifier, "TkIdentifier" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNumName_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBrackets_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBrackets] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { & TkIdentMarker, "TkIdentMarker" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBrackets_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, '#', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBrackets#1 ) ( e.Scanned#1 ) ( & TkIdentMarker s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBrackets_1_1] = context[6];
    context[__eMultiBrackets_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n24, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\'' ) )
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
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n34 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eMultiBrackets_1_1], context[__eMultiBrackets_1_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNumVar_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumVar] Depth[1] Usings[1]
    enum { __sMode_1_1 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __sLnNumRedef_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumRedef] Depth[1] Usings[1]
    enum { __eIndex_1_2 = 32 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParsePattern_0, "lambda_ParsePattern_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Cntx_AddNewVariable, "Cntx_AddNewVariable" },
      { & CheckAddVariable, "CheckAddVariable" },
      { & Fetch, "Fetch" },
      { & TkRedefinition, "TkRedefinition" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 6, 10},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNumVar_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 10},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNumRedef_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumVar_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkVariable s.LnNumVar#1 s.Mode#1 e.Index#1 ) ( & TkRedefinition s.LnNumRedef#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[10], context[11] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkRedefinition, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumVar_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[10], context[11] ) )
      break;
    context[__eIndex_1_1] = context[10];
    context[__eIndex_1_1 + 1] = context[11];
    if( ! refalrts::svar_left( context[__sLnNumRedef_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Cntx_AddNewVariable, "Cntx_AddNewVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & lambda_ParsePattern_0, "lambda_ParsePattern_0" ) )
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
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __eIndex_1_2 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParsePattern_1, "lambda_ParsePattern_1" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Cntx_AddVariable, "Cntx_AddVariable" },
      { & CheckAddVariable, "CheckAddVariable" },
      { & Fetch, "Fetch" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[10], context[11] ) )
      break;
    context[__eIndex_1_1] = context[10];
    context[__eIndex_1_1 + 1] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CheckAddVariable, "CheckAddVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Cntx_AddVariable, "Cntx_AddVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & lambda_ParsePattern_1, "lambda_ParsePattern_1" ) )
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
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
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
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 21 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { & TkRedefinition, "TkRedefinition" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkRedefinition s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkRedefinition, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    // Unused closed variable e.Scanned#1
    // Unused closed variable e.Tail#1
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n34 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseBracket, "TkCloseBracket" },
      { & ParsePattern, "ParsePattern" },
      { & TkOpenBracket, "TkOpenBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 10},
      {refalrts::icFuncLeft, 0, 0, 2, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenBracket s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[10], context[11] ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_ident( n8, & Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TkCloseBracket, "TkCloseBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
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
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n7, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNumBracket_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumBracket] Depth[1] Usings[1]
    enum { __sLnNumName_1_1 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumName] Depth[1] Usings[1]
    enum { __eName_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 31 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseADT, "TkCloseADT" },
      { & ST_CheckDeclared, "ST_CheckDeclared" },
      { & ParsePattern, "ParsePattern" },
      { & TkName, "TkName" },
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 10},
      {refalrts::icFuncLeft, 0, 0, 4, 10},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNumBracket_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNumName_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumName_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumBracket_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenADT s.LnNumBracket#1 ) ( & TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[10], context[11] ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, context[10], context[11] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumBracket_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[12], context[13] ) )
      break;
    context[__eName_1_1] = context[12];
    context[__eName_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckDeclared, "ST_CheckDeclared" ) )
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
    if( ! refalrts::alloc_ident( n11, & ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
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
    refalrts::link_brackets( n15, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sLnNumBracket_1_1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNumName_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sLnNum_1_2 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    enum { __tSymTable_1_2 = 27 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ST_GetAnyName, "ST_GetAnyName" },
      { & TkCloseADT, "TkCloseADT" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 10},
      {refalrts::icFuncLeft, 0, 0, 4, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icChar, 0, 0, '[', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenADT s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[10], context[11] ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
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
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n26, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_ident( n34, & ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n45 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n38, n44 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::link_brackets( n39, n43 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::push_stack( n42 );
    refalrts::push_stack( n40 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_2] );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n32, n37 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::link_brackets( n33, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sLnNum_1_2 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseCall, "TkCloseCall" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { & TkOpenCall, "TkOpenCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 10},
      {refalrts::icFuncLeft, 0, 0, 3, 10},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenCall s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[10], context[11] ) )
      break;
    if( ! refalrts::function_left( & TkOpenCall, context[10], context[11] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
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
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_close_bracket( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_ident( n56, & Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_name( n57, & TkCloseCall, "TkCloseCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_close_bracket( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_close_bracket( n59 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_close_bracket( n61 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_call( n62 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n62 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n60, n61 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    refalrts::link_brackets( n54, n59 );
    res = refalrts::splice_elem( res, n59 );
    refalrts::link_brackets( n55, n58 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n54 );
    refalrts::link_brackets( n52, n53 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n51 );
    refalrts::push_stack( n4 );
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
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eInnerScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [InnerScanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sBracketsSign_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 28 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sInnerLnNum_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [InnerLnNum] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sCloseBracket_1_2 = 32 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[2]
    enum { __sClosedLnNum_1_1 = 33 };
    
    //debug ::varInfo:: Mode[s] Index [ClosedLnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 10},
      {refalrts::icBracketRight, 0, 0, 12, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eInnerScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sBracketsSign_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sInnerLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sCloseBracket_1_1, 0},
      {refalrts::icsRepeatLeft, (void*)__sCloseBracket_1_2, (void*)__sCloseBracket_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 12},
      {refalrts::icsVarLeft, & context[10], & context[11], __sClosedLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # CClose s.CloseBracket#1 s.ClosedLnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, context[10], context[11] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_right( context[12], context[13], context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eInnerScanned_1_1] = context[8];
    context[__eInnerScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::repeated_stvar_left( context[__sCloseBracket_1_2], context[__sCloseBracket_1_1], context[10], context[11] ) )
      break;
    context[__eScanned_1_1] = context[12];
    context[__eScanned_1_1 + 1] = context[13];
    if( ! refalrts::svar_left( context[__sClosedLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 35 elems
    refalrts::Iter context[35];
    refalrts::zeros( context, 35 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eInnerScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [InnerScanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sBracketsSign_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[1]
    enum { __sInnerLnNum_1_1 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [InnerLnNum] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sOtherCloseBracket_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [OtherCloseBracket] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 32 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 33 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sBracketsSign_1_2 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromBracket, "StrFromBracket" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 10},
      {refalrts::icBracketRight, 0, 0, 12, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eInnerScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sBracketsSign_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sInnerLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sCloseBracket_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 12},
      {refalrts::icsVarLeft, & context[10], & context[11], __sOtherCloseBracket_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOtherCloseBracket_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # CClose s.OtherCloseBracket#1 s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, context[10], context[11] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_right( context[12], context[13], context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eInnerScanned_1_1] = context[8];
    context[__eInnerScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[12], context[13] ) )
      break;
    context[__eScanned_1_1] = context[12];
    context[__eScanned_1_1 + 1] = context[13];
    if( ! refalrts::svar_left( context[__sOtherCloseBracket_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n25, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_ident( n40, & CClose<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n42 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n39, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sOtherCloseBracket_1_1] );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n35, n38 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    res = refalrts::splice_stvar( res, context[__sInnerLnNum_1_1] );
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
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 23 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 24 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromBracket, "StrFromBracket" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 10},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sCloseBracket_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCloseBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( ) ( e.Scanned#1 ) ( # CClose s.CloseBracket#1 s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n25, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n35 ) )
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
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 23 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseResult, "ParseResult" },
      { & TkReplace, "TkReplace" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 10},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( ) ( e.Scanned#1 ) ( & TkReplace s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkReplace, context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eInnerScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [InnerScanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sBracketsSign_1_1 = 25 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[1]
    enum { __sInnerLnNum_1_1 = 26 };
    
    //debug ::varInfo:: Mode[s] Index [InnerLnNum] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sBracketsSign_1_2 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromBracket, "StrFromBracket" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParsePattern, "ParsePattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketRight, 0, 0, 10, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eInnerScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sBracketsSign_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sInnerLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sCloseBracket_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.MultiBracket#1 ( s.BracketsSign#1 s.InnerLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eInnerScanned_1_1] = context[8];
    context[__eInnerScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerLnNum_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[10], context[11] ) )
      break;
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParsePattern, "ParsePattern" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n25, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n39 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n35, n38 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    res = refalrts::splice_stvar( res, context[__sInnerLnNum_1_1] );
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
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 23 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sNextResultTerm_1_1 = 24 };
    
    //debug ::varInfo:: Mode[s] Index [NextResultTerm] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sNextResultTerm_1_1, 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( ) ( e.Scanned#1 ) ( s.NextResultTerm#1 s.LnNum#1 e.Info#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextResultTerm_1_1], context[10], context[11] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[10], context[11] ) )
      break;
    // Unused closed variable e.Info#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
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
    refalrts::push_stack( n44 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n42, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::link_brackets( n40, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n38, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n4 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 3 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sOldMode_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [OldMode] Depth[1] Usings[1]
    enum { __sNewMode_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [NewMode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __eIndex_1_2 = 8 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sOldMode_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNewMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOldMode_1_1, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNewMode_1_1, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'h', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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

static refalrts::FnResult CheckAddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_CheckAddVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sMode_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __tContext_2_1 = 6 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    enum { __sLnNum_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CSuccess<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CSuccess s.Depth#2
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
    if( ! refalrts::ident_left(  & CSuccess<int>::name, context[0], context[1] ) )
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __tContext_2_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    enum { __sOldMode_2_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [OldMode] Depth[2] Usings[1]
    enum { __sOldMode_2_2 = 12 };
    
    //debug ::varInfo:: Mode[s] Index [OldMode] Depth[2] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & InvalidModeVariableError, "InvalidModeVariableError" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CInvalidMode<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sOldMode_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CInvalidMode s.Depth#2 s.OldMode#2
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
    if( ! refalrts::ident_left(  & CInvalidMode<int>::name, context[0], context[1] ) )
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
    if( ! refalrts::alloc_name( n1, & InvalidModeVariableError, "InvalidModeVariableError" ) )
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __tContext_2_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    enum { __sMode_1_2 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CAlreadyBounded<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'h', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, '^', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'v', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CAlreadyBounded s.Depth#2
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
    if( ! refalrts::ident_left(  & CAlreadyBounded<int>::name, context[0], context[1] ) )
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tContext_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __sFnContextModifier_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [FnContextModifier] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __sMode_1_2 = 9 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[2]
    enum { __eIndex_1_2 = 10 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sFnContextModifier_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sFnContextModifier_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
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
    if( ! refalrts::alloc_name( n5, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & lambda_CheckAddVariable_0, "lambda_CheckAddVariable_0" ) )
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
      { & TkOpenBracket, "TkOpenBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '(', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenBracket
    if( ! refalrts::function_left( & TkOpenBracket, context[0], context[1] ) )
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
      { & TkCloseBracket, "TkCloseBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, ')', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkCloseBracket
    if( ! refalrts::function_left( & TkCloseBracket, context[0], context[1] ) )
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
      { & TkOpenCall, "TkOpenCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, context[0], context[1] ) )
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
      { & TkCloseCall, "TkCloseCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkCloseCall
    if( ! refalrts::function_left( & TkCloseCall, context[0], context[1] ) )
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
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '[', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenADT
    if( ! refalrts::function_left( & TkOpenADT, context[0], context[1] ) )
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
      { & TkCloseADT, "TkCloseADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, ']', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkCloseADT
    if( ! refalrts::function_left( & TkCloseADT, context[0], context[1] ) )
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '(', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // # Brackets
    if( ! refalrts::ident_left(  & Brackets<int>::name, context[0], context[1] ) )
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '[', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // # ADT_Brackets
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[0], context[1] ) )
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CallBrackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // # CallBrackets
    if( ! refalrts::ident_left(  & CallBrackets<int>::name, context[0], context[1] ) )
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

extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ParseResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 35 elems
    refalrts::Iter context[35];
    refalrts::zeros( context, 35 );
    enum { __eFunctions_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __tErrorList_2_1 = 31 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tContext_2_1 = 32 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sMode_2_1 = 33 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkVariable, "TkVariable" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 0, 14, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 12},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 14},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.SymTable#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2 s.Mode#2 s.Depth#2
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
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[12];
    context[__eTail_1_1 + 1] = context[13];
    context[__eIndex_1_1] = context[14];
    context[__eIndex_1_1 + 1] = context[15];
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
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_name( n12, & TkVariable, "TkVariable" ) )
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
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_2_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tErrorList_2_1 = 29 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[2] Usings[1]
    enum { __tContext_2_1 = 30 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 0, 14, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 12},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_2_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.SymTable#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) ( e.Index#1 ) t.ErrorList#2 t.Context#2
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
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[12];
    context[__eTail_1_1 + 1] = context[13];
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
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
      { & TkOpenBracket, "TkOpenBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenBracket
    if( ! refalrts::function_left( & TkOpenBracket, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & Brackets<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { & TkOpenCall, "TkOpenCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CallBrackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, & CallBrackets<int>::name ) )
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
      { & TkCloseBracket, "TkCloseBracket" },
      { & TkOpenBracket, "TkOpenBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenBracket
    if( ! refalrts::function_left( & TkOpenBracket, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkCloseBracket, "TkCloseBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { & TkCloseCall, "TkCloseCall" },
      { & TkOpenCall, "TkOpenCall" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkCloseCall, "TkCloseCall" ) )
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sChar_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [Char] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkChar, "TkChar" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkChar s.LnNum#1 s.Char#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkChar, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_name( n12, & TkChar, "TkChar" ) )
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
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sNumber_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [Number] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkNumber, "TkNumber" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkNumber s.LnNum#1 s.Number#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkNumber, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_name( n12, & TkNumber, "TkNumber" ) )
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
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 30 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 32 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkName, "TkName" },
      { & ST_CheckDeclared, "ST_CheckDeclared" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkName s.LnNum#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    context[__eName_1_1] = context[12];
    context[__eName_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckDeclared, "ST_CheckDeclared" ) )
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
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    refalrts::link_brackets( n13, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 37 elems
    refalrts::Iter context[37];
    refalrts::zeros( context, 37 );
    enum { __eFunctions_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 19 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 20 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sNameLnNum_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [NameLnNum] Depth[1] Usings[1]
    enum { __eName_1_1 = 32 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __sMarkerLnNum_1_1 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [MarkerLnNum] Depth[1] Usings[1]
    enum { __eName_1_2 = 35 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkIdentifier, "TkIdentifier" },
      { & ST_CheckIdent, "ST_CheckIdent" },
      { & ParseResult, "ParseResult" },
      { & TkName, "TkName" },
      { & TkIdentMarker, "TkIdentMarker" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 12},
      {refalrts::icBracketLeft, 0, 0, 14, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 14},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sMarkerLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icsVarLeft, & context[14], & context[15], __sNameLnNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 14},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNameLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkIdentMarker s.MarkerLnNum#1 ) ( & TkName s.NameLnNum#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, context[12], context[13] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[14], context[15] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMarkerLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sNameLnNum_1_1], context[14], context[15] ) )
      break;
    context[__eName_1_1] = context[14];
    context[__eName_1_1 + 1] = context[15];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckIdent, "ST_CheckIdent" ) )
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
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & TkIdentifier, "TkIdentifier" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    refalrts::link_brackets( n13, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNameLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParseResult, "ParseResult" },
      { & TkIdentMarker, "TkIdentMarker" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icChar, 0, 0, '#', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkIdentMarker s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n24, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 35 elems
    refalrts::Iter context[35];
    refalrts::zeros( context, 35 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 31 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __eIndex_1_2 = 33 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParseResult_0, "lambda_ParseResult_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & CheckUseVariable, "CheckUseVariable" },
      { & Fetch, "Fetch" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkVariable s.LnNum#1 s.Mode#1 e.Index#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[12], context[13] ) )
      break;
    context[__eIndex_1_1] = context[12];
    context[__eIndex_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CheckUseVariable, "CheckUseVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & lambda_ParseResult_0, "lambda_ParseResult_0" ) )
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
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
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
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 37 elems
    refalrts::Iter context[37];
    refalrts::zeros( context, 37 );
    enum { __eFunctions_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 19 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 20 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNumADT_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumADT] Depth[1] Usings[1]
    enum { __sLnNumName_1_1 = 32 };
    
    //debug ::varInfo:: Mode[s] Index [LnNumName] Depth[1] Usings[1]
    enum { __eName_1_1 = 33 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[1]
    enum { __eName_1_2 = 35 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Name] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseADT, "TkCloseADT" },
      { & ST_CheckDeclared, "ST_CheckDeclared" },
      { & ParseResult, "ParseResult" },
      { & TkName, "TkName" },
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 12},
      {refalrts::icFuncLeft, 0, 0, 4, 12},
      {refalrts::icBracketLeft, 0, 0, 14, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 14},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNumADT_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icsVarLeft, & context[14], & context[15], __sLnNumName_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 14},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumName_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNumADT_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenADT s.LnNumADT#1 ) ( & TkName s.LnNumName#1 e.Name#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[12], context[13] ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, context[12], context[13] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[14], context[15] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNumADT_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNumName_1_1], context[14], context[15] ) )
      break;
    context[__eName_1_1] = context[14];
    context[__eName_1_1 + 1] = context[15];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & ST_CheckDeclared, "ST_CheckDeclared" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n11, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n12, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sLnNumADT_1_1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNumName_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    // issue here memory for vars with 32 elems
    refalrts::Iter context[32];
    refalrts::zeros( context, 32 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sLnNum_1_2 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    enum { __tSymTable_1_2 = 31 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ST_GetAnyName, "ST_GetAnyName" },
      { & TkCloseADT, "TkCloseADT" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParseResult, "ParseResult" },
      { & TkOpenADT, "TkOpenADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 12},
      {refalrts::icFuncLeft, 0, 0, 4, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icChar, 0, 0, '[', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen & TkOpenADT s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[12], context[13] ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
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
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n26, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
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
    if( ! refalrts::alloc_ident( n36, & ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_close_call( n47 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n47 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n40, n46 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n41, n45 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_2] );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n34, n39 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n35, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 32 elems
    refalrts::Iter context[32];
    refalrts::zeros( context, 32 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sOpenBracket_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [OpenBracket] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sOpenBracket_1_2 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [OpenBracket] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParseResult_2, "lambda_ParseResult_2" },
      { & Fetch, "Fetch" },
      { & lambda_ParseResult_1, "lambda_ParseResult_1" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & COpen<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sOpenBracket_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOpenBracket_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sOpenBracket_1_1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( # COpen s.OpenBracket#1 s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenBracket_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sOpenBracket_1_2], context[__sOpenBracket_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & lambda_ParseResult_1, "lambda_ParseResult_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & lambda_ParseResult_2, "lambda_ParseResult_2" ) )
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
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n8, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n9, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sOpenBracket_1_2] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sOpenBracket_1_1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 38 elems
    refalrts::Iter context[38];
    refalrts::zeros( context, 38 );
    enum { __eFunctions_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 19 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 20 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eInnerScanned_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [InnerScanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 29 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sBracketsSign_1_1 = 31 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 32 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sOpenLnNum_1_1 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [OpenLnNum] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 35 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sCloseBracket_1_2 = 36 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[2]
    enum { __sLnNum_1_1 = 37 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 12},
      {refalrts::icBracketRight, 0, 0, 14, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eInnerScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[14], & context[15], __sBracketsSign_1_1, 0},
      {refalrts::icsVarLeft, & context[14], & context[15], __sOpenLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[14], & context[15], __sCloseBracket_1_1, 0},
      {refalrts::icsRepeatLeft, (void*)__sCloseBracket_1_2, (void*)__sCloseBracket_1_1, 0, 12},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 14},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) ( # CClose s.CloseBracket#1 s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, context[12], context[13] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_right( context[14], context[15], context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eInnerScanned_1_1] = context[10];
    context[__eInnerScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[14], context[15] ) )
      break;
    if( ! refalrts::svar_left( context[__sOpenLnNum_1_1], context[14], context[15] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[14], context[15] ) )
      break;
    if( ! refalrts::repeated_stvar_left( context[__sCloseBracket_1_2], context[__sCloseBracket_1_1], context[12], context[13] ) )
      break;
    context[__eScanned_1_1] = context[14];
    context[__eScanned_1_1 + 1] = context[15];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseBlock, "ParseBlock" },
      { & ParseResult_Block, "ParseResult_Block" },
      { & TkOpenBlock, "TkOpenBlock" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 12},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( & TkOpenBlock s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkOpenBlock, context[12], context[13] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult_Block, "ParseResult_Block" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & ParseBlock, "ParseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 35 elems
    refalrts::Iter context[35];
    refalrts::zeros( context, 35 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eInnerScanned_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [InnerScanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sBracketsSign_1_1 = 29 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[1]
    enum { __sOpenLnNum_1_1 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [OpenLnNum] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 31 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 33 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sBracketsSign_1_2 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [BracketsSign] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromBracket, "StrFromBracket" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketRight, 0, 0, 12, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eInnerScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sBracketsSign_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sOpenLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sCloseBracket_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOpenLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sBracketsSign_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInnerScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ( s.BracketsSign#1 s.OpenLnNum#1 s.CloseBracket#1 e.Scanned#1 ) ) ( e.InnerScanned#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_right( context[12], context[13], context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eMultiBracket_1_1] = context[8];
    context[__eMultiBracket_1_1 + 1] = context[9];
    context[__eInnerScanned_1_1] = context[10];
    context[__eInnerScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketsSign_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sOpenLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[12], context[13] ) )
      break;
    context[__eScanned_1_1] = context[12];
    context[__eScanned_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketsSign_1_2], context[__sBracketsSign_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n25, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
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
    refalrts::link_brackets( n37, n40 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n38, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, context[__eInnerScanned_1_1], context[__eInnerScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketsSign_1_2] );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n37 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sCloseBracket_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [CloseBracket] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromBracket, "StrFromBracket" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CClose<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 12},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sCloseBracket_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCloseBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( ) ( e.Scanned#1 ) ( # CClose s.CloseBracket#1 s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sCloseBracket_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n25, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & StrFromBracket, "StrFromBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '"' ) )
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
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n39 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n37, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n37 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eResult_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
      { & TkSemicolon, "TkSemicolon" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 12},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( ) ( e.Result#1 ) ( & TkSemicolon s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eResult_1_1] = context[10];
    context[__eResult_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
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
    if( ! refalrts::alloc_name( n3, & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n5, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
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

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eResult_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sLnNum_1_2 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseBlock, "TkCloseBlock" },
      { & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 12},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( ) ( e.Result#1 ) ( & TkCloseBlock s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseBlock, context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eResult_1_1] = context[10];
    context[__eResult_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_name( n22, & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
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
    if( ! refalrts::alloc_name( n33, & TkCloseBlock, "TkCloseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n32, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n24, n31 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n25, n30 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFunctions_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 17 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 18 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eResult_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Result] Depth[1] Usings[1]
    enum { __eTail_1_1 = 25 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 27 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sLnNum_1_2 = 28 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseBlock, "TkCloseBlock" },
      { & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" },
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { & TkEOF, "TkEOF" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 12},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[12], & context[13], __sLnNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'F', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( ) ( e.Result#1 ) ( & TkEOF s.LnNum#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkEOF, context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eResult_1_1] = context[10];
    context[__eResult_1_1 + 1] = context[11];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLnNum_1_2], context[__sLnNum_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    if( ! refalrts::alloc_char( n15, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & Cntx_ResetAfterSentence, "Cntx_ResetAfterSentence" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & TkCloseBlock, "TkCloseBlock" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n30, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_2] );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n22, n29 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n23, n28 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n24, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n2 );
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
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFunctions_1_1], context[__eFunctions_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eFunctions_1_1 = 12 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 14 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 15 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 16 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 17 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 21 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __tUnexpected_1_1 = 23 };
    
    //debug ::varInfo:: Mode[t] Index [Unexpected] Depth[1] Usings[1]
    enum { __eTail_1_1 = 24 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddUnexpected, "EL_AddUnexpected" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 4},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 10},
      {refalrts::ictVarLeft, & context[0], & context[1], __tUnexpected_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tUnexpected_1_1, 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( ) ( e.Scanned#1 ) t.Unexpected#1 e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    context[__eSentences_1_1] = context[4];
    context[__eSentences_1_1 + 1] = context[5];
    context[__ePattern_1_1] = context[6];
    context[__ePattern_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[10];
    context[__eScanned_1_1 + 1] = context[11];
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
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_name( n5, & EL_AddUnexpected, "EL_AddUnexpected" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
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
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'm' ) )
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
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_bracket( n35 ) )
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
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__tContext_1_1] );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n4 );
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
    res = refalrts::splice_stvar( res, context[__tUnexpected_1_1] );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

//$LABEL CExistVariable
template <typename T>
struct CExistVariable {
  static const char *name() {
    return "CExistVariable";
  }
};

//$LABEL CNotFound
template <typename T>
struct CNotFound {
  static const char *name() {
    return "CNotFound";
  }
};

static refalrts::FnResult CheckUseVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_CheckUseVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sMode_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __tContext_2_1 = 6 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 7 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    enum { __sLnNum_1_1 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CExistVariable<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CExistVariable s.Depth#2
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
    if( ! refalrts::ident_left(  & CExistVariable<int>::name, context[0], context[1] ) )
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __tContext_2_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    enum { __sDepth_2_1 = 10 };
    
    //debug ::varInfo:: Mode[s] Index [Depth] Depth[2] Usings[1]
    enum { __sOldMode_2_1 = 11 };
    
    //debug ::varInfo:: Mode[s] Index [OldMode] Depth[2] Usings[1]
    enum { __sOldMode_2_2 = 12 };
    
    //debug ::varInfo:: Mode[s] Index [OldMode] Depth[2] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & InvalidModeVariableError, "InvalidModeVariableError" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CInvalidMode<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sDepth_2_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sOldMode_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CInvalidMode s.Depth#2 s.OldMode#2
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
    if( ! refalrts::ident_left(  & CInvalidMode<int>::name, context[0], context[1] ) )
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
    if( ! refalrts::alloc_name( n1, & InvalidModeVariableError, "InvalidModeVariableError" ) )
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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __tErrorList_1_1 = 4 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 6 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 7 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __tContext_2_1 = 9 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & EL_AddErrorAt, "EL_AddErrorAt" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CNotFound<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icIdentRight, 0, 0, 0, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.ErrorList#1 s.LnNum#1 s.Mode#1 ( e.Index#1 ) t.Context#2 # CNotFound
    if( ! refalrts::ident_right(  & CNotFound<int>::name, context[0], context[1] ) )
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
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
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 2 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tContext_1_1 = 3 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __sLnNum_1_1 = 4 };
    
    //debug ::varInfo:: Mode[s] Index [LnNum] Depth[1] Usings[1]
    enum { __sMode_1_1 = 5 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[1]
    enum { __eIndex_1_1 = 6 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[1]
    enum { __sMode_1_2 = 8 };
    
    //debug ::varInfo:: Mode[s] Index [Mode] Depth[1] Usings[2]
    enum { __eIndex_1_2 = 9 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Index] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Cntx_CheckVariable, "Cntx_CheckVariable" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLnNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLnNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Cntx_CheckVariable, "Cntx_CheckVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & lambda_CheckUseVariable_0, "lambda_CheckUseVariable_0" ) )
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

//$LABEL CCreateClosure
template <typename T>
struct CCreateClosure {
  static const char *name() {
    return "CCreateClosure";
  }
};

static refalrts::FnResult ParseResult_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ParseResult_Block_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 35 elems
    refalrts::Iter context[35];
    refalrts::zeros( context, 35 );
    enum { __eRealContext_2_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [RealContext] Depth[2] Usings[1]
    enum { __sNextNum_1_1 = 18 };
    
    //debug ::varInfo:: Mode[s] Index [NextNum] Depth[1] Usings[1]
    enum { __eFunctions_1_1 = 19 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 21 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 22 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __tContext_1_1 = 23 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eSentences_1_1 = 24 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 26 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 28 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 30 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __eTail_1_1 = 32 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __sFunctionNumber_2_1 = 34 };
    
    //debug ::varInfo:: Mode[s] Index [FunctionNumber] Depth[2] Usings[1]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkName, "TkName" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CLambdaName<int>::name,
      & CCreateClosure<int>::name,
      & CallBrackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eRealContext_2_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNextNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 4},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tContext_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 0, 14, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 6},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 12},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 14},
      {refalrts::icsVarLeft, & context[0], & context[1], __sFunctionNumber_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sFunctionNumber_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRealContext_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NextNum#1 ( e.Functions#1 ) t.ErrorList#1 t.SymTable#1 t.Context#1 ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( e.Tail#1 ) s.FunctionNumber#2 ( e.RealContext#2 )
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
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_left( context[14], context[15], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[6];
    context[__eSentences_1_1 + 1] = context[7];
    context[__ePattern_1_1] = context[8];
    context[__ePattern_1_1 + 1] = context[9];
    context[__eMultiBracket_1_1] = context[10];
    context[__eMultiBracket_1_1 + 1] = context[11];
    context[__eScanned_1_1] = context[12];
    context[__eScanned_1_1 + 1] = context[13];
    context[__eTail_1_1] = context[14];
    context[__eTail_1_1 + 1] = context[15];
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
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_ident( n12, & CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_ident( n15, & CCreateClosure<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_ident( n19, & CLambdaName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n10, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n11, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eRealContext_2_1], context[__eRealContext_2_1 + 1] );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sFunctionNumber_2_1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eSentences_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 18 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 20 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sNextNum_1_1 = 22 };
    
    //debug ::varInfo:: Mode[s] Index [NextNum] Depth[1] Usings[1]
    enum { __eFunctions_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 25 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 26 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tContext_1_1 = 29 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __sNextNum_1_2 = 30 };
    
    //debug ::varInfo:: Mode[s] Index [NextNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Dec, "Dec" },
      { & TkName, "TkName" },
      { & ParseResult, "ParseResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CLambdaName<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 2},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icsVarLeft, & context[10], & context[11], __sNextNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 10},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::ictVarLeft, & context[12], & context[13], __tContext_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[2];
    context[__eSentences_1_1 + 1] = context[3];
    context[__ePattern_1_1] = context[4];
    context[__ePattern_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextNum_1_1], context[10], context[11] ) )
      break;
    context[__eFunctions_1_1] = context[10];
    context[__eFunctions_1_1 + 1] = context[11];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[12], context[13] ) )
      break;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNum_1_2], context[__sNextNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ParseResult, "ParseResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
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
    if( ! refalrts::alloc_name( n12, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & CLambdaName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Dec, "Dec" ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n10, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n11, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sNextNum_1_2] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eSentences_1_1 = 14 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Sentences] Depth[1] Usings[1]
    enum { __ePattern_1_1 = 16 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Pattern] Depth[1] Usings[1]
    enum { __eMultiBracket_1_1 = 18 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [MultiBracket] Depth[1] Usings[1]
    enum { __eScanned_1_1 = 20 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Scanned] Depth[1] Usings[1]
    enum { __sNextNum_1_1 = 22 };
    
    //debug ::varInfo:: Mode[s] Index [NextNum] Depth[1] Usings[1]
    enum { __eFunctions_1_1 = 23 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Functions] Depth[1] Usings[1]
    enum { __tErrorList_1_1 = 25 };
    
    //debug ::varInfo:: Mode[t] Index [ErrorList] Depth[1] Usings[1]
    enum { __tSymTable_1_1 = 26 };
    
    //debug ::varInfo:: Mode[t] Index [SymTable] Depth[1] Usings[1]
    enum { __eTail_1_1 = 27 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [Tail] Depth[1] Usings[1]
    enum { __tContext_1_1 = 29 };
    
    //debug ::varInfo:: Mode[t] Index [Context] Depth[1] Usings[1]
    enum { __eFreeContext_1_1 = 30 };
    //for removing
    
    //debug ::varInfo:: Mode[e] Index [FreeContext] Depth[1] Usings[1]
    enum { __sNextNum_1_2 = 32 };
    
    //debug ::varInfo:: Mode[s] Index [NextNum] Depth[1] Usings[2]
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & CreateContext, "CreateContext" },
      { & Dec, "Dec" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icContextSet, 0, 0, __eSentences_1_1, 2},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eMultiBracket_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 8},
      {refalrts::icsVarLeft, & context[10], & context[11], __sNextNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunctions_1_1, 10},
      {refalrts::ictVarLeft, & context[0], & context[1], __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, & context[0], & context[1], __tSymTable_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 12, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::ictVarLeft, & context[12], & context[13], __tContext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFreeContext_1_1, 12},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFreeContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunctions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tSymTable_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tContext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSentences_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMultiBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Sentences#1 ) ( e.Pattern#1 ) ( e.MultiBracket#1 ) ( e.Scanned#1 ) ( s.NextNum#1 e.Functions#1 ) t.ErrorList#1 t.SymTable#1 ( t.Context#1 e.FreeContext#1 ) e.Tail#1
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
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eSentences_1_1] = context[2];
    context[__eSentences_1_1 + 1] = context[3];
    context[__ePattern_1_1] = context[4];
    context[__ePattern_1_1 + 1] = context[5];
    context[__eMultiBracket_1_1] = context[6];
    context[__eMultiBracket_1_1 + 1] = context[7];
    context[__eScanned_1_1] = context[8];
    context[__eScanned_1_1 + 1] = context[9];
    if( ! refalrts::svar_left( context[__sNextNum_1_1], context[10], context[11] ) )
      break;
    context[__eFunctions_1_1] = context[10];
    context[__eFunctions_1_1 + 1] = context[11];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tContext_1_1], context[12], context[13] ) )
      break;
    context[__eFreeContext_1_1] = context[12];
    context[__eFreeContext_1_1 + 1] = context[13];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNum_1_2], context[__sNextNum_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Dec, "Dec" ) )
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
    if( ! refalrts::alloc_name( n7, & CreateContext, "CreateContext" ) )
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
    if( ! refalrts::alloc_name( n11, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
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
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n26 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n23, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eMultiBracket_1_1], context[__eMultiBracket_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__eSentences_1_1], context[__eSentences_1_1 + 1] );
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
